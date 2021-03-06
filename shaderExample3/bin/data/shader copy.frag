
uniform float time;
uniform vec2 mouse;
uniform sampler2DRect rock;
uniform sampler2DRect lines;
uniform float height;

void main()
{
    
    vec2 posPixel = gl_FragCoord.xy;
    posPixel.y = height-posPixel.y;
    
    vec3 rockColor = texture2DRect(rock, posPixel*0.4 + vec2(sin(time*0.01) * 300.0, 0.0) ).rgb;
    float angle = rockColor.r * 6.28
    float magnitude = rockColor.g * 40.0;
    posPixel.x += magnitude*cos(angle);
    posPixel.y += magnitude*sin(angle);

    vec3 color = texture2DRect(lines, posPixel).rgb;
//
    
    gl_FragColor = vec4(color,1.0);
    
}
