
uniform float time;
uniform vec2 mouse;
uniform sampler2DRect rock;
uniform sampler2DRect lines;
uniform float height;

void main()
{
    
    vec2 posPixel = gl_FragCoord.xy;
    
    posPixel.y = height-posPixel.y;
    
    vec3 rockColor = texture2DRect(rock, posPixel*0.0001).rgb;
    float angle = rockColor.g * 6.28;
    float magnitude = rockColor.b * 0.1;;
    vec2 posPixel2 = posPixel;
    posPixel2.x *= (magnitude*cos(angle -0.0 + time*1.0) + 1.0)*7.0 * sin(time);
    posPixel2.y += magnitude*sin(angle + 0.4 + 1.0);
    posPixel2.x -= 400.0;
    posPixel2.x *= 10.0;
    vec3 rockColor2 = texture2DRect(rock, posPixel2*0.1  ).rgb;
    float angle2 = rockColor2.r * 6.28;
    float magnitude2 = rockColor2.g * 10.0*sin(time);
    posPixel.x += magnitude2*cos(angle2);
    posPixel.y += magnitude2*sin(angle2);

    vec3 color = texture2DRect(lines, posPixel).rgb;
//
    
    gl_FragColor = vec4(color,1.0);
    
}
