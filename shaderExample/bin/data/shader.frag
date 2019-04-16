
uniform float time;
uniform vec2 mouse;

void main()
{
    vec2 posPixel = gl_FragCoord.xy;
    float dist = distance(posPixel, mouse);
        gl_FragColor = vec4(vec3(sin(dist/100.0 + sin(posPixel.x*1.1))*0.5 + 0.5), 1.0);
    
}
