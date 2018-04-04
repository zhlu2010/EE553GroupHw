#include <iostream>
#include<fstream>
using namespace std;


class Postscript {
private:
    ofstream opener;
public:
    Postscript(const string& name ) {
        opener.open(name);
    }

    ~Postscript() {
        opener.close();
    }

    void line(double x1, double y1, double x2, double y2) {
        opener << x1 << ' ' << y1 << "move to" << endl << x2 << ' ' << y2 << ' ' << "lineto" << ' ' << "stroke";
    }

    void setColor (int r, int g, int b) {
        opener << r << ' ' << g << ' ' << b << "setrgbcolor" << endl;
    }

    void fillRect(double x, double y, double w, double h) {
        opener << x << ' ' << y << ' ' << "moveto" << endl
             << x + w << ' ' << y << "line to" << endl
             << x + w << ' ' << y + h << "line to" << endl
             << x << ' ' << y + h << "line to" << endl << "closepath fill" << endl;
    }

    void setFillColor(int r, int g, int b) {
        opener << "gsave" << r << ' ' << g << ' ' << b << ' ' << "setrgbcolor grestore" << endl;
    }

    void drawRect(double x, double y, double w, double h) {
        opener << x << ' ' << y << ' ' << "moveto" << endl
             << x + w << ' ' << y << "line to" << endl
             << x + w << ' ' << y + h << "line to" << endl
             << x << ' ' << y + h << "line to" << endl << "closepath stroke" << endl;
    }

    void setStrokeColor(double r, double g, double b) {
        opener << "gsave" << r << ' ' << g << ' ' << b << ' ' << "setrgbcolor grestore";
    }
};


int main() {
    Postscript p("test.ps");
    p.line(0,0, 300,400);  // 0 0 moveto 300 400 lineto stroke
    int r = 255, g = 0, b = 0;
    p.setColor(int r, int g, int b);
    p.drawRect(x, y, w, h);   // x y moveto x+w y lineto x+w y+h lineto ... closepath stroke
    p.fillRect(x, y, w, h);   // x y moveto x+w y lineto x+w y+h lineto ... closepath fill
    p.setFillColor(int r, int g, int b); // 1.0 0.5 0 setrgbcolor
    // optional, figure out how you want to manage color
    p.setStrokeColor(int r, int g, int b);
    p.drawTriangle(x1,y1, x2,y2, x3,y3);
    p.fillTriangle(x1,y1, x2,y2, x3,y3);
    p.drawCircle(x,y,r); // x y 0 360 r arc stroke
    p.text(x,y, "testing testing 123"); // look it up  setfont  (ABC) show

    p.grid(300, 50, 500, 400, 50, 700);



}