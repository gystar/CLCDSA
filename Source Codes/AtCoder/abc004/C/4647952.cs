using System;
class c
{
  static void Main()
  {
    long  a = long.Parse(Console.ReadLine());
    int[] s = new int[30];
    s[0]=123456;
    s[1]=213456;
    s[2]=231456;
    s[3]=234156;
    s[4]=234516;
    s[5]=234561;
    s[6]=324561;
    s[7]=342561;
    s[8]=345261;
    s[9]=345621;
    s[10]=345612;
    s[11]=435612;
    s[12]=453612;
    s[13]=456312;
    s[14]=456132;
    s[15]=456123;
    s[16]=546123;
    s[17]=564123;
    s[18]=561423;
    s[19]=561243;
    s[20]=561234;
    s[21]=651234;
    s[22]=615234;
    s[23]=612534;
    s[24]=612354;
    s[25]=612345;
    s[26]=162345;
    s[27]=126345;
    s[28]=123645;
    s[29]=123465;
    a = a%30;
    Console.WriteLine(s[a]);
  }  
}