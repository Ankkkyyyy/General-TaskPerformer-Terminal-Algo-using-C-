#include<iostream>
#include<windows.h>
#include<mmsystem.h>
#include<stdio.h>

using namespace std;
int main()
{


char ch[100];
system("Color 0A"); // Color Code
cout<<" !!!!!!!!!!!!!!!!************WELCOME To The In-Built SYSTEM**************!!!!!!!!!!!!!!!! ";

do
{

cout<<"\n\n";
gets(ch);  // input of user ! you might thinking why am using gets(ch) instead of cin .Because cin will not consider space  but gets(ch) will consider space.


 string s = "https://www.google.com";                  // String for browser opening
 string y = "https://www.youtube.com";
 string t = "https://twitter.com/?lang=en";
 string f="https://www.facebook.com/";
 string ig="https://www.instagram.com/";

//- - - - - - - - - -   --  ---  --  Starter ROBO SPEAKING - -  - - - - - - - -
 if(strcmp(ch,"hi")==0)
 {
     PlaySound(TEXT("hlwrobowht"),NULL,SND_SYNC);
 }
      //  ---- ---     ----     ---    ----    ---      ---   -  FOR OPENING FILES images, PDF , videos etc.--- -  - - - - - - -- --
 else if(strcmp(ch,"best quote")==0)
 {
     PlaySound(TEXT("bqd"),NULL,SND_SYNC);
     ShellExecute(0,"open","C:\\Users\\hp\\Downloads\\DENT On the UNIVERSE.goal.jfif",NULL,NULL,SW_NORMAL);   //  FOR OPENING FILES
     PlaySound(TEXT("lgnd"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"show me quote")==0)
 {
     PlaySound(TEXT("bqd"),NULL,SND_SYNC);
     ShellExecute(0,"open","C:\\Users\\hp\\Downloads\\DENT On the UNIVERSE.goal.jfif",NULL,NULL,SW_NORMAL);   //  FOR OPENING FILES
     PlaySound(TEXT("lgnd"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"quote")==0)
 {
     PlaySound(TEXT("qt"),NULL,SND_SYNC);
     ShellExecute(0,"open","C:\\Users\\hp\\Downloads\\spiritual-quotes-.jpg",NULL,NULL,SW_NORMAL);   //  FOR OPENING FILES
     PlaySound(TEXT("qmss"),NULL,SND_SYNC);
 }
     //                                      ------------  BY STRING FOR OPENING BROWSERs-------
   else if(strcmp(ch,"open google")==0)
 {
     PlaySound(TEXT("ggle"),NULL,SND_SYNC);
     ShellExecute(NULL,"open",s.c_str(),NULL,NULL,SW_SHOWNORMAL);     // BY STRING FOR OPENING BROWSER
 }
 else if(strcmp(ch,"open youtube")==0)
 {
     PlaySound(TEXT("yt"),NULL,SND_SYNC);
     ShellExecute(NULL,"open",y.c_str(),NULL,NULL,SW_SHOWNORMAL);      // BY STRING FOR OPENING BROWSER
 }
 else if(strcmp(ch,"open instagram")==0)
 {
     PlaySound(TEXT("ig"),NULL,SND_SYNC);
     ShellExecute(NULL,"open",ig.c_str(),NULL,NULL,SW_SHOWNORMAL);    // BY STRING FOR OPENING BROWSER
 }
 else if(strcmp(ch,"open facebook")==0)
 {
     PlaySound(TEXT("fb"),NULL,SND_SYNC);
     ShellExecute(NULL,"open",f.c_str(),NULL,NULL,SW_SHOWNORMAL);     // BY STRING FOR OPENING BROWSER
 }
 else if(strcmp(ch,"open twitter")==0)
 {
     PlaySound(TEXT("tweet"),NULL,SND_SYNC);
     ShellExecute(NULL,"open",t.c_str(),NULL,NULL,SW_SHOWNORMAL);    // BY STRING FOR OPENING BROWSER
 }
 // -- - - - - - - - - ROBO SPEAKING --------- ---  -- - - - - - -

 else if(strcmp(ch,"hello")==0)
 {
     PlaySound(TEXT("hlwrobowht"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"hey")==0)
 {
     PlaySound(TEXT("hlwrobowht"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"who are you")==0)
 {

     PlaySound(TEXT("iamrobb"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"why are you so smart tell your secret")==0)
 {

     PlaySound(TEXT("secret3"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"why are you so smart")==0)
 {

     PlaySound(TEXT("secret3"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"how are you so smart")==0)
 {

     PlaySound(TEXT("secret3"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"what is your secret")==0)
 {

     PlaySound(TEXT("secret2"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"how are you")==0)
 {
     PlaySound(TEXT("mgoodwbu"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"waddup")==0)
 {
     PlaySound(TEXT("nm"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"wassup")==0)
 {
     PlaySound(TEXT("nm"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"do you have any girlfriend")==0)
 {
     PlaySound(TEXT("feelgr"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"do you have girlfriend")==0)
 {
     PlaySound(TEXT("feelgr"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"what you can do for me")==0)
 {
     PlaySound(TEXT("wycd"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"what you can do")==0)
 {
     PlaySound(TEXT("wycd"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"what things you can do")==0)
 {
     PlaySound(TEXT("wycd"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"so what you can do")==0)
 {
     PlaySound(TEXT("wycd"),NULL,SND_SYNC);
 }
 else if(strcmp(ch,"bye")==0)
 {
     PlaySound(TEXT("bye"),NULL,SND_SYNC);
     exit(0);
 }
}while(1);



}


