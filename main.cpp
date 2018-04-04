#include <iostream>
#include<fstream>
using namespace std;


class Postscript {
private:
    ofstream opener;
    bool fontset = false;
    int strokeR, strokeG, strokeB;
    int fillR,fillG,fillB;
    bool storkeColor = false;
    bool fillColor = false;
public:
    Postscript(const string& name ) {
        opener.open(name);
    }

    ~Postscript() {
        opener.close();
    }

    void line(double x1, double y1, double x2, double y2) {
        if(storkeColor){
            opener<<"gsave"<<endl;
            setColor(strokeR,strokeG,strokeB);
        }
        opener << x1 << ' ' << y1 << " moveto" << endl << x2 << ' ' << y2 << ' ' << "lineto" << ' ' << "stroke"<<endl;
        if(storkeColor){
            opener<<"grestore"<<endl;
        }
    }

    void setColor (int r, int g, int b) {
        double cv = 255;
        opener << r/cv << ' ' << g/cv << ' ' << b/cv << " setrgbcolor" << endl;
    }
    void setFillColor(int r, int g, int b) {
        fillR = r;
        fillG = g;
        fillB = b;
        fillColor = true;
    }
    void setStrokeColor(double r, double g, double b) {
        strokeR = r;
        strokeG = g;
        strokeB = b;
        storkeColor = true;
    }

    void drawRect(double x, double y, double w, double h) {
        if(storkeColor){
            opener<<"gsave"<<endl;
            setColor(strokeR,strokeG,strokeB);
        }
        opener << x << ' ' << y << ' ' << "moveto" << endl
               << x + w << ' ' << y << " lineto" << endl
               << x + w << ' ' << y + h << " lineto" << endl
               << x << ' ' << y + h << " lineto" << endl << "closepath stroke" << endl;
        if(storkeColor){
            opener<<"grestore"<<endl;
        }
    }
    void fillRect(double x, double y, double w, double h) {
        if(fillColor){
            opener<<"gsave"<<endl;
            setColor(fillR,fillG,fillB);
        }
        opener << x << ' ' << y << ' ' << "moveto" << endl
             << x + w << ' ' << y << " lineto" << endl
             << x + w << ' ' << y + h << " lineto" << endl
             << x << ' ' << y + h << " lineto" << endl << "closepath fill" << endl;
        if(fillColor){
            opener<<"grestore"<<endl;
        }
    }

    void drawTriangle(int x1,int y1,int x2,int y2,int x3,int y3){
        if(storkeColor){
            opener<<"gsave"<<endl;
            setColor(strokeR,strokeG,strokeB);
        }
        opener<<x1<<" "<<y1<<" moveto "<<x2<<" "<<y2<<" lineto "<<x3<<" "<<y3<<" lineto closepath stroke"<<endl;
        if(storkeColor){
            opener<<"grestore"<<endl;
        }
    }
    void fillTriangle(int x1,int y1,int x2,int y2,int x3,int y3){
        if(fillColor){
            opener<<"gsave"<<endl;
            setColor(fillR,fillG,fillB);
        }
        opener<<x1<<" "<<y1<<" moveto "<<x2<<" "<<y2<<" lineto "<<x3<<" "<<y3<<" lineto closepath fill"<<endl;
        if(fillColor){
            opener<<"grestore"<<endl;
        }
    }
    void drawCircle(int x, int y, int r){
        if(storkeColor){
            opener<<"gsave"<<endl;
            setColor(strokeR,strokeG,strokeB);
        }
        opener<<x<<" "<<y<<" "<<r<<" "<<"0 360 arc stroke"<<endl;
        if(storkeColor){
            opener<<"grestore"<<endl;
        }
    }
    void fillRect(int x,int y,int w, int h){
        if(fillColor){
            opener<<"gsave"<<endl;
            setColor(fillR,fillG,fillB);
        }
        opener<<x<<" "<<y<<" moveto "<<x+w<<" "<<y<<" lineto "<<x+w<<" "<<y+h<<" line to "<<x<<" "<<y+h<<" lineto closepath fill"<<endl;
        if(fillColor){
            opener<<"grestore"<<endl;
        }
    }
    void setdefaultfont(){
        opener<<"/Times-Roman find font"<<endl
              <<"24 scalefont setfont"<<endl;
        fontset = true;
    }
    void text(int x, int y, string s){
        if(!fontset)
            setdefaultfont();
        opener<<x<<" "<<y<<" moveto ("<<s<<") show"<<endl;
    }
    void grid(int x1,int xd,int x2,int y1, int yd,int y2){
        for(int i = x1;i<=x2;i+=xd){
            line(i,y1,i,y2);
        }
        for(int j = y1;j<=y2;j+=yd){
            line(x1,j,x2,j);
        }
    }
};


int main() {
    Postscript p("test.ps");
    p.line(0,0, 300,400);  // 0 0 moveto 300 400 lineto stroke
    int r = 255, g = 0, b = 0;
    p.setColor( r,  g,  b);
    p.drawRect(0, 0,300,200);   // x y moveto x+w y lineto x+w y+h lineto ... closepath stroke
    p.fillRect(0,0,200,300);   // x y moveto x+w y lineto x+w y+h lineto ... closepath fill
    p.setFillColor(100,100,255); // 1.0 0.5 0 setrgbcolor
    // optional, figure out how you want to manage color
    p.setStrokeColor(0, 0, 200);
    p.drawTriangle(0,0, 100,0, 0,100);
    p.fillTriangle(0,0, 0,0, 0,0);
    p.drawCircle(300,300,200); // x y 0 360 r arc stroke
    p.text(100,100, "testing testing 123");
    p.grid(300, 50, 500, 400, 50, 700);
    return 0;

}