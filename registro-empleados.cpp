#include <iostream>
#include <locale.h>
#include <stdlib.h>
 
using namespace std;
 
int main () 
{	

	// Estructuras del empleado.
	struct empleado{
	    char nombre[20], apellido[20];
	    int codEmp, edad, anioLabor;
	    string puesto, correo, fechaNaci;
	    float salario, bonificacion;
	};
	
	struct direccion{
		string departamento, municipio, aldea;
	};
	
	struct telefono{
		int personal, casa, trabajo;
	};
	
	// Estructura de la venta.
	struct venta{
		int codVen, codProd;
		string descProd;
		int cantidad, precio, total;
	};
	
	// Estructura del sueldo.
	struct sueldo{
		float sueldoLiq, comision, igss, boleto, isr, irtra; 
	};
	
	// Estructura de registro.
	struct registro{
	    empleado emp;
	    direccion direc;
	    telefono tel;
	    venta ven;
	    sueldo sld;
	};
 
	//variables
	char opcion;
	int repEmp, repVen;
	
	system("color a"); //color de texto
	setlocale(LC_ALL, ""); //caracteres
	
	registro nuevoRegistro[3];
	empleado emp;
    direccion direc;
    telefono tel;
    venta ven;
    sueldo sld;
    
	
	do {
		system("cls");
		
		cout <<
		"**********************************************\n"
		"****            BIENVENIDOS A             ****\n"
		"****     INGENIEROS JUTIAPANECOS S.A.     ****\n"
		"****           JUTIAPA, JUTIAPA           ****\n"
		"**********************************************\n\n";
	
		cout <<
		"1. Registro de Empleados\n"
		"2. Ventas por Empleado\n"
		"3. Nómina de Sueldos\n"
		"4. Productos Vendidos\n"
		"5. Reportes\n"
		"6. Salir\n\n";
		
		cout <<"Elija una opción: ";
		cin >> opcion;
	
		switch(opcion)
		{
			case '1': //Bloque de instrucciones Registro de Empleados
				cout << 
				"___________________________________\n"
				"|     1. Registro de Empleados     |\n"
				"-----------------------------------\n\n";
				
				cout<<"¿Cuántas empleados desea registrar?: ";
			    cin>>repEmp;
			    cout<<"\n";
     
			    for(int i=0; i<repEmp; i++){
			         
			        cout<<"-- Registro No."<<i+1<<" --"<<endl;
			        
			        cout<<"Ingrese código de empleado: ";
			        cin>>nuevoRegistro[i].emp.codEmp;
			        cin.ignore();
			         
			        cout<<"Ingrese nombres: ";
        			cin.getline(nuevoRegistro[i].emp.nombre,20);
         
       				cout<<"Ingrese apeliidos: ";
        			cin.getline(nuevoRegistro[i].emp.apellido,20);
        			
        			cout <<
        			"\n** Puestos Disponibles **\n"
					"1. Administrador\n"
					"2. Vendedor\n"
					"3. Auxiliar de Vendedor\n"
					"4. Encargado de Bodega\n"
					"5. Encargado de Limpieza\n";
        			
        			cout<<"Ingrese el puesto: ";
        			cin>>opcion;
        			
        			switch(opcion)
        			{
        				case '1':
					    	nuevoRegistro[i].emp.puesto = "Administrador";
					    	nuevoRegistro[i].emp.salario = 5000;
					    	nuevoRegistro[i].emp.bonificacion = 500;
					    	cout<<"Puesto: "<<nuevoRegistro[i].emp.puesto<<"\n";
							nuevoRegistro[i].sld.comision = 0;	
					    break;
					    case '2':
					    	nuevoRegistro[i].emp.puesto = "Vendedor";
					    	nuevoRegistro[i].emp.salario = 3000;
					    	nuevoRegistro[i].emp.bonificacion = 300;
					    	cout<<"Puesto: "<<nuevoRegistro[i].emp.puesto<<"\n";
					    	
							if(nuevoRegistro[i].ven.total <= 2000)
							{
								nuevoRegistro[i].sld.comision = (nuevoRegistro[i].ven.total * 1)/100;
							}
							
							else if(nuevoRegistro[i].ven.total > 2000 bitand nuevoRegistro[i].ven.total <= 6000)
							{
								nuevoRegistro[i].sld.comision = (nuevoRegistro[i].ven.total * 3)/100;;
							}
							
							else if(nuevoRegistro[i].ven.total > 6000 bitand nuevoRegistro[i].ven.total <= 8000)
							{
								nuevoRegistro[i].sld.comision = (nuevoRegistro[i].ven.total * 5)/100;
							}
							
							else if(nuevoRegistro[i].ven.total > 8000 bitand nuevoRegistro[i].ven.total <= 9000)
							{
								nuevoRegistro[i].sld.comision = (nuevoRegistro[i].ven.total * 7)/100;
							}
							
							else if(nuevoRegistro[i].ven.total > 9000)
							{
								nuevoRegistro[i].sld.comision = (nuevoRegistro[i].ven.total * 9)/100;
							}	
							
					    break;
					    case '3':
					    	nuevoRegistro[i].emp.puesto = "Auxiliar de Vendedor";
					    	nuevoRegistro[i].emp.salario = 2000;
					    	nuevoRegistro[i].emp.bonificacion = 250;
					    	cout<<"Puesto: "<<nuevoRegistro[i].emp.puesto<<"\n";
							nuevoRegistro[i].sld.comision = 0;		
					    break;
					    case '4':
					    	nuevoRegistro[i].emp.puesto = "Encargado de Bodega";
					    	nuevoRegistro[i].emp.salario = 2000;
					    	nuevoRegistro[i].emp.bonificacion = 250;
					    	cout<<"Puesto: "<<nuevoRegistro[i].emp.puesto<<"\n";
							nuevoRegistro[i].sld.comision = 0;			
					    break;
					    case '5':
					    	nuevoRegistro[i].emp.puesto = "Encargado de Limpieza";
					    	nuevoRegistro[i].emp.salario = 1000;
					    	nuevoRegistro[i].emp.bonificacion = 250;
					    	cout<<"Puesto: "<<nuevoRegistro[i].emp.puesto<<"\n";
							nuevoRegistro[i].sld.comision = 0;		
					    break;
					    default: cout<<"Puesto No Disponible";
					}
					
					cout <<
        			"\n** Departamentos **\n"
					"1. Jutiapa\n";
        			
        			cout<<"Ingrese el departamento: ";
        			cin>>opcion;
        			
        			switch(opcion)
        			{
        				case '1':
					    	nuevoRegistro[i].direc.departamento = "Jutiapa";
					    	cout<<"Departamento: "<<nuevoRegistro[i].direc.departamento<<"\n";
					    	
					    	cout <<
		        			"\n** Municipios **\n"
							"1. El Progreso\n"
							"2. Agua Blanca\n"
							"3. Atescatempa\n"
							"4. Asunción Mita\n"
							"5. Comapa\n"
							"6. Conguaco\n"
							"7. El Adelanto\n"
							"8. Jalpatagua\n"
							"9. Jerez\n";
		        			
		        			cout<<"Ingrese el municipio: ";
		        			cin>>opcion;
		        			
		        			switch(opcion)
        					{
		        				case '1':
							    	nuevoRegistro[i].direc.municipio = "El Progreso";
							    	cout<<"Municipio: "<<nuevoRegistro[i].direc.municipio<<"\n";
							    	
							    	cout <<
				        			"\n** Aldeas **\n"
				        			"0. No pertenece a ninguna aldea\n"
									"1. Las Flores\n"
									"2. Las Uvas\n";
				        			
				        			cout<<"Ingrese la aldea: ";
				        			cin>>opcion;
				        			
				        			switch(opcion)
        							{
        								case '0':
									    	nuevoRegistro[i].direc.aldea = "";
						        			
									    break;
				        				case '1':
									    	nuevoRegistro[i].direc.aldea = "Las Flores";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    case '2':
									    	nuevoRegistro[i].direc.aldea = "Las Uvas";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    default: cout<<"Aldea No Disponible";
									}
				        			
							    break;
							    case '2':
							    	nuevoRegistro[i].direc.municipio = "Agua Blanca";
							    	cout<<"Municipio: "<<nuevoRegistro[i].direc.municipio<<"\n";
							    	
							    	cout <<
				        			"\n** Aldeas **\n"
				        			"0. No pertenece a ninguna aldea\n"
									"1. Cañas\n"
									"2. Lagunilla\n";
				        			
				        			cout<<"Ingrese la aldea: ";
				        			cin>>opcion;
				        			
				        			switch(opcion)
        							{
        								case '0':
									    	nuevoRegistro[i].direc.aldea = "";
						        			
									    break;
				        				case '1':
									    	nuevoRegistro[i].direc.aldea = "Cañas";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    case '2':
									    	nuevoRegistro[i].direc.aldea = "Lagunilla";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    default: cout<<"Aldea No Disponible";
									}
				        			
							    break;
							    case '3':
							    	nuevoRegistro[i].direc.municipio = "Atescatempa";
							    	cout<<"Municipio: "<<nuevoRegistro[i].direc.municipio<<"\n";
							    	
							    	cout <<
				        			"\n** Aldeas **\n"
				        			"0. No pertenece a ninguna aldea\n"
									"1. San Cristobal\n"
									"2. Horcones\n";
				        			
				        			cout<<"Ingrese la aldea: ";
				        			cin>>opcion;
				        			
				        			switch(opcion)
        							{
        								case '0':
									    	nuevoRegistro[i].direc.aldea = "";
						        			
									    break;
				        				case '1':
									    	nuevoRegistro[i].direc.aldea = "San Cristobal";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    case '2':
									    	nuevoRegistro[i].direc.aldea = "Horcones";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    default: cout<<"Aldea No Disponible";
									}	
							    break;
							    case '4':
							    	nuevoRegistro[i].direc.municipio = "Asunción Mita";
							    	cout<<"Municipio: "<<nuevoRegistro[i].direc.municipio<<"\n";
							    	
							    	cout <<
				        			"\n** Aldeas **\n"
				        			"0. No pertenece a ninguna aldea\n"
									"1. Tiúcal\n"
									"2. La Vega\n";
				        			
				        			cout<<"Ingrese la aldea: ";
				        			cin>>opcion;
				        			
				        			switch(opcion)
        							{
        								case '0':
									    	nuevoRegistro[i].direc.aldea = "";
						        			
									    break;
				        				case '1':
									    	nuevoRegistro[i].direc.aldea = "Tiúcal";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    case '2':
									    	nuevoRegistro[i].direc.aldea = "La Vega";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    default: cout<<"Aldea No Disponible";
									}
				        			
							    break;
							    
							    case '5':
							    	nuevoRegistro[i].direc.municipio = "Comapa";
							    	cout<<"Municipio: "<<nuevoRegistro[i].direc.municipio<<"\n";
							    	
							    	cout <<
				        			"\n** Aldeas **\n"
				        			"0. No pertenece a ninguna aldea\n"
									"1. Pinal\n"
									"2. El Carrizo\n";
				        			
				        			cout<<"Ingrese la aldea: ";
				        			cin>>opcion;
				        			
				        			switch(opcion)
        							{
        								case '0':
									    	nuevoRegistro[i].direc.aldea = "";
						        			
									    break;
				        				case '1':
									    	nuevoRegistro[i].direc.aldea = "Pinal";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    case '2':
									    	nuevoRegistro[i].direc.aldea = "El Carrizo";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    default: cout<<"Aldea No Disponible";
									}
				        			
							    break;
							    
							    case '6':
							    	nuevoRegistro[i].direc.municipio = "Conguaco";
							    	cout<<"Municipio: "<<nuevoRegistro[i].direc.municipio<<"\n";
							    	
							    	cout <<
				        			"\n** Aldeas **\n"
				        			"0. No pertenece a ninguna aldea\n"
									"1. Palo Blaco\n"
									"2. El Barro\n";
				        			
				        			cout<<"Ingrese la aldea: ";
				        			cin>>opcion;
				        			
				        			switch(opcion)
        							{
        								case '0':
									    	nuevoRegistro[i].direc.aldea = "";
						        			
									    break;
				        				case '1':
									    	nuevoRegistro[i].direc.aldea = "Palo Blaco";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    case '2':
									    	nuevoRegistro[i].direc.aldea = "El Barro";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    default: cout<<"Aldea No Disponible";
									}

							    break;
							    
							    case '7':
							    	nuevoRegistro[i].direc.municipio = "El Adelanto";
							    	cout<<"Municipio: "<<nuevoRegistro[i].direc.municipio<<"\n";
							    	
							    	cout <<
				        			"\n** Aldeas **\n"
				        			"0. No pertenece a ninguna aldea\n"
									"1. El Cajón\n"
									"2. El Trapiche\n";
				        			
				        			cout<<"Ingrese la aldea: ";
				        			cin>>opcion;
				        			
				        			switch(opcion)
        							{
        								case '0':
									    	nuevoRegistro[i].direc.aldea = "";
						        			
									    break;
				        				case '1':
									    	nuevoRegistro[i].direc.aldea = "El Cajón";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    case '2':
									    	nuevoRegistro[i].direc.aldea = "El Trapiche";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    default: cout<<"Aldea No Disponible";
									}

							    break;
							    
							    case '8':
							    	nuevoRegistro[i].direc.municipio = "Jalpatagua";
							    	cout<<"Municipio: "<<nuevoRegistro[i].direc.municipio<<"\n";
							    	
							    	cout <<
				        			"\n** Aldeas **\n"
				        			"0. No pertenece a ninguna aldea\n"
									"1. Aceituno\n"
									"2. El Jicaral\n";
				        			
				        			cout<<"Ingrese la aldea: ";
				        			cin>>opcion;
				        			
				        			switch(opcion)
        							{
        								case '0':
									    	nuevoRegistro[i].direc.aldea = "";
						        			
									    break;
				        				case '1':
									    	nuevoRegistro[i].direc.aldea = "Aceituno";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    case '2':
									    	nuevoRegistro[i].direc.aldea = "El Jicaral";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    default: cout<<"Aldea No Disponible";
									}

							    break;
							    
							    case '9':
							    	nuevoRegistro[i].direc.municipio = "Jerez";
							    	cout<<"Municipio: "<<nuevoRegistro[i].direc.municipio<<"\n";
							    	
							    	cout <<
				        			"\n** Aldeas **\n"
				        			"0. No pertenece a ninguna aldea\n"
									"1. Escarbadero\n"
									"2. La Esmeralda\n";
				        			
				        			cout<<"Ingrese la aldea: ";
				        			cin>>opcion;
				        			
				        			switch(opcion)
        							{
        								case '0':
									    	nuevoRegistro[i].direc.aldea = "";
						        			
									    break;
				        				case '1':
									    	nuevoRegistro[i].direc.aldea = "Escarbadero";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    case '2':
									    	nuevoRegistro[i].direc.aldea = "La Esmeralda";
									    	cout<<"Aldea: "<<nuevoRegistro[i].direc.aldea<<"\n";
						        			
									    break;
									    default: cout<<"Aldea No Disponible";
									}

							    break;
							    
							    default: cout<<"Municipio No Disponible";
							}
		        			
					    break;
					    default: cout<<"Departamento No Disponible";
					}
					
					cout<<"\nIngrese número de teléfono personal: ";
			        cin>>nuevoRegistro[i].tel.personal;
			        
			        cout<<"Ingrese número de teléfono de casa: ";
			        cin>>nuevoRegistro[i].tel.casa;
			        
			        cout<<"Ingrese número de teléfono de trabajo: ";
			        cin>>nuevoRegistro[i].tel.trabajo;
			        
			        cout<<"Ingrese Fecha de Nacimiento: ";
			        cin>>nuevoRegistro[i].emp.fechaNaci;
			        
			        cout<<"Ingrese Edad: ";
			        cin>>nuevoRegistro[i].emp.edad;
			        
			        cout<<"Ingrese Años de Laborar en la Empresa: ";
			        cin>>nuevoRegistro[i].emp.anioLabor;
			        
			        cout<<"Ingrese Correo Electrónico: ";
			        cin>>nuevoRegistro[i].emp.correo;
        		 
			        cout<<endl<<endl;
			    }
				
				system("PAUSE");
					
	    	break;
	    	case '2': //Bloque de instrucciones Ventas por Empleados
				cout << 
				"___________________________________\n"
				"|     2. Ventas por Empleados     |\n"
				"-----------------------------------\n\n";
				
				cout<<"¿Cuántas ventas desea registrar?: ";
			    cin>>repVen;
			    cout<<"\n";
				
				for(int i=0; i<repVen; i++){
				
				cout<<"-- Venta No."<<i+1<<" --"<<endl;
					
				cout<<"Código de Venta: ";
			    cin>>nuevoRegistro[i].ven.codVen;
			    
			    cout<<"Código de Empleado: ";
			    cin>>nuevoRegistro[i].emp.codEmp;
			    
			    cout<<"Código de Producto: ";
			    cin>>nuevoRegistro[i].ven.codProd;
			    
			    cout<<"Descripción del producto: ";
			    cin>>nuevoRegistro[i].ven.descProd;
			    
			    cout<<"Cantidad: ";
			    cin>>nuevoRegistro[i].ven.cantidad;
			    
			    cout<<"Precio: ";
			    cin>>nuevoRegistro[i].ven.precio;
			    
			    nuevoRegistro[i].ven.total = nuevoRegistro[i].ven.cantidad * nuevoRegistro[i].ven.precio;
			      
			    cout<<"Total: "<<nuevoRegistro[i].ven.total;
			    
			    cout<<endl<<endl;
			    
				}
				
				system("PAUSE");
				
	    	break;
	    	case '3': //Bloque de instrucciones Nómina de Sueldos
				cout << 
				"___________________________________\n"
				"|       3. Nómina de Sueldos      |\n"
				"-----------------------------------\n\n";
				
				for(int i=0; i<repEmp; i++)
				{
					cout<<"\n-- Empleado No."<<i+1<<" --"<<endl;
					cout<<"Nombres: "<<nuevoRegistro[i].emp.nombre<<endl;
					cout<<"Apellidos: "<<nuevoRegistro[i].emp.apellido<<endl;
					cout<<"Puesto: "<<nuevoRegistro[i].emp.puesto<<endl;
					cout<<"Salario: "<<nuevoRegistro[i].emp.salario<<endl;
					cout<<"Bono: "<<nuevoRegistro[i].emp.bonificacion<<endl;
					cout<<"Comisiones: "<<nuevoRegistro[i].sld.comision<<endl;
					
					nuevoRegistro[i].sld.igss = (nuevoRegistro[i].emp.salario * 4.83)/100;
					cout<<"IGSS: "<<nuevoRegistro[i].sld.igss<<endl;
					
					if(nuevoRegistro[i].emp.salario <= 2000)
					{
						nuevoRegistro[i].sld.boleto = 15.00;
						nuevoRegistro[i].sld.isr = (nuevoRegistro[i].emp.salario * 2)/100;
						nuevoRegistro[i].sld.irtra = (nuevoRegistro[i].emp.salario * 1)/100;
					}
					
					else if(nuevoRegistro[i].emp.salario > 2000 bitand nuevoRegistro[i].emp.salario <= 6000)
					{
						nuevoRegistro[i].sld.boleto = 50.00;
						nuevoRegistro[i].sld.isr = (nuevoRegistro[i].emp.salario * 4)/100;
						nuevoRegistro[i].sld.irtra = (nuevoRegistro[i].emp.salario * 1)/100;
					}
					
					else if(nuevoRegistro[i].emp.salario > 6000 bitand nuevoRegistro[i].emp.salario <= 8000)
					{
						nuevoRegistro[i].sld.boleto = 75.00;
						nuevoRegistro[i].sld.isr = (nuevoRegistro[i].emp.salario * 6)/100;
						nuevoRegistro[i].sld.irtra = (nuevoRegistro[i].emp.salario * 1)/100;
					}
					
					else if(nuevoRegistro[i].emp.salario > 8000 bitand nuevoRegistro[i].emp.salario <= 9000)
					{
						nuevoRegistro[i].sld.boleto = 100.00;
						nuevoRegistro[i].sld.isr = (nuevoRegistro[i].emp.salario * 8)/100;
						nuevoRegistro[i].sld.irtra = (nuevoRegistro[i].emp.salario * 1)/100;
					}
					
					else if(nuevoRegistro[i].emp.salario > 9000)
					{
						nuevoRegistro[i].sld.boleto = 150.00;
						nuevoRegistro[i].sld.isr = (nuevoRegistro[i].emp.salario * 10)/100;
						nuevoRegistro[i].sld.irtra = (nuevoRegistro[i].emp.salario * 1)/100;
					}
					
					cout<<"Boleto de Ornato: "<<nuevoRegistro[i].sld.boleto<<endl;
					cout<<"ISR: "<<nuevoRegistro[i].sld.isr<<endl;
					cout<<"Irtra: "<<nuevoRegistro[i].sld.irtra<<endl;
					
					cout<<endl<<endl;

			   	} 
				
				system("PAUSE");
				
	    	break;
	    	case '4': //Bloque de instrucciones Productos Vendidos
				cout << 
				"___________________________________\n"
				"|      4. Productos Vendidos      |\n"
				"-----------------------------------\n\n";
				
				for(int i=0; i<repVen; i++)
				{
					cout<<"\n-- Producto Vendido No."<<i+1<<" --"<<endl;
					cout<<"Código de Producto: "<<nuevoRegistro[i].ven.codProd<<endl;
					cout<<"Código de Vendedor: "<<nuevoRegistro[i].emp.codEmp<<endl;
					cout<<"Código de Venta: "<<nuevoRegistro[i].ven.codVen<<endl;
					cout<<"Descripción del Producto: "<<nuevoRegistro[i].ven.descProd<<endl;
					cout<<"Cantidad: "<<nuevoRegistro[i].ven.cantidad<<endl;
					cout<<"Precio: "<<nuevoRegistro[i].ven.precio<<endl;
					cout<<"Total: "<<nuevoRegistro[i].ven.total<<endl;
					
					cout<<endl<<endl;
			   	} 
		
				system("PAUSE");
				
	    	break;
	    	case '5': //Bloque de instrucciones Reportes
				cout << 
				"___________________________________\n"
				"|           5. Reportes           |\n"
				"-----------------------------------\n\n";
				
				cout <<
				"1. Reporte de Datos Generales de los Empleados\n"
				"2. Reporte de Nómina General de Empleados\n"
				"3. Reporte de Salarios\n"
				"4. Reporte por producto vendido\n"
				"5. Salir\n\n";
				
				cout <<"Elija una opción: ";
				cin >> opcion;
				
				 switch(opcion)
				{
					case '1': //Bloque de instrucciones Reporte de Datos Generales de los Empleados
						cout << 
						"_________________________________________________________\n"
						"|     1. Reporte de Datos Generales de los Empleados     |\n"
						"---------------------------------------------------------\n\n";
						
						for(int i=0; i<repEmp; i++)
						{
					        cout<<"\n-- Registro No."<<i+1<<" --"<<endl;
					        cout<<"Código de Empleado: "<<nuevoRegistro[i].emp.codEmp<<endl;
					        cout<<"Nombres: "<<nuevoRegistro[i].emp.nombre<<endl;
					        cout<<"Apellidos: "<<nuevoRegistro[i].emp.apellido<<endl;
					        cout<<"Puesto: "<<nuevoRegistro[i].emp.puesto<<endl;
					        cout<<"Dirección: "<<nuevoRegistro[i].direc.aldea<<", "<<nuevoRegistro[i].direc.municipio<<", "<<nuevoRegistro[i].direc.departamento<<endl;
					        cout<<"Teléfono Personal: "<<nuevoRegistro[i].tel.personal<<endl;
					        cout<<"Teléfono Casa: "<<nuevoRegistro[i].tel.casa<<endl;
					        cout<<"Teléfono Trabajo: "<<nuevoRegistro[i].tel.trabajo<<endl;
					        cout<<"Fecha de Nacimiento: "<<nuevoRegistro[i].emp.fechaNaci<<endl;
					        cout<<"Edad: "<<nuevoRegistro[i].emp.edad<<endl;
					        cout<<"Años de Laborar en la Empresa: "<<nuevoRegistro[i].emp.anioLabor<<endl;
					        cout<<"Correo Electrónico: "<<nuevoRegistro[i].emp.correo<<endl;
			   			} 
						
			    	break;
			    	case '2': //Bloque de instrucciones Reporte de Nómina General de Empleados 
						cout << 
						"_____________________________________________________\n"
						"|     2. Reporte de Nómina General de Empleados      |\n"
						"-----------------------------------------------------\n\n";
						
						for(int i=0; i<repEmp; i++)
						{
							cout<<"\n-- Empleado No."<<i+1<<" --"<<endl;
							cout<<"Nombres: "<<nuevoRegistro[i].emp.nombre<<endl;
							cout<<"Apellidos: "<<nuevoRegistro[i].emp.apellido<<endl;
							cout<<"Puesto: "<<nuevoRegistro[i].emp.puesto<<endl;
							cout<<"Salario: "<<nuevoRegistro[i].emp.salario<<endl;
							cout<<"Bono: "<<nuevoRegistro[i].emp.bonificacion<<endl;
							cout<<"Comisión: "<<nuevoRegistro[i].sld.comision<<endl;
							cout<<"IGSS: "<<nuevoRegistro[i].sld.igss<<endl;
							cout<<"Boleto de Ornato: "<<nuevoRegistro[i].sld.boleto<<endl;
							cout<<"ISR: "<<nuevoRegistro[i].sld.isr<<endl;
							cout<<"Irtra: "<<nuevoRegistro[i].sld.irtra<<endl;
		
					   	} 
						
			    	break;
			    	case '3': //Bloque de instrucciones Reporte de Salarios
						cout << 
						"____________________________________\n"
						"|       3. Reporte de Salarios      |\n"
						"------------------------------------\n\n";
					
						for(int i=0; i<repEmp; i++)
						{
							cout<<"\n-- Empleado No."<<i+1<<" --"<<endl;
							cout<<"Nombres: "<<nuevoRegistro[i].emp.nombre<<endl;
							cout<<"Apellidos: "<<nuevoRegistro[i].emp.apellido<<endl;
							cout<<"Puesto: "<<nuevoRegistro[i].emp.puesto<<endl;
							nuevoRegistro[i].sld.sueldoLiq = (nuevoRegistro[i].emp.salario + nuevoRegistro[i].sld.comision + nuevoRegistro[i].emp.bonificacion)
							- (nuevoRegistro[i].sld.igss + nuevoRegistro[i].sld.isr + nuevoRegistro[i].sld.irtra + nuevoRegistro[i].sld.boleto);
							cout<<"Sueldo Liquido: "<<nuevoRegistro[i].sld.sueldoLiq<<endl;
		
					   	} 
						
			    	break;
			    	case '4': //Bloque de instrucciones Reporte por producto vendido

						cout << 
						"____________________________________________\n"
						"|      4. Reporte por producto vendido      |\n"
						"--------------------------------------------\n\n";
						
						for(int i=0; i<repVen; i++)
						{
							cout<<"\n-- Producto Vendido No."<<i+1<<" --"<<endl;
							cout<<"Código de Producto: "<<nuevoRegistro[i].ven.codProd<<endl;
							cout<<"Código de Vendedor: "<<nuevoRegistro[i].emp.codEmp<<endl;
							cout<<"Código de Venta: "<<nuevoRegistro[i].ven.codVen<<endl;
							cout<<"Descripción del Producto: "<<nuevoRegistro[i].ven.descProd<<endl;
							cout<<"Cantidad: "<<nuevoRegistro[i].ven.cantidad<<endl;
							cout<<"Precio: "<<nuevoRegistro[i].ven.precio<<endl;
							cout<<"Total: "<<nuevoRegistro[i].ven.total<<endl;
				   		}
						
						
			    	break;
			    	
			    	case '5': //Bloque de instrucciones Salir
						cout << 
						"__________________________________\n"
						"|            5. Salir             |\n"
						"----------------------------------\n\n";
						
						cout << "¡Gracias por utilizar este sistema!\n"
								"    Randy Alexander López Flores   \n"
								"            0905-20-8464           \n\n";
								
						exit(6);
						
			    	break;
			    	default: cout << 
						"___________________________________\n"
						"|||||||||| Opción Inválida ||||||||\n"
						"||||||||||    	(-_-;)     ||||||||\n"
						"¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬\n\n";
						
				}  
				
				cout<<endl<<endl;
				system("PAUSE");
				
	    	break;
	    	case '6': //Bloque de instrucciones Salir
				cout << 
				"__________________________________\n"
				"|            6. Salir             |\n"
				"----------------------------------\n\n";
				
				cout << "¡Gracias por utilizar este sistema!\n"
						"    Randy Alexander López Flores   \n"
						"            0905-20-8464           \n\n";
						
				system("PAUSE");
				exit(6);
				
	    	break;
	    	default: cout << 
				"___________________________________\n"
				"|||||||||| Opción Inválida ||||||||\n"
				"||||||||||    	(-_-;)     ||||||||\n"
				"¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬\n\n";
				system("PAUSE");
				
		}
		
	} while(opcion);
	
    return 0;
}
