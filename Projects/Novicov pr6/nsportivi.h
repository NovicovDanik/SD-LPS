#ifndef NSPORTIVI_H_INCLUDED
#define NSPORTIVI_H_INCLUDED
struct Data {
    int zi;
    int luna;
    int an;
};
struct Sport {
    int id;
    char nume[21];
    Data dn;
    char dis[21];
    int inalt;
    int greu;
    char categoria[21];
};

#endif // NSPORTIVI_H_INCLUDED
