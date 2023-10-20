#include <simplecpp>
main_program{
initCanvas("sinegraph",800,800);
imprintLine(100,100,100,300,COLOR("black"));
imprintLine(100,200,800,200,COLOR("black"));
int i=1;
while(i<9){
imprintLine(100+(3.14/2)*i*50,195,100+(3.14/2)*i*50,205,COLOR("black"));
i+=1;
}
int j=-4;
while(j<5){
imprintLine(95,200-0.25*j*50,105,200-0.25*j*50,COLOR("black"));
j+=1;
}
// Line pointerr(100,200,10, 10);
// pointerr.penDown();
float x=0;
// repeat(80){
// pointerr.move(31.4/4,-50*sin(x+0.314/2)+50*sin(x));
// x=x+0.314/2;
// wait(0.1);
// }
wait(3);
}