# ZMOD Liberty launcher icon (original design; Inter, SIL OFL).
from PIL import Image, ImageDraw, ImageFont
import sys, os
F='/usr/share/fonts/opentype/inter/'
amber=(240,160,48,255)
def art(n):
    # Adaptive-icon foreground: 108dp canvas, content inside the 66dp safe zone.
    K=4; N=n*K; img=Image.new('RGBA',(N,N),(0,0,0,0)); d=ImageDraw.Draw(img)
    safe=N*66/108; x0=(N-safe)/2
    font=ImageFont.truetype(F+'InterDisplay-BlackItalic.otf',int(safe*0.92))
    b=d.textbbox((0,0),'Z',font=font); w=b[2]-b[0]; h=b[3]-b[1]
    bar=safe*0.10; gap=safe*0.07; total=h+gap+bar
    tx=(N-w)/2-b[0]; ty=(N-total)/2-b[1]
    d.text((tx,ty),'Z',font=font,fill=(242,242,246,255))
    by=(N-total)/2+h+gap; sl=bar*0.6
    d.polygon([(x0+safe*0.12+sl,by),(x0+safe*0.88+sl,by),(x0+safe*0.88,by+bar),(x0+safe*0.12,by+bar)],fill=amber)
    return img.resize((n,n),Image.LANCZOS)
res=sys.argv[1]
for dens,n in [('mdpi',108),('hdpi',162),('xhdpi',216),('xxhdpi',324),('xxxhdpi',432)]:
    art(n).save(f'{res}/drawable-{dens}/ic_launcher_artwork.png')
for dens,n in [('mdpi',48),('hdpi',72),('xhdpi',96),('xxhdpi',144),('xxxhdpi',192)]:
    a=art(n*108//72)  # legacy icon: the 72dp visible part of the adaptive canvas
    c=(a.width-n)//2; a=a.crop((c,c,c+n,c+n))
    bg=Image.new('RGBA',(n,n),(0,0,0,255)); bg.alpha_composite(a)
    bg.convert('RGB').save(f'{res}/mipmap-{dens}/ic_launcher.png')
    m=Image.new('L',(n*4,n*4),0); ImageDraw.Draw(m).ellipse((0,0,n*4-1,n*4-1),fill=255)
    r=Image.new('RGBA',(n,n),(0,0,0,0)); r.paste(bg,(0,0),m.resize((n,n),Image.LANCZOS))
    r.save(f'{res}/mipmap-{dens}/ic_launcher_round.png')
