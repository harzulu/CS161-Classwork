/**********************************************************
** Program: lab9_recurr
** Author: Ben McFarland
** Date: March 2nd, 2020
** Description: 
***********************************************************/

#include <iostream>
#include <sys/time.h>

using namespace std;

string pal(char c)
{
  string str;
  string strb = "ABA";

  if (c == 65)
  {
    str = "A";
    return str;
  }
  else if (c == 66)
  {
    str = strb;
    return str;
  }
  else if (c > 66)
  {
    strb.append(c + strb);
    str.append(strb + pal(c-1));
    return str;
  }
  else if (c == 64)
  {
    return 0;
  }
  else
  {
    return 0;
  }

}
int main()
{
  char c;

  cout << "Enter a character: " << endl;
  cin >> c;

  if (c > 64 && c < 90)
  {
    string str = pal(c);
    cout << str << endl;
  }
  else
  {
    cout << "invalid input" << endl;
  }

  return 0;
}