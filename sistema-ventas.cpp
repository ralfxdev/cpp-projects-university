#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;

//Variables Globales
int repVen;
int repProd;
int repFact;

// Estructuras Ventas.
struct venta{
	int codVen, codProd;
	string descProd;
	int cantidad, precio, total;
};
	
struct registroVenta{
	venta ven;
};

registroVenta nuevaVenta[100];

// Estructuras Productos.
struct producto{
	int codProd;
	string descProd, categ;
	int precio;
};
	
struct registroProducto{
	producto prod;
};

registroProducto nuevoProd[100];

// Estructuras Facturas
struct facturas{
	string descProd;
	int cantidad, precio, total, pagar;
};
	
struct clientes{
	string nombre, domicilio;
	int nit;
};
	
struct registroFactura{
	facturas factura;
	clientes cliente;
};
	
registroFactura nuevaFactura[100];
	

void ventasDiarias()
{	
	system("cls");
	system("color a");
	
	cout << 
			"__________________________________________\n"
			"|     1. Ventas Diarias por Vendedor     |\n"
			"------------------------------------------\n\n";
				
			cout<<"¿Cuántas ventas desea registrar?: ";
			cin>>repVen;
			cout<<endl;
			
			for(int i=0; i<repVen; i++){
				
				cout<<"-- Venta No."<<i+1<<" --"<<endl;
					
				cout<<"Código de Venta: ";
			    cin>>nuevaVenta[i].ven.codVen;
			    
			    cout<<"Código de Producto: ";
			    cin>>nuevaVenta[i].ven.codProd;
			    
			    cout<<"Descripción del producto: ";
			    cin>>nuevaVenta[i].ven.descProd;
			    
			    cout<<"Cantidad: ";
			    cin>>nuevaVenta[i].ven.cantidad;
			    
			    cout<<"Precio: ";
			    cin>>nuevaVenta[i].ven.precio;
			    
			    nuevaVenta[i].ven.total = nuevaVenta[i].ven.cantidad * nuevaVenta[i].ven.precio;
			      
			    cout<<"Total: "<<nuevaVenta[i].ven.total;
			    
			    cout<<endl<<endl;
			    
			}
	
	cout<<"---VENTAS INGRESADAS EXITOSAMENTE---"<<endl;			
	system("PAUSE");
}

void productos()
{
	system("cls");
	system("color a");
	
	cout << 
			"__________________________________________\n"
			"|         2. Ingresar un Producto        |\n"
			"------------------------------------------\n\n";
				
			cout<<"¿Cuántas productos desea registrar?: ";
			cin>>repProd;
			cout<<endl;
			
			for(int i=0; i<repProd; i++){
				
				cout<<"-- Producto No."<<i+1<<" --"<<endl;
			    
			    cout<<"Código de Producto: ";
			    cin>>nuevoProd[i].prod.codProd;
			    
			    cout<<"Descripción del producto: ";
			    cin>>nuevoProd[i].prod.descProd;
			    
			    cout<<"Categoría: ";
			    cin>>nuevoProd[i].prod.categ;
			    
			    cout<<"Precio: ";
			    cin>>nuevoProd[i].prod.precio;
			    
			    cout<<endl<<endl;
			    
			}
	cout<<"---PRODUCTOS INGRESADOS EXITOSAMENTE---"<<endl;			
	system("PAUSE");
}

void facturas()
{
	system("cls");
	system("color e");
	
	cout << 
			"__________________________________________\n"
			"|     3. Ingreso de Facturas al Cliente     |\n"
			"------------------------------------------\n\n";
				
			cout<<"¿Cuántas facturas desea registrar?: ";
			cin>>repFact;
			cout<<endl;
			
			for(int i=0; i<repFact; i++){
				
				cout<<"***************************************************"<<endl;
				
				cout<<"\t\t\t-- Factura No.00000"<<i+1<<" --"<<endl;
					
				cout<<"\tNombre: ";
			    cin>>nuevaFactura[i].cliente.nombre;
			    cin.ignore();
			    
			    cout<<"\tNIT: ";
			    cin>>nuevaFactura[i].cliente.nit;
			    
			    cout<<"\tDomicilio: ";
			    cin>>nuevaFactura[i].cliente.domicilio;
			    
			    cout<<"\n\nDescripción del producto: ";
			    cin>>nuevaFactura[i].factura.descProd;
			    
			    cout<<"\nCantidad: ";
			    cin>>nuevaFactura[i].factura.cantidad;
			    
			    cout<<"Precio: ";
			    cin>>nuevaFactura[i].factura.precio;
			    
			    nuevaFactura[i].factura.total = nuevaFactura[i].factura.cantidad * nuevaFactura[i].factura.precio;
			      
			    cout<<"\n\n\t\tTotal: "<<nuevaFactura[i].factura.total;
			    cout<<"\n\t\t_______________"<<endl;
			    cout<<"\t\t_______________"<<endl<<endl;
			    
			}
	cout<<"***************************************************"<<endl;
	cout<<"---FACTURAS IMPRESAS EXITOSAMENTE---"<<endl;			
	system("PAUSE");
}

void impVentas()
{
	system("cls");
	system("color 9");
	
	cout << 
			"____________________________________________\n"
			"|          4. Impresión de Ventas           |\n"
			"--------------------------------------------\n\n";
						
			for(int i=0; i<repVen; i++)
			{
				cout<<"\n-- Venta No."<<i+1<<" --"<<endl;
				cout<<"Código de Venta: "<<nuevaVenta[i].ven.codVen<<endl;
				cout<<"Código de Producto: "<<nuevaVenta[i].ven.codProd<<endl;
				cout<<"Descripción del Producto: "<<nuevaVenta[i].ven.descProd<<endl;
				cout<<"Cantidad: "<<nuevaVenta[i].ven.cantidad<<endl;
				cout<<"Precio: "<<nuevaVenta[i].ven.precio<<endl;
				cout<<"Total: "<<nuevaVenta[i].ven.total<<endl;
			}
	cout<<"---FIN DE LA LISTA---"<<endl;			
	system("PAUSE");
}

void impProductos()
{
	system("cls");
	system("color 9");
	
	cout << 
			"____________________________________________\n"
			"|          4. Impresión de Productos           |\n"
			"--------------------------------------------\n\n";
						
			for(int i=0; i<repProd; i++)
			{
				cout<<"\n-- Producto No."<<i+1<<" --"<<endl;
				cout<<"Código de Producto: "<<nuevoProd[i].prod.codProd<<endl;
				cout<<"Descripción del Producto: "<<nuevoProd[i].prod.descProd<<endl;
				cout<<"Categoría: "<<nuevoProd[i].prod.categ<<endl;
				cout<<"Precio: "<<nuevoProd[i].prod.precio<<endl;
			}
	cout<<"---FIN DE LA LISTA---"<<endl;			
	system("PAUSE");
}

void salir()
{
	system("cls");
	system("color f2");
	
	cout << 
			"__________________________________\n"
			"|            6. Salir             |\n"
			"----------------------------------\n\n";
						
			cout << "¡Gracias por utilizar este sistema!\n"
					"    Randy Alexander López Flores   \n"
					"            0905-20-8464           \n\n";
								
			exit(6);
}

void menu()
{
	char opcion;
    system("cls");
    system("color b");
		
		cout <<
		"*************************************\n"
		"****       BIENVENIDOS AL        ****\n"
		"****     SISTEMA DE VENTAS       ****\n"
		"****          BY RALF            ****\n"
		"*************************************\n\n";
	
		cout <<
		"1. Ingresar las Ventas Diarias por Vendedor\n"
		"2. Ingresar un Producto\n"
		"3. Ingreso de Factura al Cliente\n"
		"4. Impresión de Ventas\n"
		"5. Impresión de Productos\n"
		"6. Salir\n\n";
	
    cout <<"Elija una opción: ";
	cin >> opcion;
    
    switch(opcion)
	{
	    case '1':
	    	ventasDiarias();
	    	menu();
	    break;
	    case '2':
	    	productos();
	    	menu();
	    break;
	    case '3':
	    	facturas();
	    	menu();
	    break;
	    case '4':
	    	impVentas();
	    	menu();
	    break;
	    case '5':
	    	impProductos();
	    	menu();
	    break;
	    case '6':
	    	salir();
	    	menu();
	    break;
	    default:
	    	cout<<"Opción invalida"<<endl;
	    	system("PAUSE");
	    	system("cls");
	    	menu();
	}
			
}

void login()
{
	system("Color B0");
	string usuario;
	string contra;
	cout <<
		"#####################################\n"
		"####     INICIO DE SESIÓN        ####\n"
		"####     SISTEMA DE VENTAS       ####\n"
		"####          BY RALF            ####\n"
		"#####################################\n\n";
		
	cout <<"Usuario: ";
	cin >> usuario;
	
	cout <<"Contraseña: ";
	cin >> contra;
	
	if (usuario == "admin" && contra == "12345")
	{
		cout <<"\n\n---SESIÓN INICIADA CON ÉXITO---"<<endl;
		cout <<"Loading :::::::::::::::::::::::"<<endl<<endl;
		system("PAUSE");
	}
	else
	{
		cout <<"\n\nDATOS INCORRECTOS"<<endl;
		cout <<"INTENTE NUEVAMENTE"<<endl<<endl;
		system("PAUSE");
		system("cls");
		login();
	}
	
}

int main()
{
	setlocale(LC_ALL, ""); //caracteres
    
    login();
    menu();
	
    return 0;
}

