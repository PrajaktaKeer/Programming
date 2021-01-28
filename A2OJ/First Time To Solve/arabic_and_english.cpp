#include<iostream>
#include<vector>
using namespace std ;
    
int all_arabic( vector<string> vs )  // check if all input strings are in english or not
{

    string arab = "#" ;  

    int cnt = 0 ;

    for( int i = 0 ; i < vs.size() ; i++ )  {

        size_t found = vs[i].find( arab ) ;

        if( found != string::npos )  cnt++ ;  // string::npos val -1 

    }

    if( cnt == vs.size() )  return 1 ; // if cnt == vectorsize then all strings are in arabic 

    else return 0 ;  

}

int all_english( vector<string> vs )     // check if all strings are in english 
{

    string arab = "#" ;

    int cnt = 0 ;

    for( int i = 0 ; i < vs.size() ; i++ )  {

        size_t found = vs[i].find( arab ) ;

        if( found == string::npos )  cnt++ ;  

    }

    if( cnt == vs.size() )  return 1 ;

    else  return 0 ;  

}

void solve( void )
{

    int t ;

    cin >> t ;  // testcase 

    while( t-- )  {

        int n ;

        cin >> n ;   //  number of input string 

        vector<string> vs( n ) ;

        for( int i = 0 ; i < n ; i++ )  {

            cin >> vs[i] ;  

        }

        if( all_arabic( vs ) || all_english( vs ) )  {  

            for( int i = 0 ; i < vs.size() ; i++ )  {

                if( i == 0 )  cout << vs[i] ;

                else  cout << " " << vs[i] ;  

            }

            cout << endl ;

        }

        else  {

            int english_word_index ;

            for( int i = 0 ; i < vs.size() ; i++ )  {

                size_t found = vs[i].find( "#" ) ;  

                if( found == string::npos )  {

                    english_word_index = i ;

                    break ;  

                }

            }

            for( int i = english_word_index + 1 ; i < vs.size() ; i++ )  {

                if( i == english_word_index+1 )  cout << vs[i] ;

                else  cout << " " << vs[i] ;  

            }

            if( english_word_index == 0 )  {

                cout << " " << vs[english_word_index] ;

            }

            else if( english_word_index == vs.size()-1 )  {

                cout << vs[english_word_index] << " " ;  

            }

            else  {

                cout << " " << vs[english_word_index] << " " ;  

            }

            for( int i = 0 ; i < english_word_index ; i++ )  {

                if( i == 0 )  cout << vs[i] ;

                else  cout << " " << vs[i] ;  

            }

            cout << endl ; 

        }

    }

}

int main( void )

{
    solve();
    
    return 0 ;

}
