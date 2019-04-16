
uniform float time;
uniform vec2 mouse;
uniform sampler2DRect img;


void main()
{
    
    vec2 posPixel = gl_FragCoord.xy;
    posPixel.y = 720.0- posPixel.y;
    float dist = distance(posPixel, mouse);
    posPixel.x += sin( time + posPixel.x*0.01)*300.0;
    
    vec3 color = texture2DRect(img, posPixel).rgb;
    gl_FragColor = vec4(color,1.0);
    
}
