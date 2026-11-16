# ZMOD Liberty launcher banner (original design; Inter, SIL OFL).
from PIL import Image, ImageDraw, ImageFont, ImageFilter
import sys
F='/usr/share/fonts/opentype/inter/'
big=ImageFont.truetype(F+'InterDisplay-BlackItalic.otf',560)
sub=ImageFont.truetype(F+'InterDisplay-ExtraBoldItalic.otf',150)
tagf=ImageFont.truetype(F+'Inter-Bold.otf',62)
amber=(240,160,48,255); W,H=3600,1100
img=Image.new('RGBA',(W,H),(0,0,0,0)); d=ImageDraw.Draw(img)
def word(text,font,x,y,fill,track=0,outline=0,shadow=0):
    mask=Image.new('L',(W,H),0); md=ImageDraw.Draw(mask); cx=x
    for ch in text:
        b=md.textbbox((0,0),ch,font=font); md.text((cx-b[0] if cx==x else cx,y),ch,font=font,fill=255)
        cx+=font.getlength(ch)+track
    if shadow:
        sh=mask.filter(ImageFilter.GaussianBlur(12)).point(lambda v:int(v*.75))
        img.paste(Image.new('RGBA',(W,H),(0,0,0,255)),(shadow,shadow),sh)
    if outline:
        img.paste(Image.new('RGBA',(W,H),(12,12,14,255)),(0,0),mask.filter(ImageFilter.MaxFilter(outline)))
    if isinstance(fill,tuple): img.paste(Image.new('RGBA',(W,H),fill),(0,0),mask)
    else: img.paste(fill,(0,0),mask)
    return mask.getbbox()
grad=Image.new('RGBA',(W,H)); gd=ImageDraw.Draw(grad)
for y in range(H):
    t=min(1,max(0,(y-120)/480)); c=int(252-78*t); gd.line([(0,y),(W,y)],fill=(c,c,min(255,c+5),255))
zb=word('ZMOD',big,40,0,grad,track=-6,outline=11,shadow=16)
# second line: amber slanted block + LIBERTY + tagline
y2=zb[3]+40
lb=ImageDraw.Draw(Image.new('L',(1,1))).textbbox((0,0),'LIBERTY',font=sub)
capH=lb[3]-lb[1]
x=zb[0]+10; slant=int(capH*0.22)
d.polygon([(x+slant,y2),(x+slant+150,y2),(x+150,y2+capH),(x,y2+capH)],fill=amber)
lbbox=word('LIBERTY',sub,x+190,y2-lb[1],(238,238,242,255),track=34,outline=7)
tb=d.textbbox((0,0),'FOR ANDROID',font=tagf)
d.text((lbbox[2]+60-tb[0],y2+capH-(tb[3]-tb[1])-tb[1]),'FOR ANDROID',font=tagf,fill=(168,168,168,255))
img=img.crop(img.getbbox())
s=min(1400/img.width,412/img.height)
img=img.resize((round(img.width*s),round(img.height*s)),Image.LANCZOS)
out=img  # cropped to the logo itself
out.save(sys.argv[1])
prev=Image.new('RGBA',out.size,(10,11,13,255)); prev.alpha_composite(out); prev.convert('RGB').save(sys.argv[2])
print(img.size)
