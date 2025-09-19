#include<iostream>
using namespace std;
class teacher{
    public:
    int age;
    static string n;
    static void name(){
        cout<<"Name of the teacher is: "<<n<<endl;
    }
    /*
    static void teacherAge(){
        cout<<"The age of the teacher is: "<<age<<endl;   ------> This will rise an error because of nonStatic DataMember can't used in static function.
    }
    */
};
string teacher::n="sahil Murtuza";
int main(){
    teacher::name();
}