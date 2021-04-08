#include <iostream>
#include<time.h>
using namespace std;

int main()
{

    short a,n;
    float pi=0,x,y,resul;
    long long int mul;
    int A,B,N,suma=0,contador=1,DESDE=0, HASTA=100,mes,dia,w=1,z=0,aux=0;
    int num=1,cont=0,n0,k;
    srand(time(NULL));
    bool band=true, band2=true,primo=true,signo;
    char letra,caract;


    cout <<" Ingrese el numero del ejercicio: ";
    cin >>a;
    switch(a) {
        case 1:

            cout << "Ingrese dos numeros A y B: ";
            cin >>A>>B;
            cout << "El residuo de la division A/B es: "<< A%B <<endl;

        break;

        case 2:
            cout<<"Ingrese un numero entero: ";
            cin >> A;
            if(A%2==0){cout<<"El numero es par" << endl;}
            else{cout << "El numero es impar"<< endl;}
        break;

        case 3:
            cout<<"Ingrese dos numeros A y B: ";
            cin>>A>>B;
            if(A>B){cout<<A<<" es mayor"<<endl;}
            else{cout << B <<" es mayor"<<endl;}

        break;

        case 5:
            cout<<"Ingrese dos numeros A y B: ";
            cin>>A>>B;
            cout<<A<<"/"<<B<<" = ";
            if(2*(A%B)>=B){
                cout<<A/B+1<<endl;
            }
            else{
                cout<<A/B<<endl;
            }

        break;

        case 7:
            cout<<"Ingrese un numero N: ";
            cin>>N;
            for(int i=0;i<=N;i++){
                suma+=i;
                }
            cout<<"La sumatoria desde 0 hasta "<<N<<" es: "<<suma<<endl;

        break;

        case 9://perimetro=2*pi*r; area=pi*r^2,pi=3.1416
            cout<<"Ingrese un numero N: ";
            cin>>N;
            cout<<"El perimetro del circulo es de: "<<2*3.1416*N<<endl;
            cout<<"El area del circulo es de: "<<3.1416*(N*N)<<endl;

        break;

        case 11:
            cout<<"Ingrese un numero N: ";
            cin>>N;
            for(int i=1;i<=10;i++){
                cout<<N<<" x "<<i<<" = "<<N*i<<endl;
            }

        break;

        case 13:
            cout<<"Ingrese un numero N: ";
            cin>>N;
            cout<<"Sus divisores son: "<<endl;
            for(int i=1;i<=N;i++){
                mul=N%i;
                if(mul==0){cout<<i<<endl;}
            }

        break;

        case 15:
            do{cout<<"Ingrese un numero N: ";
            cin>>N;
            suma+=N;

        }while(N!=0);
        cout<<"El resultado de la sumatoria es: "<<suma<<endl;

        break;

        case 17:
            cout<<"Ingrese un numero: ";
            cin>>N;
            for(int i=0;N!=0;i++){
                if(i==0){A=N;
                    B=N;}
                else{
                    if(N>A){A=N;}
                    else{B=N;}
                }
                cout<<"Ingrese un numero: ";
                cin>>N;
            }
            cout<<"El numero mayor fue: "<<A<<endl;

        break;

        case 19:
            cout<<"Ingrese un numero N: ";
            cin>>N;
            for(int i=2;i<N;i++){
                if(N%i==0){primo=false;}
            }
            if(N<=1){cout << "el numero no es primo"<<endl;}
            else if(primo==true){cout<<"El numero es primo"<<endl;}
            else{cout<<"El numero no es primo"<<endl;}

        break;

        case 21:
            cout<<"Ingrese una letra: ";
            cin>>letra;
            if(letra>=97 and letra<=122){
                letra-=32;
                cout<<letra<<endl;
            }
            else if(letra>=65 and letra<=90){
                letra+=32;
                cout<<letra<<endl;
            }

        break;

        case 23:
            cout<<"Ingrese dos numeros A y B:";
            cin>>A>>B;
            N=A;
            if(B>N){N=B;}
            while((N%A!=0)||(N%B!=0)){
                N++;
            }
            cout<<"El MCM de "<<A<<" y "<<B<<" es: "<<N<<endl;

        break;

        case 25:
            cout<<"Ingrese una cantidad de numeros: ";
            cin>>N;
            while(N/10>0){
                N=N/10;
                contador++;
            }
        cout<<N<<" tiene "<<contador<<" cifras"<<endl;

        break;

        case 27:
            cout<<"Ingrese dos numeros: ";
            cin>>x>>y;
            cout<<"Ingrese una opcion: "<<endl;;
            cout<<"1= suma"<<endl;
            cout<<"2= resta"<<endl;
            cout<<"3= multiplicacion"<<endl;
            cout<<"4= division"<<endl;
            cin>>N;
            switch(N){
            case 1:
                resul=x+y;
                cout<<x<<"+"<<y<<" = "<<resul<<endl;
            break;

            case 2:
                resul=x-y;
                cout<<x<<"-"<<y<<" = "<<resul<<endl;
            break;

            case 3:
                resul=x*y;
                cout<<x<<"*"<<y<<" = "<<resul<<endl;
            break;

            case 4:
                resul=x/y;
                cout<<x<<"/"<<y<<" = "<<resul<<endl;
            break;
            }

        break;

        case 28:
            cout <<"Ingrese el valor de n:";
            cin >>n;
            for(int i=1;i<=n;i++){
                pi+=(2.0*(i%2)-1)/float(2*i-1);
            }
            cout<<"la aproximacion de pi con n: "<< n <<"es: "<< 4*pi<<endl;
        break;


        case 29://La fórmula general sería rand()%(INTERVALO+1)+MINIMO
        cout << "Numeros aleatorios entre " << DESDE << " y " << HASTA << endl;
        for (int i = 1; i <= 1; i ++){
                N = rand()%(HASTA-DESDE+1)+DESDE;
                cout << N << " "<<endl;

         cout<<"Es este su numero?"<<endl;
         cout<<"1=Si"<<endl<<"0=No"<<endl;
         cin>>signo;
         if(signo==1){cout<<"Se ha encontrado el numero y es: "<<N<<endl;
                   // band=false;}
         }
         else  if(signo==0){
             while(band==true){
                 cout<<"Si no lo es, de una pista: "<<endl;
                 cout<<"60: < "<<endl<<"61: = "<<endl<<"62: > "<<endl;
                 cin>>caract;
                 if(caract==60){
                     for (int i = 1; i <= 1; i ++){
                         N = rand()%(N-DESDE+1)+DESDE;
                         cout << N << " "<<endl;}
                      }
                  else if(caract==61){cout<<"Se ha encontrado el numero y es: "<<N<<endl;
                       band=false;
                    }

                   else{
                     for (int i = 1; i <= 1; i ++){
                         N = rand()%(HASTA-N+1)+N;
                         cout << N << " "<<endl;}
                 }
                }
         }
        }

        break;

        case 31:
            cout<<"Ingrese una letra: ";
            cin>>letra;
            if(letra==97||letra==101||letra==105||letra==111||letra==117){
                cout<<letra<< " Es una vocal"<<endl;
            }
            else if(letra==65||letra==69||letra==73||letra==79||letra==85){
                cout<<letra<<" Es una vocal"<<endl;
            }
            else if(letra>=65 && letra<=90){
                cout<<letra<<" Es una consonante"<<endl;
            }
            else if(letra>=97 && letra<=122){
                cout<<letra<<" Es una consonante"<<endl;
            }
            else{
                cout<<"No es ni vocal ni consonante"<<endl;
            }

        break;

        case 33:
            cout << "Ingrese dia y luego mes: ";
            cin >> dia >> mes;
            if(dia>=1 && dia<=31 && mes>=1 && mes<=12){
                if(mes==2){
                    if(dia<=28) {cout << "Fecha valida!" <<endl;}
                    else if(dia == 29) {cout << "Fecha valida en bisiesto!" <<endl;}
                    else {cout << "Fecha invalida! " << endl;}
            }
            else if(mes<=7){
                if(mes%2==1){ cout << "Fecha valida!" <<endl;}
                else if(dia<=30)  {cout << "Fecha valida"<<endl;}
                }
            else if(mes<=7){
                if(mes%2==1) {cout << "Fecha valida!" <<endl;}
                else if(dia<=30)  {cout << "Fecha valida!" <<endl;}
                else {cout << "Fecha invalida! " << endl;}
            }
            else{
                if(mes%2==0){ cout << "Fecha valida!" <<endl;}
                else if(dia<=30)  {cout << "Fecha valida!" <<endl;}
                else {cout << "Fecha invalida! " << endl;}
            }
        }
        else {cout << "Fecha invalida! " << endl;}


        break;

        case 35://2*N-2=c
            cout<<"Ingrese un numero impar: ";
            cin>>N;

            A = N;
            contador =  A- 1;
            for (k = 1; k <= A; k+=2) {
                for (B = 0; B <= contador; B++){
                    cout<<" ";   }
                contador-=2;
                for (B = 0; B <= 2*k-2; B++){
                    if (B%2 ==0) {
                        cout<<"*";
                    } else {
                        cout<<" ";
                    } }
                cout<<"\n"<<endl;
            }
            contador = 1;
            for (k = 1; k <= A - 1; k+=2) {
                for (B = 0; B <= contador; B++){
                    cout<<" ";}
                contador+=2;
                for (B =1 ;B <= 2*(A-k)-2; B++){
                    if (B%2 ==0) {
                        cout<<"*";
                    } else {
                        cout<<" ";
                    }}

                cout<<"\n"<<endl;
            }


        break;

        case 37:
            cout<<"Ingrese un numero: ";
            cin>>N;
            while(aux<N){
                for(int i=0;i<N;i++){
                    cout<<w<<endl;
                    aux=w;
                    if(aux%2==0){
                        suma+=aux;
                    }
                    w+=z;
                    z=aux;
                }
                z=w;
                w=aux;
            }
            cout << "Sum: " << suma << endl;

        break;

        case 39:
            cout<<"Ingrese un numero N: ";
            cin>>N;
            while(N != 0){
                A = N % 10;
                N /= 10;               
                cont=1;
                contador=1;
                while(contador<=A){
                    cont=cont*A;
                    contador++;
                }
                suma += cont;
            }
            cout<<"El resultado de la suma es: "<<suma<<endl;

        break;


        case 41:
            cout<<"Ingrese un valor de n: ";
            cin >> n;
            for(int i=1;band2;i++){
                mul=n+i;
                band=true;
                for(int j=n-1;band;j--){
                    if(mul%j!=0)band=false;
                    if(j==1){band2=false;
                    band=false;}
                }
            }
            cout <<"El minimo comun multiplo de todos los enteros entre 1 y "<< n <<" es: "<< mul <<endl;
         break;


        case 43:
            cout<<"Ingrese un numero: ";
            cin>>N;
            for(int i=1;i<N;i++){
                //verifica si es primo
                cont=0;
                for(int j=1;j<=i;j++)
                    if(i%j==0 && i%1==0)
                     cont++;

                    if(cont==2){
                        cout<<i<<" "<<endl;
                        suma+=i;
                    }
            }
            cout<<"El resultado de la suma es: "<< suma <<endl;

        break;

        case 45://num=1,(sum)res=2;(res)suma=0

            cout<<"Ingrese un numero impar: ";
            cin>>N;

            for(int f=0;f<N;f++){
                for(int c=0;c<N;c++){
                    if(f>c && f>=N-c-1){
                        n0=2*(1+f)-N;
                        cout<<n0*n0-2*(n0-1)-c+N-1-f<<"\t";
                    }
                    else if(f<=c && f>N-c-1){
                        n0=N-1-c;
                        cout<<(N-2*(1+n0))*(N-2*(1+n0))+1+f-(n0+1)<<"\t";
                    }
                    else if(f<=c && f<=N-c-1){
                        cout<<(N-2*f)*(N-2*f-1)+1+c-f<<"\t";
                    }
                    else{
                        cout<<(N-2*c)*(N-2*c-1)+1-f+c<<"\t";
                    }
                }
                cout<<endl<<endl<<endl;
            }

                /*for(int i=0;i<=(N-1)/2;i++){
                    for(int j=0;j<=(N-1)/2;j++){
                        if(i==j){
                            suma+=num;
                        }
                        else if(i+j==N-1){
                            suma+=num;
                        }
                    }
                }
                suma+=num;
                cout<<"En una espiral de "<<N<<" x "<<N<<" la suma es: "<<suma<<endl;*/

                for(int f=0;f<=(N-1)/2;f++){
                for(int c=0;c<=(N-1)/2;c++){
                    if(f==c){
                        suma+=(N-2*f)+1;
                     }
                    else {
                        suma+=(N-2*f)+1;
                    }
                 }
             }
             suma+=num;
             cout<<"En una espiral de "<<N<<" x "<<N<<" la suma es: "<<suma<<endl;

        break;

        case 47:
            cout<<"Ingrese un numero k: ";
            cin>>k;
            for(int i=1;i>0;i++){
                A=i*(i+1)/2;
                cont=0;

                //divisores:
                for(int j=1;j<=A;j++){
                    mul=A%j;
                    if(mul==0){
                        cont++;
                    }

                }
                if(cont>k){
                    cout<<"el numero es "<<A<<" que tiene "<<cont<<" divisores"<<endl;
                    break;
                }
             }

        break;

    }
    return 0;
}
