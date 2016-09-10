#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;


int main() {
    int h,m,p;
    string hs,ms;
    while(1){
    cin>>h>>m;

    p=m;
    if(m>30 && m<60)
    h=h+1;

        if(h==1)
        hs="one";
        else if(h==2)
        hs="two";
        else if(h==3)
        hs="three";
        else if(h==4)
        hs="four";
        else if(h==5)
        hs="five";
        else if(h==6)
        hs="six";
        else if(h==7)
        hs="seven";
        else if(h==8)
        hs="eight";
        else if(h==9)
        hs="nine";
        else if(h==10)
        hs="ten";
        else if(h==11)
        hs="eleven";
        else if(h==12)
        hs="twelve";
        else if(h==13)
        hs="one";

    if(m>30 && m<=59)
    m=60-m;
        if(m==1)
        ms="one minutes";
        else if(m==2)
        ms="two minutes";
        else if(m==3)
        ms="three minutes";
        else if(m==4)
        ms="four minutes";
        else if(m==5)
        ms="five minutes";
        else if(m==6)
        ms="six minutes";
        else if(m==7)
        ms="seven minutes";
        else if(m==8)
        ms="eight minutes";
        else if(m==9)
        ms="nine minutes";
        else if(m==10)
        ms="ten minutes";
        else if(m==11)
        ms="eleven minutes";
        else if(m==12)
        ms="twelve minutes";
        else if(m==13)
        ms="thirteen minutes";
        else if(m==14)
        ms="fourteen minutes";
        else if(m==15)
        ms="quater";
        else if(m==16)
        ms="sixteen minutes";
        else if(m==17)
        ms="seventeen minutes";
        else if(m==18)
        ms="eighteen minutes";
        else if(m==19)
        ms="nineteen minutes";
        else if(m==20)
        ms="twenty minutes";
        else if(m==21)
        ms="twenty one minutes";
        else if(m==22)
        ms="twenty two minutes";
        else if(m==23)
        ms="twenty three minutes";
        else if(m==24)
        ms="twenty four minutes";
        else if(m==25)
        ms="twenty five minutes";
        else if(m==26)
        ms="twenty six minutes";
        else if(m==27)
        ms="twenty seven minutes";
        else if(m==28)
        ms="twenty eight minutes";
        else if(m==29)
        ms="twenty nine minutes";
        else if(m==30)
        ms="half";

        if(p>0 && p<=30)
        cout<<ms<<" " "past" " "<<hs;
        if(p>30 && p<60)
        cout<<ms<<" " "to" " "<<hs;
        if(p==0)
        cout<<hs<<" " "o' clock";

    }
    return 0;
}
