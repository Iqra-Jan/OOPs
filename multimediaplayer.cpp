#include<iostream>
using namespace std;
class Mediafile{
    public:
    virtual void play() = 0;
};
class Audio: public Mediafile{
    void play(){
        cout<<"playing audio.."<<endl;
    }
};
class Video: public Mediafile{
    void play(){
        cout<<"starting video.."<<endl;
    }
};
class Image: public Mediafile{
    void play(){
        cout<<"processing image.."<<endl;
    }
};
int main(){
    Mediafile *m[3];
    Audio a; 
    Video v;
    Image i;


 m[0] = &a;
 m[1] = &v;
 m[2] = &i;
 for (int j = 0; j<3; j++){
    m[j]->play();
 }   
 return 0;
}