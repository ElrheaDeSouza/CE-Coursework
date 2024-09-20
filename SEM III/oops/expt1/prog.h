namespace prog
{
   float per(float s,float a){return((s/a)*100);}


    char grd(float b)
    {

            if(b>=85)
            return 'O';
            else if(b<85&&b>=75)
                return 'A+';
                else if(b<75&&b>=65)
                    return 'A';
                else if(b<65&&b>=55)
                    return 'B+';
                else if(b<55&&b>50)
                    return 'B';
                else if(b<50&&b>=40)
                    return 'P';
                else
                    return 'F';
}
}
                    using namespace std;
                    using namespace prog;
