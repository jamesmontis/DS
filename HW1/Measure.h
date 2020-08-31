// James Montis
// class Measure for Lab 2
//
// commented out operator= kept getting linker errors undiagnosable
/*Undefined symbols for architecture x86_64:
  "Measure::Measure(Measure&)", referenced from:
      Measure::operator=(Measure const&) in DSLab2main_montisJ.cpp.o
ld: symbol(s) not found for architecture x86_64*/

// i've had strange c++ errors on this mac before and didnt want to swap over to windows
// with time running short.

// otherwise works pretty well

#ifndef DSLAB2_MONTISJ_MEASURE_H
#define DSLAB2_MONTISJ_MEASURE_H

class Measure {
private:
    int yards;
    int feet;
    int inches;
public:
    Measure(int yds, int ft, int in){
        yards = yds;
        feet = ft;
        inches = in;
    }

    Measure(){
        yards = 0;
        feet = 0;
        inches = 0;
    }
    void setYards(int y){ yards = y;}
    void setFeet(int f) { feet = f;}
    void setInch(int i) { inches = i;}
    int getYards() { return yards ;}
    int getFeet() {return feet;}
    int getInch() {return inches;}
    void simplify();
    Measure operator+(const Measure&);
    Measure operator-(const Measure&);
    Measure operator=(const Measure&);
    bool operator<(const Measure&);
    bool operator>(const Measure&);
    bool operator==(const Measure&);
    Measure(Measure &obj);
    friend ostream &operator<<(ostream &strm, const Measure &obj);

    Measure &operator+=(const Measure &);
};

void Measure::simplify() {

    if (inches >=12){
        feet+=(inches/12);
        inches=inches%12;
    } else if (inches < 0){
        feet-=((abs(inches)/12)+1);
        inches=12-(abs(inches) % 12);
    }

    if (feet>=3){
        yards+=(feet/3);
        feet=feet%3;
    } else if (feet<0) {
        yards-=((abs(feet)/3)+1);
        feet=3-(abs(feet)%3);
    }
}

Measure Measure::operator+(const Measure &right){
    Measure temp;
    temp.yards=yards+right.yards;
    temp.inches=inches+right.inches;
    temp.feet=feet+right.feet;
    temp.simplify();
    return temp;
}

Measure Measure::operator-(const Measure&right){
    Measure temp;
    temp.yards=yards-right.yards;
    temp.inches=inches - right.inches;
    temp.feet=feet - right.feet;
    temp.simplify();
    return temp;
}

/*Measure Measure::operator=(const Measure&right){
    if (this != &right){
        yards = right.yards;
        feet = right.feet;
        inches = right.inches;
    }
    return *this;
}*/

bool Measure::operator<(const Measure&right){
    bool status;
    if (yards < right.yards){
        status = true;
    } else if ( feet == right.feet && inches < right.inches){
    status = true;
} else {
        status = false;
    }
    return status;
}

bool Measure::operator>(const Measure&right){
    bool status;
    if (yards > right.yards){
        status = true;
    } else if (feet == right.feet && inches < right.inches){
            status = true;
        } else {
        status = false;
    }
    return status;
}

bool Measure::operator==(const Measure&right){
    return (yards==right.yards && feet == right.feet && inches == right.inches) ? true : false;
}

ostream &operator << (ostream &strm, const Measure&obj){
    strm << obj.yards << " yards, " << obj.feet << " feet, " << obj.inches << " inches ";
    return strm;
}

Measure &Measure::operator+=(const Measure &right){
    yards+=right.yards;
    feet=right.feet;
    inches+=right.inches;

    if (inches >=12){
        feet+=(inches/12);
        inches=inches%12;
    } else if (inches < 0){
        feet-=((abs(inches)/12)+1);
        inches=12-(abs(inches) % 12);
    }

    if (feet>=3){
        yards+=(feet/3);
        feet=feet%3;
    } else if (feet<0) {
        yards-=((abs(feet)/3)+1);
        feet=3-(abs(feet)%3);
    }

    return *this;
}



#endif //DSLAB2_MONTISJ_MEASURE_H
