function dw(message)
{
	document.write(message);	
}

function assign_var()
{
// -------------- Menu ----------------
menu_1 = "Inicio";
menu_2 = "Ayuda";
menu_3 = "Acceder";
menu_4 = "Salir";
menu_5 = "Estado de Internet";
menu_6 = "Conectado";
menu_7 = "Sin conexi�n";
menu_8 = "Configuraci�n de LAN";
menu_9 = "Ajustes LAN";
menu_10 = "Lista de clientes DHCP";
menu_11 = "Internet WAN";
menu_12 = "Tipo de conexi�n";
menu_13 = "DNS";
menu_14 = "Inal�mbrico";
menu_15 = "Canal y SSID";
menu_16 = "Seguridad";
menu_17 = "Utilizar como punto de acceso";
menu_18 = "Control de direcciones MAC";
menu_19 = "Firewall";
menu_20 = "Servidores virtuales";
menu_21 = "Filtros para IP de clientes";
menu_22 = "DMZ";
menu_23 = "DDNS";
menu_24 = "Bloquear ping a WAN";
menu_25 = "Registro de seguridad";
menu_26 = "Utilidades";
menu_27 = "Reiniciar el router";
menu_28 = "Restablecer configuraci�n predeterminada de f�brica";
menu_29 = "Guardar/Copia de seguridad ajustes";
menu_30 = "Restablecer ajustes anteriores";
menu_31 = "Actualizaci�n del firmware";
menu_32 = "Ajustes del sistema";
menu_33 = "Wi-Fi Protected Setup";
menu_34 = "Wireless Bridge";
		
// -------------- Home ----------------
home_1 = "Estado";	
home_2 = "Deber� registrarse para poder modificar cualquiera de los ajustes.";
home_3 = "Conexi�n";
home_4 = "Desconectar";
home_5 = "Informaci�n sobre la versi�n";
home_6 = "Ajustes LAN";
home_7 = "Versi�n del firmware";
home_8 = "LAN/WLAN MAC";
home_9 = "Versi�n de c�digo de arranque";
home_10 = "Direcci�n IP";
home_11 = "Hardware";
home_12 = "M�scara de subred";
home_13 = "Servidor DHCP";
home_14 = "Ajustes de Internet";
home_15 = "Caracter�sticas";
home_16 = "Direcci�n MAC de WAN";
home_17 = "NAT";
home_18 = "IP de Wan";
home_19 = "Funci�n inal�mbrica";
home_20 = "Pasarela predeterminada";	
home_21 = "SSID";	
home_22 = "Servidor DNS primario";
home_23 = "Seguridad";
home_24 = "Desactivado";
home_25 = "WEP";
home_26 = "WPA (con servidor Radius)";
home_27 = "WPA-PSK(sin servidor)";
home_28 = "Servidor DNS secundario";
home_29 = "ADSL";
home_30 = "Language";//<=====Dave=====
home_31 = "Tipo";
home_32 = "Current Langugae";//<=====Dave=====
home_33 = "Estado";
home_34 = "Available Langugaes";//<=====Dave=====
home_35 = "Enlace inferior";
home_36 = "Bajada";
home_37 = "Subida";
home_38 = "Velocidad de datos";
home_39 = "Margen de ruido";
home_40 = "Potencia de salida";
home_41 = "Atenuaci�n";
home_42 = "Configurar inicio";
home_43 = "Activado";
home_44 = "Desactivado";
home_45 = "English";
home_46 = "Deutsch";
home_47 = "Fran&ccedil;ais";
home_48 = "Espa�ol";
home_49 = "Ajustes WLAN";
home_50 = "Direcci�n MAC WLAN";
home_51 = "Hora";
home_52 = "WPS";


// -------------- Login ----------------
lgn_1 = "Acceder";
lgn_2 = "Para poder modificar cualquiera de los ajustes, deber� acceder con una contrase�a. Si no ha establecido a�n una contrase�a personalizada, deje este espacio en blanco y haga clic en \"Enviar\".";
lgn_3 = "Contrase�a";
lgn_4 = "Valor predeterminado = dejar en blanco";
lgn_5 = "Borrar";
lgn_6 = "Enviar";

// -------------- LAN Main ----------------
lm_1 = "LAN";
lm_2 = "LAN";
lm_3 = "Su router est� equipado con un servidor DHCP que asignar� autom�ticamente direcciones IP a cada uno de los ordenadores de su red. Los ajustes establecidos de f�brica para el servidor DHCP funcionar�n en la mayor�a de aplicaciones. Si precisa efectuar cambios en estos ajustes, podr� hacerlo.";
lm_4 = "Los cambios que puede realizar son:";
lm_5 = "Modificar la direcci�n IP interna del router. Predeterminado = 192.168.2.1";
lm_6 = "Modificar la M�scara de Subred. Predeterminada = 255.255.255.0";
lm_7 = "Activar/Desactivar la funci�n de servidor DHCP. Predeterminada= ON (Activada)";
lm_8 = "Especificar la direcci�n de inicio y final del conjunto de IP. Predeterminado = de inicio: 2 / de final: 100";
lm_9 = "Especificar el tiempo l�mite de concesi�n de la direcci�n IP. Predeterminado= Siempre ";
lm_10 = "Especificar un Nombre de Dominio local. Predeterminado= Belkin ";
lm_11 = "Para efectuar cambios, haga clic en \"Ajustes LAN\" en la pesta�a LAN de la izquierda.";
lm_12 = "El router le proporcionar� asimismo una lista de todos los ordenadores cliente conectados a la red. Para visualizar la lista, haga clic en \"Lista de clientes DHCP\" en la pesta�a LAN de la izquierda.";

// -------------- LAN Settings ----------------
ls_1 = "LAN";
ls_2 = "Ajustes LAN";
ls_3 = "Aqu� podr� efectuar modificaciones en la red de �rea local (LAN). Para que los cambios tengan efecto, deber� pulsar el bot�n \"Aplicar cambios\" en la parte inferior de la pantalla.";
ls_4 = "Direcci�n IP";
ls_5 = "M�s informaci�n";
ls_6 = "M�scara de subred";
ls_7 = "Servidor DHCP ";
ls_8 = "Activado";
ls_9 = "Desactivado";
ls_10 = "La funci�n de servidor DHCP facilita en gran medida la tarea de establecer una red asignando direcciones IP a cada ordenador de la red. No es necesario efectuar cambios aqu�.";
ls_11 = "Direcci�n de inicio del conjunto de IP. ";
ls_12 = "Direcci�n de final del conjunto de IP ";
ls_13 = "\"Lease Time\" (Tiempo l�mite de concesi�n)";
ls_14 = "Una hora";
ls_15 = "Dos horas";
ls_16 = "Medio d�a";
ls_17 = "Un d�a";
ls_18 = "Dos d�as";
ls_19 = "Una semana";
ls_20 = "Dos semanas";
ls_21 = "Siempre";
ls_22 = "La cantidad de tiempo que el servidor DHCP reservar� la direcci�n IP para cada ordenador.";
ls_23 = "Nombre de dominio local";
ls_24 = "opcional";
ls_25 = "Una propiedad que le permite asignar un nombre a su red.";
ls_26 = "Borrar cambios";
ls_27 = "Aplicar cambios";
ls_28 = "La direcci�n IP seleccionada ser� un IP no enrutable.  192.168.x.x (donde x es una cifra entre el 0 y el 255.) 10.x.x.x (donde x es una cifra entre el 0 y el 255). 172.y.x.x (donde x es una cifra entre 16 y 31 y x es una cifra entre 0 y 255).";
ls_29 = "Bien no ha introducido todos los n�meros, o bien algunos de los n�meros introducidos es incorrecto. El n�mero deber� encontrarse entre 0 y 255 en todos los recuadros de introducci�n.";
ls_30 = "El n�mero de M�scara de subred que ha introducido no es v�lido.";
ls_31 = "La direcci�n IP de LAN no puede encontrarse en el conjunto de direcciones de DHCP.";
ls_32 = "La direcci�n IP de final deber� ser mayor que la direcci�n IP de inicio.";
ls_33 = "Nombre de dominio local no v�lido";
ls_34 = "�Desea realmente modificar la direcci�n IP de LAN?";
ls_35 = "Introduzca de forma manual la nueva direcci�n Lan en el recuadro de entrada de la Direcci�n de la barra de estado de su navegador";
ls_36 = "La conexi�n inal�mbica se reiniciar�, si est� realizando este cambio desde un ordenador inal�mbrico, puede que su ordenador inal�mbrico se desconecte temporalmente del router.";
ls_37 = "La direcci�n IP introducida no es v�lida";

// -------------- LAN DHCP ----------------
ld_1 = "LAN";
ld_2 = "DHCP";
ld_3 = "Lista de clientes DHCP";
ld_4 = "Esta p�gina le muestra la direcci�n IP, el Nombre de Host y la direcci�n MAC de cada uno de los ordenadores conectados a su red. Si el ordenador no tiene especificado ning�n nombre de host, el campo de Nombre del host estar� en blanco. Al pulsar \"Refresh\" (Actualizar) se actualizar� la lista.";
ld_5 = "Direcci�n IP";
ld_6 = "Nombre de host";
ld_7 = "Direcci�n MAC";
ld_8 = "Actualizar";

// -------------- WAN Main ----------------
wm_1 = "Internet WAN";
wm_2 = "WAN";
wm_3 = "La pesta�a Internet WAN es donde configurar� su router para conectar con su proveedor de servicios de Internet. El router es capaz de conectarse a pr�cticamente cualquier sistema de los ISP (proveedores de servicios de Internet) siempre que hayan sido configurados correctamente los ajustes del router para su tipo de conexi�n al ISP. Para configurar el router para la conexi�n con su ISP, haga clic en \"Tipo de conexi�n\" en la pesta�a Internet WAN de la parte izquierda de la pantalla.";
wm_4 = "Tipos de conexi�n admitidos:";
wm_5 = "PPPoE";
wm_6 = "PPPoA";
wm_7 = "Dynamic/Fixed IP (1483 Bridge)";//<=====Dave=====
wm_8 = "IP est�tica ";
wm_9 = "S�lo m�dem (Desactivar compartido de Internet)";

// -------------- WAN Connection ----------------
wc_1 = "WAN";
wc_2 = "Tipo de conexi�n";
wc_3 = "Seleccione su tipo de conexi�n:";
wc_4 = "PPPoE";
wc_5 = "PPPoA";
wc_6 = "Dynamic/Fixed IP (1483 Bridge)";//<=====Dave=====
wc_7 = "IP est�tica (IPoA)";
wc_8 = "S�lo m�dem (Desactivar compartido de Internet)";
wc_9 = "Siguiente";

// -------------- WAN DNS ----------------
wd_1 = "WAN";
wd_2 = "DNS";
wd_3 = "En el caso de que su ISP le haya proporcionado una direcci�n DNS espec�fica, introd�zcala en esta ventana y haga clic en \"Aplicar cambios\". ";
wd_4 = "Autom�ticamente desde el ISP";
wd_5 = "Direcci�n DNS";
wd_6 = "Direcci�n DNS secundaria ";
wd_7 = "DNS = Servidor de nombres de dominio. Un servidor ubicado en Internet que convierte los URL (V�nculos de recursos universales), como por ejemplo www.belkin.com, en direcciones IP.";
wd_8 = "M�s informaci�n";
wd_9 = "Borrar cambios";
wd_10 = "Aplicar cambios";
wd_11 = "Direcci�n Ip no v�lida, el �ltimo n�mero no puede ser 0 ni 255";

// -------------- WAN Connection PPPoE ----------------
wcp_1 = "PPPoE / PPPoA";
wcp_2 = "PPPoE";
wcp_3 = "PPPoA";
wcp_4 = "Para introducir los ajustes de su PPPoA, introduzca su informaci�n a continuaci�n y haga clic en \"Aplicar cambios\".";
wcp_5 = "Para introducir los ajustes de su PPPoE, introduzca su informaci�n a continuaci�n y haga clic en \"Aplicar cambios\".";
wcp_6 = "Nombre de usuario";
wcp_7 = "Contrase�a";
wcp_8 = "Introducir de nuevo la Contrase�a";
wcp_9 = "Nombre del servicio";
wcp_10 = "VPI / VCI";
wcp_11 = "Encapsulamiento";
wcp_12 = "LLC";
wcp_13 = "VC/MUX";
wcp_14 = "MTU";
wcp_15 = "No realice cambios en el ajuste MTU a menos que su ISP requiera espec�ficamente un ajuste diferente de 1432.";
wcp_16 = "Desconectar despu�s de ";
wcp_17 = "minutos sin actividad.";
wcp_18 = "Utilice la direcci�n IP est�tica";
wcp_19 = "Introduzca su Nombre de Usuario.";
wcp_20 = "Introduzca su contrase�a.";
wcp_21 = "The password you entered do not match. Please enter your password and re-type the same password.";//<=====Dave=====

// -------------- WAN Connection Dynamic/Fixed IP  ----------------
wcd_1 = "Dynamic/Fixed IP (1483 Bridge)";//<=====Dave=====
wcd_2 = "La direcci�n IP WAN  no es una direcci�n IP v�lida.";
wcd_3 = "La m�scara de subred WAN no es una direcci�n IP v�lida.";
wcd_4 = "La ruta predeterminada no es una direcci�n IP v�lida.";
wcd_5 = "Haga clic aqu� para introducir sus ajustes DNS";
wcd_6 = "Utilice la ruta predeterminada est�tica:";
wcd_7 = "Para introducir los ajustes de su IP Din�mica, introduzca su informaci�n a continuaci�n y haga clic en \"Aplicar cambios\".";
wcd_8 = "IP assigned by ISP";//<=====Dave=====
wcd_9 = "S�";
wcd_10 = "No";//<=====Dave=====

// -------------- WAN Connection Static IP  ----------------
wcs_1 = "IP est�tica (IPoA)";
wcs_2 = "No se ha seleccionado la pasarela predeterminada.";
wcs_3 = "Por favor introduzca/valide sus ajustes de direcci�n DNS en la siguiente pantalla";
wcs_4 = "Para introducir los ajustes de su IP Est�tica, introduzca su informaci�n a continuaci�n y haga clic en \"Aplicar cambios\".";
wcs_5 = "Gateway IP Address";//<=====Dave=====
wcs_6 = "Utilice la interfaz WAN:";
wcs_7 = "Direcci�n IP de WAN";

// -------------- WAN Connection Modem  ----------------
wcm_1 = "S�lo m�dem (Desactivar compartido de Internet)";
wcm_2 = "To enter your Modem settings, type in your information below and click \"Apply changes\".";//<=====Dave=====
wcm_3 = "Activar el servicio de puente";

// -------------- Wireless Main  ----------------
wlm_1 = "Inal�mbrico";
wlm_2 = "En esta pesta�a podr� regular los ajustes de la secci�n inal�mbrica del router.";
wlm_3 = "Canal y SSID";
wlm_4 = "Realice las adaptaciones del canal inal�mbrico y del SSID (nombre de red inal�mbrica).";
wlm_5 = "Seguridad";
wlm_6 = "Modifique los ajustes de seguridad inal�mbrica como ajustes WPA o ajustes WEP.";
wlm_7 = "Utilizar como punto de acceso";
wlm_8 = "Establecer el modo de funcionamiento del router en modo PA.";
wlm_9 = "Control de direcciones MAC";
wlm_10 = "Establezca una lista de clientes a los que desee permitir o denegar el acceso a la red inal�mbrica.";
wlm_11 = "Easily setup and connect to a WPA-enabled 802.11 network with WPS-certified devices using either Personal Information Number(PIN) method or Push Button Configuration(PBC) method.";
wlm_12 = "Set up a list of MAC addresses that enable the interconnection of access points wirelessly.";

// -------------- Wireless Channel and SSID  ----------------
wlcs_1 = "Canal actual   ";
wlcs_2 = "SSID no puede estar vac�o.";
wlcs_3 = "Para efectuar cambios en los ajustes inal�mbricos del router, realice los cambios aqu�. Haga clic en \"Aplicar cambios\" para guardar los ajustes.";
wlcs_4 = "Canal inal�mbrico";
wlcs_5 = "SSID";
wlcs_6 = "Modo Inal�mbrico ";
wlcs_7 = "s�lo 802.11 n";
wlcs_8 = "s�lo 802.11 g";
wlcs_9 = "s�lo 802.11 b";
wlcs_10 = "Desactivado";
wlcs_11 = "Bandwidth";//<=====Dave=====
wlcs_12 = "Emitir SSID ";
wlcs_13 = "Modo protegido ";
wlcs_14 = "Autom�tico";
wlcs_15 = "WMM";
wlcs_16 = "Disable Afterburner(wireless_wifi) for selection";//<=====Dave=====
wlcs_17 = "WMM No Acknowledgement";//<=====Dave=====

// -------------- Wireless Security None  ----------------
wlsn_1 = "Modo de seguridad";
wlsn_2 = "WPA-PSK(sin servidor)";
wlsn_3 = "WEP 128 bit ";
wlsn_4 = "WEP 64 bit";
wlsn_5 = "WPA (con servidor Radius)";
wlsn_6 = "Aqu� podr� establecer sus ajustes de seguridad inal�mbrica/encriptaci�n. Se deber� activar la seguridad para garantizar la m�xima seguridad inal�mbrica. El WPA (Acceso inal�mbrico protegido) proporciona cambios din�micos de clave y constituye la mejor soluci�n de seguridad. En entorno inal�mbricos, donde no todos los dispositivos admiten WPA, se deber� emplear WEP (Privacidad equivalente a la del cable).";

// -------------- Wireless Security WEP 64  ----------------
wlsw64_1 = "Bien no ha introducido todos los d�gitos hexadecimales o bien algunos de los d�gitos hexadecimales introducidos es incorrecto. Un d�gito hexadecimal puede ser un n�mero entre 0 y 9 o una letra de la A a la F.";
wlsw64_2 = "No es una frase de paso v�lida";
wlsw64_3 = "Clave 1";
wlsw64_4 = "Clave 2";
wlsw64_5 = "Clave 3 ";
wlsw64_6 = "Clave 4";
wlsw64_7 = "No se puede aplicar el cambio porque la conexi�n inal�mbrica est� actualmente desactivada.";
wlsw64_8 = "NOTA:Para generar autom�ticamente pares hexadecimales utilizando una Frase de paso, seleccione el recuadro de la izquierda e introduzca en �l la frase de paso.";
wlsw64_9 = "Frase de paso";
wlsw64_10 = "Generar";

// -------------- Wireless Security WEP 128  ----------------
wlsw128_1 = "(13 pares de d�gitos hexadecimales) ";

// -------------- Wireless Security WPA PSK  ----------------
wlswp_1 = "La clave precompartida WPA debe tener entre 8 y 63 caracteres ASCII o 64 d�gitos hexadecimales.";
wlswp_2 = "TKIP";
wlswp_3 = "AES";
wlswp_4 = "Autenticaci�n ";
wlswp_5 = "WPA-PSK";
wlswp_6 = "WPA2-PSK";
wlswp_7 = "T�cnica de encriptaci�n ";
wlswp_8 = "Clave Precompartida (PSK)";
wlswp_9 = "WPA-PSK(sin servidor)";
wlswp_10 = "Acceso inal�mbrico protegido con una clave precompartida: La clave es una contrase�a, con forma de palabra, frase o serie de n�meros y letras. La clave deber� tener entre 8 y 63 caracteres de longitud y puede incluir espacios y s�mbolos, s�lo 64 d�gitos hexadecimales (de 0 a 9 y de A a F). Cada cliente que se conecte a la red deber� emplear la misma clave (clave precompartida) ";
wlswp_11 = "Ocultar PSK ";
wlswp_12 = "WPA-PSK + WPA2-PSK";

// -------------- Wireless Security WPA Radius  ----------------
wlsr_1 = "Introduzca la clave RADIUS.";
wlsr_2 = "WPA/WPA2- Enterprise (RADIUS)";
wlsr_3 = "Ajuste avanzado - Acceso inal�mbrico protegido empleando un servidor para distribuir claves a los clientes: Esta opci�n requiere que exista un servidor Radius funcionando en la red.";
wlsr_4 = "WPA-RADIUS";
wlsr_5 = "WPA2-RADIUS";
wlsr_6 = "Servidor Radius ";
wlsr_7 = "Puerto Radius ";
wlsr_8 = "Clave Radius ";
wlsr_9 = "Intervalo de repetici�n de clave ";
wlsr_10 = "(segundos)";

// -------------- Wireless WPS  ----------------
wlwps_1 = "Wi-Fi Protected Setup(WPS)";
wlwps_2 = " Wi-Fi Protected Setup (WPS) is the industry standard method to simplify the security setup and management of Wi-Fi networks. You now can easily setup and connect to a WPA-enabled 802.11 network with WPS-certified devices using either Personal Information Number(PIN) method or Push Button Configuration(PBC) method. Legacy devices without WPS can be added to the network using the traditional manual configuration method. ";
wlwps_3 = "Personal Information Number(PIN) Method";
wlwps_4 = "Enter the PIN from the client device and click \"Enroll\". Then start WPS on the client device from it's wireless utility or WPS application within 2 minutes.";
wlwps_5 = "Enter Client Device PIN";
wlwps_6 = "If an external Registrar is available, you can also enter Router's PIN at the external Registrar. To change Router's PIN, click \"Generate New PIN\". Or click \"Restore Default PIN\" to reset the PIN to factory default.";
wlwps_7 = "Enroll";
wlwps_8 = "Generate New PIN";
wlwps_9 = "Restore Default PIN";
wlwps_10 = "Start PBC";
wlwps_11 = "Router PIN:";
wlwps_12 = "Push Button Configuration(PBC) Method";
wlwps_13 = " Push and hold the PBC button on your Router for 3 seconds. Then start PBC on the device you want to connect to the Router within 2 minutes.";
wlwps_14 = "Manual Configuration Method";
wlwps_15 = "For client devices without WPS, manually configure the device with the following settings:";
wlwps_16 = "Network Name (SSID):";
wlwps_17 = "Wireless Security";
wlwps_18 = "Network Authentication:";
wlwps_19 = "Data Encryption:";
wlwps_20 = "Network Key (PSK):";
wlwps_21 = "Configured";
wlwps_22 = "Not configured";
wlwps_23 = "Please configure";
wlwps_24 = "Wi-Fi Protected Setup Message";
wlwps_25 = "Initiating - Please start WPS in client device within 2 minutes.";
wlwps_26 = "Success - The device is connected to the Router";
wlwps_27 = "In Progress - Please wait...";
wlwps_28 = "Error Detected - Please try again.";
wlwps_29 = "Invalid PIN! The device PIN is eight numeric digits. Please verify and enter again.";
wlwps_30 = "PIN checksum failed! Please verify and enter a valid PIN.";
wlwps_31 = "OK";
wlwps_32 = "Close";
wlwps_33 = "Cancel";

// -------------- Wireless AP mode  ----------------
wlap_1 = "Introduzca de forma manual la direcci�n Lan en el recuadro de entrada de la Direcci�n de la barra de estado de su navegador.";
wlap_2 = "Utilizar como punto de acceso";
wlap_3 = "Activar";
wlap_4 = "Desactivar";
wlap_5 = " La direcci�n IP seleccionada ser� un IP no enrutable. Ejemplos de una IP no enrutable 192.168.x.x (donde x es una cifra entre el 0 y el 255.) 172.y.x.x (donde x es una cifra entre 16 y 31 y x es una cifra entre 0 y 255) 10.x.x.x (donde x es una cifra entre el 0 y el 255). ";
wlap_6 = "Especificar direcci�n IP";

// -------------- Wireless MAC filter  ----------------
wlmac_1 = "Control de direcciones MAC";
wlmac_2 = "Direcci�n MAC";
wlmac_3 = "A�adir";

// -------------- Firewall Main  ----------------
fwm_1 = "Firewall";
fwm_2 = "Su router se encuentra equipado con un firewall que protege su red de una amplia gama de ataques habituales de piratas inform�ticos, incluidos los ataques Ping of Death (PoD) y Denial of Service (DoS). En caso necesario, puede desactivar la funci�n de firewall. Si desactiva la protecci�n por firewall, no dejar� su red completamente vulnerable a los ataques de los piratas, pero es recomendable dejar activado el firewall siempre que sea posible.";

// -------------- Firewall Virtual Sever  ----------------
fwvs_1 = "Servidores virtuales";
fwvs_2 = "Active Worlds";
fwvs_3 = "Age of Empires";
fwvs_4 = "Expansi�n de Age of Empires: The Rise of Rome";
fwvs_5 = "Expansi�n de Age of Empires II: The Conquerors";
fwvs_6 = "Age of Empires II: The Age of Kings";
fwvs_7 = "Age of Kings";
fwvs_8 = "Age of Wonders";
fwvs_9 = "Aliens vs. Predator";
fwvs_10 = "AOL Instant Messenger";
fwvs_12 = "Audiogalaxy Satellite";
fwvs_13 = "AUTH";
fwvs_14 = "Baldur's Gate";
fwvs_15 = "BattleCom";
fwvs_16 = "Battlefield Communicator";
fwvs_17 = "Black and White";
fwvs_18 = "Blizzard Battle.net";
fwvs_19 = "Buddy Phone";
fwvs_20 = "Bungie.net";
fwvs_21 = "Camerades";
fwvs_22 = "CART Precision Racing";
fwvs_23 = "Close Combat para Windows";
fwvs_24 = "Close Combat III: The Russian Front";
fwvs_25 = "Close Combat: A Bridge Too Far";
fwvs_26 = "Combat Flight Simulator 2: WWII Pacific Theater";
fwvs_27 = "Combat Flight Simulator: WWII Europe Series";
fwvs_28 = "Crimson Skies";
fwvs_29 = "CuSeeMe";
fwvs_30 = "Dark Reign 2";
fwvs_31 = "Delta Force 2";
fwvs_32 = "Delta Three PC to Phone";
fwvs_33 = "Descent 3";
fwvs_34 = "Descent Freespace";
fwvs_35 = "Diablo I";
fwvs_36 = "Diablo II";
fwvs_37 = "DialPad.Com";
fwvs_38 = "Juegos DirectX 7";
fwvs_39 = "Juegos DirectX 8";
fwvs_40 = "Servidor de nombres de dominio (DNS)";
fwvs_41 = "Doom";
fwvs_42 = "Dune 2000";
fwvs_43 = "Dwyco Video Conferencing";
fwvs_44 = "Elite Force";
fwvs_45 = "Everquest";
fwvs_46 = "F-16";
fwvs_47 = "F-22 Lightning 3";
fwvs_48 = "F-22 Raptor";
fwvs_49 = "F22 Raptor (Novalogic)";
fwvs_50 = "Falcon 4.0";
fwvs_51 = "Fighter Ace II";
fwvs_52 = "Flight Simulator 2000";
fwvs_53 = "Freetel";
fwvs_54 = "Servidor FTP";
fwvs_55 = "GNUtella";
fwvs_56 = "Golf 2001 Edition";
fwvs_57 = "Go2Call";
fwvs_58 = "Half Life";
fwvs_59 = "Half Life Server";
fwvs_60 = "Heretic II Server";
fwvs_61 = "I76";
fwvs_62 = "ICUII Client";
fwvs_63 = "IPSEC";
fwvs_64 = "Ivisit";
fwvs_65 = "IRC";
fwvs_66 = "IStreamVideo2HP";
fwvs_67 = "KaZaA";
fwvs_68 = "Kohan Immortal Sovereigns";
fwvs_69 = "LapLink Gold";
fwvs_70 = "Links 2001";
fwvs_71 = "Lotus Notes Server";
fwvs_72 = "Mail (POP3)";
fwvs_73 = "Mail (SMTP)";
fwvs_74 = "MechCommander 2.0";
fwvs_75 = "MechWarrior 4";
fwvs_76 = "Media Player 7";
fwvs_77 = "Midtown Madness 2";
fwvs_78 = "Mig 29";
fwvs_79 = "Monster Truck Madness 2";
fwvs_80 = "Motocross Madness 2";
fwvs_81 = "Motorhead Server";
fwvs_82 = "MSN Gaming Zone";
fwvs_83 = "MSN Messenger";
fwvs_84 = "Myth";
fwvs_85 = "Myth II Server";
fwvs_86 = "Myth: The Fallen Lords";
fwvs_87 = "Need for Speed";
fwvs_88 = "NetMech";
fwvs_89 = "Netmeeting 2.0, 3.0, Intel Video Phone";
fwvs_90 = "Network Time Protocol (NTP)";
fwvs_91 = "News Server (NNTP)";
fwvs_92 = "OKWeb";
fwvs_93 = "OKWin";
fwvs_94 = "Outlaws";
fwvs_95 = "Pal Talk";
fwvs_96 = "pcAnywhere v7.5";
fwvs_97 = "PhoneFree";
fwvs_98 = "Polycom ViaVideo H.323";
fwvs_99 = "Polycom ViaVideo H.323";
fwvs_100 = "PPTP";
fwvs_101 = "Quake";
fwvs_102 = "Quake II (cliente y servidor)";
fwvs_103 = "Quake III";
fwvs_104 = "Red Alert";
fwvs_105 = "RealAudio";
fwvs_106 = "Real Player 8 Plus";
fwvs_107 = "Rise of Rome";
fwvs_108 = "Roger Wilco";
fwvs_109 = "Rogue Spear";
fwvs_110 = "Secure Shell Server (SSH)";
fwvs_111 = "Secure Web Server (HTTPS)";
fwvs_112 = "ShoutCast";
fwvs_113 = "SNMP";
fwvs_114 = "SNMP Trap";
fwvs_115 = "Speak Freely";
fwvs_116 = "StarCraft";
fwvs_117 = "Starfleet Command";
fwvs_118 = "StarLancer";
fwvs_119 = "SWAT3";
fwvs_120 = "Telnet Server";
fwvs_121 = "TFTP";
fwvs_122 = "The 4th Coming";
fwvs_123 = "Tiberian Sun: C&C III";
fwvs_124 = "Total Annihilation";
fwvs_125 = "Ultima";
fwvs_126 = "Unreal Tournament";
fwvs_127 = "Urban Assault";
fwvs_128 = "VoxPhone 3.0";
fwvs_129 = "Warbirds 2";
fwvs_130 = "Web Server (HTTP)";
fwvs_131 = "WebPhone 3.0";
fwvs_132 = "Westwood Online";
fwvs_133 = "Windows 2000 Terminal Server";
fwvs_134 = "X Windows";
fwvs_135 = "Yahoo Pager";
fwvs_136 = "Yahoo Messenger Chat";
fwvs_137 = "Todas las entradas est�n llenas.\nElimine algunas entradas y pruebe de nuevo.";
fwvs_138 = "Esta funci�n le permitir� dirigir llamadas (Internet) externas para servicios como un servidor web (puerto 80), servidor FTP (puerto 21), u otras aplicaciones mediante su router a su red interna.";
fwvs_139 = "Seleccione una";
fwvs_140 = "Borrar";
fwvs_151 = "Tipo";
fwvs_152 = "�Desea borrar todas las entradas?";
fwvs_153 = "�Desea borrar la entrada";


// -------------- Firewall Client IP filter  ----------------
fwcf_1 = "Filtros para IP de clientes";
fwcf_2 = "Domingo";
fwcf_3 = "Lunes";
fwcf_4 = "Martes";
fwcf_5 = "Mi�rcoles";
fwcf_6 = "Jueves";
fwcf_7 = "Viernes";
fwcf_8 = "S�bado";
fwcf_9 = "La direcci�n de origen no es una direcci�n IP v�lida.";
fwcf_10 = "El puerto de destino no es un n�mero de puerto o intervalo de puerto v�lido.";
fwcf_11 = "El Router puede ser configurado para restringir el acceso a Internet, al correo electr�nico o a otros servicios de red en determinados d�as y horas.";
fwcf_12 = "AMBOS";
fwcf_13 = "Tiempo de bloqueo";
fwcf_14 = "Siempre";
fwcf_15 = "Bloqueo";
fwcf_16 = "D�a";
fwcf_17 = "Hora";
fwcf_18 = "Puerto";

// -------------- Firewall DMZ  ----------------
fwdmz_1 = "DMZ";
fwdmz_2 = "La funci�n DMZ le permite especificar un ordenador de su red para ser colocado fuera del firewall NAT. Esto puede ser necesario en el caso de que la propiedad NAT est� causando problemas con una aplicaci�n como, por ejemplo, una aplicaci�n de juegos o de videoconferencia. Utilice esta caracter�stica de forma temporal. El ordenador que se encuentra en la DMZ no est� protegido contra los ataques de piratas inform�ticos. Para situar un ordenador en la DMZ, introduzca los d�gitos finales de su direcci�n IP en el campo inferior y seleccione \"Activar\". Haga clic en \"Aplicar cambios\" para que los cambios tengan efecto.";
fwdmz_3 = "Direcci�n IP del host virtual de DMZ";
fwdmz_4 = "IP est�tica ";
fwdmz_5 = "IP privada";

// -------------- Firewall DDNS  ----------------
fwddns_1 = "Nombre de host vac�o.";
fwddns_2 = "Nombre de dominio vac�o.";
fwddns_3 = "Nombre de usuario vac�o.";
fwddns_4 = "Direcci�n de e-mail no v�lida.";
fwddns_5 = "Contrase�a vac�a.";
fwddns_6 = "Clave no v�lida.";
fwddns_7 = "DDNS";
fwddns_8 = "Los servicios DDNS (Dynamic DNS) le permiten utilizar un nombre de dominio aunque su direcci�n IP de Internet sea din�mica. Debe registrarse para el servicio DDNS en uno de los servicios DDNS de la lista.";
fwddns_9 = "Servicio DDNS";
fwddns_10 = "DDNS desactivado";
fwddns_11 = "Estado DDNS";
fwddns_12 = "Desconectado";
fwddns_13 = "Conectado";
fwddns_14 = "Nombre de usuario";
fwddns_15 = "Contrase�a";
fwddns_16 = "Nombre de dominio";
fwddns_17 = "E-mail";
fwddns_18 = "Clave";
fwddns_19 = "Actualizar DNS din�mico";

// -------------- Firewall Wan Ping Blocking  ----------------
fwwpb_1 = "Bloquear ping a WAN";
fwwpb_2 = "�FUNCI�N AVANZADA! Es posible configurar el router para que no responda a un ping ICMP (un ping al puerto WAN). Esta caracter�stica ofrece un mayor nivel de seguridad.";
fwwpb_3 = "Bloquear ping ICMP";

// -------------- Firewall Security Log  ----------------
fwsl_1 = "Registro de seguridad";
fwsl_2 = "El router conserva un registro de toda actividad que tiene lugar en el mismo como, por ejemplo, las entradas y salidas y todos los intentos de acceder al router desde Internet. El registro puede ser visualizado en la parte inferior.";
fwsl_3 = "Archivo de registro";
fwsl_4 = "Guardar";
fwsl_5 = "Borrar";

// -------------- Utility Main  ----------------
utm_1 = "Utilidades";
utm_2 = "Esta pantalla le permite gestionar diferentes par�metros del router y llevar a cabo determinadas funciones de administrador.";
utm_3 = " Reiniciar el router ";
utm_4 = "Algunas veces es posible que sea necesario reiniciar el router en caso de que comience a funcionar mal. Al reiniciar el router no se borrar� ninguno de sus ajustes de configuraci�n.";
utm_5 = "Restablecer configuraci�n predeterminada de f�brica";
utm_6 = "El empleo de esta opci�n restablecer� los ajustes (predeterminados) de f�brica del router. Se recomienda que realice una copia de seguridad de sus ajustes antes de restablecer todos los ajustes predeterminados.";
utm_7 = "Guardar/Copia de seguridad ajustes";
utm_8 = "Puede guardar su configuraci�n actual utilizando esta funci�n. Guardar su configuraci�n le permitir� restablecerla posteriormente en caso de que sus ajustes se pierdan o se modifiquen. Se recomienda realizar una copia de seguridad de su configuraci�n actual antes de llevar a cabo una actualizaci�n del firmware.";
utm_9 = "Actualizaci�n del firmware";
utm_10 = "De vez en cuando, es posible que Belkin publique nuevas versiones del firmware del router. Las actualizaciones del firmware contienen mejoras de las propiedades y soluciones para los problemas que puedan haber existido.";
utm_11 = "Ajustes del sistema";
utm_12 = " La p�gina de Ajustes del sistema es donde podr� introducir una nueva contrase�a de administrador, establecer la zona horaria, activar la gesti�n a distancia y encender y apagar la funci�n NAT.";
utm_13 = " Restablecer ajustes guardados previamente ";
utm_14 = "Esta opci�n le permitir� restablecer una configuraci�n guardada anteriormente.";

// -------------- Utility Reset  ----------------
utrst_1 = "�Est� seguro de que desea reiniciar el router? El reinicio del router no afectar� a su configuraci�n.";
utrst_2 = "Espere 60 segundos hasta que se reinicie el  router. No apague el  router antes de que se haya completado el reinicio.";
utrst_3 = "Reiniciar el router";
utrst_4 = " Algunas veces es posible que sea necesario reiniciar el route en caso de que comience a funcionar mal. Al reiniciar el router no se borrar� ninguno de sus ajustes de configuraci�n. Haga clic en el bot�n de \"Reiniciar router\" de la parte inferior para reiniciar el router.";

// -------------- Utility Factory Default  ----------------
utfd_1 = "Restablecer configuraci�n predeterminada de f�brica";
utfd_2 = "ADVERTENCIA: �Se perder�n todos sus ajustes! �Est� seguro de que desea hacerlo?";
utfd_3 = "El restablecer los ajustes predeterminados puede durar hasta 60 segundos. No apague o desconecte el router durante este proceso.";
utfd_4 = "No restablecer� la configuraci�n predeterminada de f�brica. �No se perder� ning�n ajuste!";
utfd_5 = "El empleo de esta opci�n restablecer� los ajustes (predeterminados) de f�brica del router. Se recomienda que realice una copia de seguridad de sus ajustes antes de restablecer todos los ajustes predeterminados. Para restablecer los ajustes predeterminados de f�brica, haga clic en el bot�n \"Restablecer configuraci�n predeterminada\" de la parte inferior.";
utfd_6 = "Restablecer configuraci�n predeterminada";

// -------------- Utility Save/Backup settings  ----------------
utss_1 = "Guardar/Copia de seguridad de ajustes actuales ";
utss_2 = "Puede guardar su configuraci�n actual utilizando esta funci�n. Guardar su configuraci�n le permitir� restablecerla posteriormente en caso de que sus ajustes se pierdan o se modifiquen. Se recomienda realizar una copia de seguridad de su configuraci�n actual antes de llevar a cabo una actualizaci�n del firmware.";
utss_3 = "Guardar";

// -------------- Utility Previous Settings  ----------------
utps_1 = "Restablecer ajustes anteriores ";
utps_2 = "Los ajustes se est�n actualizando y el router se reiniciar�. Espere un minuto.";
utps_3 = "�Desea continuar y restablecer los ajustes?";
utps_4 = "Tras restabler los ajustes, es posible que el router no responda\na los comandos durante un plazo de un minuto.\n\nEsto es normal. No apague el router durante este tiempo.";
utps_5 = "Esta opci�n le permitir� restablecer una configuraci�n guardada anteriormente.";
utps_6 = "Restablecer";

// -------------- Utility Firmware Update  ----------------
utfu_1 = "Actualizaci�n del firmware";
utfu_2 = "Buscar una nueva versi�n del firmware";
utfu_3 = "Comprobar firmware";
utfu_4 = "El software se est� cargando. Espere un minuto.";
utfu_5 = "Especifique la ubicaci�n del archivo de actualizacion. Introduzca la ruta y el nombre del archivo o haga clic en \"Examinar\" para buscar la ubicaci�n del archivo";
utfu_6 = "�Est� seguro de que desea continuar con la actualizaci�n?";
utfu_7 = "Al final de la actualizaci�n, es posible que el router no responda a los comandos durante un plazo de un minuto. Esto es normal. No apague ni reinicie el router durante ese tiempo.";
utfu_8 = "De vez en cuando, es posible que Belkin publique nuevas versiones del firmware del router. Las actualizaciones del firmware contienen mejoras y soluciones para los problemas que puedan haber existido. Haga clic en el v�nculo de la parte inferior para comprobar si existe una nueva actualizaci�n de firmware disponible para este router.";
utfu_9 = "NOTA: Realice copias de seguridad de sus ajustes actuales antes de actualizar la versi�n del firmware. <b><a  style=\"FONT-SIZE: 11px; color:#0066FF\" href=\"util_save.html\"> Haga clic aqu� para </a></b> ir a la p�gina de Guardar/Copia de seguridad de ajustes actuales.";
utfu_10 = "Versi�n del firmware";
utfu_11 = "Actualizaci�n del firmware";
utfu_12 = "Actualizar";
utfu_13 = "Actualizaci�n del firmware en curso.";
utfu_14 = "NO APAGUE O DESACTIVE EL ROUTER, si lo hace podr�a da�ar el router dej�ndolo inoperable";

// -------------- Utility System Settings  ----------------
utsys_1 = "Ajustes del sistema";
utsys_2 = "Domingo";
utsys_3 = "Lunes";
utsys_4 = "Martes";
utsys_5 = "Mi�rcoles";
utsys_6 = "Jueves";
utsys_7 = "Viernes";
utsys_8 = "S�bado";
utsys_9 = "Enero";
utsys_10 = "Febrero";
utsys_11 = "Marzo";
utsys_12 = "Abril";
utsys_13 = "Mayo";
utsys_14 = "Junio";
utsys_15 = "Julio";
utsys_16 = "Agosto";
utsys_17 = "Septiembre";
utsys_18 = "Octubre";
utsys_19 = "Noviembre";
utsys_20 = "Diciembre";
utsys_21 = "132.163.4.102-Am�rica del Norte";
utsys_22 = "192.5.41.41-Am�rica del Norte";
utsys_23 = "192.5.41.209-Am�rica del Norte";
utsys_24 = "207.200.81.113-Am�rica del Norte";
utsys_25 = "208.184.49.9-Am�rica del Norte";
utsys_26 = "129.132.2.21-Europa";
utsys_27 = "130.149.17.8-Europa";
utsys_28 = "128.250.36.3-Australia";
utsys_29 = "137.189.8.174-Pac�fico asi�tico";
utsys_30 = "Oeste de la l�nea internacional de cambio de fecha";
utsys_31 = "Isla Midway, Samoa";
utsys_32 = "Haw�i";
utsys_33 = "Alaska";
utsys_34 = "Hora del Pac�fico, Tijuana";
utsys_35 = "Arizona, Mazatlan";//<=====Dave=====
utsys_36 = "Chihuahua, La Paz";//<=====Dave=====
utsys_37 = "Hora de las monta�as";
utsys_38 = "Central America";//<=====Dave=====
utsys_39 = "Hora central";
utsys_40 = "Guadalajara, Mexico City, Monterrey";//<=====Dave=====
utsys_41 = "Saskatchewan";
utsys_42 = "Bogot�, Lima, Quito";
utsys_43 = "Hora del Este";
utsys_44 = "Indiana";
utsys_45 = "Hora del Atl�ntico";
utsys_46 = "Caracas, La Paz";
utsys_47 = "Santiago";
utsys_48 = "Terranova";
utsys_49 = "Brasilia";
utsys_50 = "Buenos Aires, Georgetown";
utsys_51 = "Groenlandia";
utsys_52 = "Atl�ntico medio";
utsys_53 = "Islas Azores";
utsys_54 = "Cabo Verde";
utsys_55 = "Casablanca, Monrovia";
utsys_56 = "Hora media de Greenwich: Dublin, Edimburgo, Lisboa, Londres";
utsys_57 = "�msterdam, Berl�n, Berna, Roma, Estocolmo, Viena";
utsys_58 = "Belgrado, Bratislava, Budapest, Liubliana, Praga";
utsys_59 = "Bruselas, Copenhague, Madrid, Par�s";
utsys_60 = "Sarajevo, Skopje, Varsovia, Zagreb";
utsys_61 = "�frica Occidental y Central";
utsys_62 = "Atenas, Estambul, Minsk";
utsys_63 = "Bucarest";
utsys_64 = "El Cairo";
utsys_65 = "Harare, Pretoria";
utsys_66 = "Helsinki, Kyiv, Riga, Sofia, Tallinn, Vilnius";//<=====Dave=====
utsys_67 = "Jerusalem";//<=====Dave=====
utsys_68 = "Bagdad";
utsys_69 = "Kuwait, Riad";
utsys_70 = "Mosc�, San Petersburgo, Volgogrado";
utsys_71 = "Nairobi";
utsys_72 = "Teher�n";
utsys_73 = "Abu Dhabi, Muscat";
utsys_74 = "Baku, Tbilisi, Yerevan";//<=====Dave=====
utsys_75 = "Kabul";
utsys_76 = "Ekaterimburgo";
utsys_77 = "Islamabad, Karachi, Tashkent";//<=====Dave=====
utsys_78 = "Chennai, Kolkata, Mumbai, New Delhi";//<=====Dave=====
utsys_79 = "Kathmandu";//<=====Dave=====
utsys_80 = "Almaty, Novosibirsk";//<=====Dave=====
utsys_81 = "Astana, Dhaka";//<=====Dave=====
utsys_82 = "Sri Jayawardenepura";//<=====Dave=====
utsys_83 = "Rangoon";//<=====Dave=====
utsys_84 = "Bangkok, Hanoi, Yakarta";
utsys_85 = "Krasnoyarsk";//<=====Dave=====
utsys_86 = "Pek�n, Chongqing, Hong Kong, Urumqi";
utsys_87 = "Irkutsk, Ulaan Bataar";//<=====Dave=====
utsys_88 = "Kuala Lumpur, Singapore";//<=====Dave=====
utsys_89 = "Perth";
utsys_90 = "Taipei";
utsys_91 = "Osaka, Saporo, Tokio";
utsys_92 = "Seoul";//<=====Dave=====
utsys_93 = "Yakutsk";
utsys_94 = "Adelaide";//<=====Dave=====
utsys_95 = "Darwin";//<=====Dave=====
utsys_96 = "Brisbane";
utsys_97 = "Canberra, Melbourne, Sydney";
utsys_98 = "Guam, Port Moresby";
utsys_99 = "Hobart";
utsys_100 = "Vladivostok";
utsys_101 = "Magad�n";
utsys_102 = "Solomon Is., New Caledonia";//<=====Dave=====
utsys_103 = "Auckland, Wellington";
utsys_104 = "Fiji, Kamchatka, Islas Marshall";
utsys_105 = "Otros";
utsys_106 = "Ninguno";
utsys_107 = "Se recomienda que establezca su contrase�a de administrador.";
utsys_108 = "Please choose the following remote management type :\n1.Any IP address can remotely manage the router\n2.Only this IP address can remotely manage the router";//<=====Dave=====
utsys_109 = "�N�mero no v�lido! Deber� estar entre 1 y 65535";
utsys_110 = "El primer servidor de hora es otro, pero el campo Otros est� en blanco.";
utsys_111 = "NTP IP Address is invalid IP address.";//<=====Dave=====
utsys_112 = "El segundo servidor de hora es otro, pero el campo Otros est� en blanco.";
utsys_113 = "La antigua contrase�a de administrador es incorrecta.";
utsys_114 = "Password should not be less than 3 characters or lognger than 12 characters.";//<=====Dave=====
utsys_115 = "Las contrase�as no coinciden.";
utsys_116 = "Login Timeout should be between 1 and 99.";//<=====Dave=====
utsys_117 = "Contrase�a de administrador";
utsys_118 = "El router efect�a el env�o SIN necesidad de introducir contrase�a. Si desea a�adir una contrase�a para disfrutar de una mayor seguridad, puede establecerla aqu�.";
utsys_119 = "Introduzca la contrase�a actual ";
utsys_120 = "Introduzca la nueva contrase�a ";
utsys_121 = "Confirme la nueva contrase�a ";
utsys_122 = "Tiempo l�mite de acceso ";
utsys_123 = "1-99 minutos";
utsys_124 = "Hora y Zona horaria";
utsys_125 = "Establezca su zona horaria. Si reside en una zona que se realiza el cambio de hora seg�n el horario de verano, coloque una marca en este recuadro.";
utsys_126 = "Zona horaria";
utsys_127 = "Cambio de hora seg�n el horario de verano";
utsys_128 = "Cambiar la hora autom�ticamente seg�n el horario de verano";
utsys_129 = "Primer servidor de hora NTP";
utsys_130 = "Segundo servidor de hora NTP";
utsys_131 = "Gesti�n a distancia";
utsys_132 = "�PROPIEDAD AVANZADA! La gesti�n a distancia le permite efectuar cambios en los ajustes de su router desde cualquier parte a trav�s de Internet. Antes de activar esta funci�n, ASEG�RESE DE HABER ESTABLECIDO LA CONTRASE�A DEL ADMINISTRADOR.";
utsys_133 = "Enable Remotely Management";//<=====Dave=====
utsys_134 = "Cualquier direcci�n IP puede gestionar el router a distancia";
utsys_135 = "�nicamente esta direcci�n IP puede gestionar el router a distancia";
utsys_136 = "Puerto de acceso remoto";
utsys_137 = "Activaci�n de NAT";
utsys_138 = "�FUNCI�N AVANZADA! Le permite desactivar la propiedad de Traducci�n de direcciones de red. En pr�cticamente NING�N caso deber�a desactivar esta funci�n.";
utsys_139 = "Activar / Desactivar NAT";
utsys_140 = "UPnP";
utsys_141 = "�FUNCI�N AVANZADA! Le permite activar o desctivar su UPnP";
utsys_142 = "Activar UPnP";
utsys_143 = "Activar la actualizaci�n autom�tica del firmware";
utsys_144 = "�FUNCI�N AVANZADA!  permite comprobar autom�ticamente la disponibilidad de actualizaciones de firmware para su router.";
utsys_145 = " Activar / Desactivar la actualizaci�n autom�tica del firmware ";

// -------------- Check New Firmware  ----------------
cnf_1 = "Comprobar firmware";
cnf_2 = " Imposible conectar con el servidor de informaci�n del firmware, vuelva a comprobar la conexi�n WAN. ";
cnf_3 = "No existe ninguna actualizaci�n nueva de firmware disponible para este router.";

// -------------- Help  ----------------
hlp_1 = "Ayuda";
hlp_2 = "HELP OF TERMS";//<=====Dave=====
hlp_3 = "arriba";
hlp_4 = "Administrador";
hlp_5 = "Un Administrador realiza el trabajo de mantenimiento de una red. En el caso de este router, es la persona que lo configura y efect�a los cambios en los ajustes.";
hlp_6 = "Cliente";
hlp_7 = "Un ordenador de la red que emplea los servicios del router como, por ejemplo, el servidor DHCP autom�tico y el firewall.";
hlp_8 = "DHCP";
hlp_9 = "La funci�n de servidor DHCP facilita en gran medida la tarea de establecer una red asignando direcciones IP a cada ordenador de la red. El servidor DHCP puede ser desconectado si es necesario. Para desactivar el servidor DHCP ser� necesario que usted establezca manualmente una direcci�n IP est�tica en cada ordenador de su red. El grupo de IP es la serie de direcciones IP apartadas para la asignaci�n din�mica a los ordenadores de su red. El valor predeterminado es 2-100 (99 ordenadores) y si desea cambiar este n�mero, puede hacerlo introduciendo una direcci�n IP nueva de inicio y final y haciendo clic en \"Aplicar cambios\".";
hlp_10 = "Nombre de dominio local";
hlp_11 = "Puede establecer un nombre de dominio local (nombre de red) para su red. No es necesario modificar esta configuraci�n a no ser que tenga una necesidad avanzada espec�fica para hacerlo. Puede dar a la red el nombre que quiera como \"MI_RED\".";
hlp_12 = "Conexi�n telef�nica";
hlp_13 = "Una conexi�n que emplea la red telef�nica p�blica";
hlp_14 = "DNS";
hlp_15 = "DNS es el acr�nimo de Servidor de nombres de dominio. Un servidor de nombres de dominio es un servidor situado en Internet que traduce los URL (Enlaces universales de recursos), como www.belkin.com, a direcciones IP. Muchos ISP no precisan que usted introduzca esta informaci�n en el router. Si est� utilizando un tipo de conexi�n con IP est�tica, entonces puede que necesite introducir una direcci�n DNS espec�fica y una direcci�n DNS secundaria para que su conexi�n funcione de forma adecuada. Si su tipo de conexi�n es din�mica o PPPoE, es probable que no sea necesario introducir ninguna direcci�n DNS.";
hlp_16 = "M�dem DSL";
hlp_17 = "DSL significa L�nea de abonados digitales. Un m�dem DSL utiliza las l�neas telef�nicas existentes para transmitir datos a altas velocidades.";
hlp_18 = "IP din�mic";
hlp_19 = "Una direcci�n IP que se obtiene de forma autom�tica de un servidor DHCP.";
hlp_20 = "Ethernet";
hlp_21 = "Un est�ndar para redes de ordenadores. Las redes Ethernet se conectan mediante hubs y cables especiales, y transfieren datos a hasta 10 millones de bits por segundo (Mbps).";
hlp_22 = "Firewall";
hlp_23 = "Una frontera electr�nica que evita el acceso de usuarios no autorizados a determinados archivos u ordenadores de una red.";
hlp_24 = "Firmware";
hlp_25 = "El software almacenado en la memoria. Los programas esenciales que permanecen incluso cuando se apaga el sistema. El firmware es m�s f�cil de modificar que el hardware pero es m�s permanente que el software almacenado en un disco.";
hlp_26 = "Direcci�n IP";
hlp_27 = "La \"Direcci�n IP\" es la direcci�n IP interna del router. Para acceder a la interfaz de configuraci�n avanzada, escriba esta direcci�n IP en la barra de direcciones de su buscador. Esta direcci�n puede ser modificada si es necesario. Para modificar la direcci�n IP, introduzca la nueva direcci�n IP y haga clic \"Aplicar cambios\". La direcci�n IP seleccionada ser� un IP no enrutable. Ejemplos de una IP no enrutable: 192.168.x.x (donde x es una cifra entre el 0 y el 255.) 172.y.x.x (donde x es una cifra entre 16 y 31 y x es una cifra entre 0 y 255) 10.x.x.x (donde x es una cifra entre el 0 y el 255).";
hlp_28 = "ISDN";
hlp_29 = "Red digital de servicios integrados (ISDN). Son las l�neas digitales de telecomunicaci�n que pueden transmitir tanto voz como servicios de red digital hasta 128 K, mucho m�s r�pidas y m�s robustas que los m�dems anal�gicos de alta velocidad. Muchas compa��as de tel�fono ofrecen l�neas ISDN.";
hlp_30 = "ISP";
hlp_31 = "Proveedor de servicios de Internet (ISP) Un ISP es una empresa que proporciona conectividad a Internet para personas individuales o para empresas u organizaciones.";
hlp_32 = "Direcci�n de gateway (pasarela) ISP (consulte la definici�n de ISP)";
hlp_33 = " La Direcci�n de puerta de enlace del ISP es una direcci�n IP para el router de Internet situado en la sede del ISP. Esta direcci�n es requerida �nicamente cuando se emplea un m�dem por cable o DSL. ";
hlp_34 = "LAN";
hlp_35 = "Red de �rea local (LAN). Una LAN es un grupo de ordenadores y dispositivos conectados juntos en una zona relativamente reducida (como una casa o una oficina). La red de su casa se considerada una LAN";
hlp_36 = "Direcci�n MAC";
hlp_37 = " MAC significa Control de acceso a los medios. Una direcci�n MAC es la direcci�n de hardware de un dispositivo conectado a una red";
hlp_38 = "MTU";
hlp_39 = "Unidad de transmisi�n m�xima. Es la unidad de datos m�s grande que puede transmitirse sobre cualquier medio f�sico espec�fico";
hlp_40 = "NAT";
hlp_41 = "Traducci�n de direcciones de red (NAT). Este proceso permite que todos los ordenadores en la red de su casa utilicen una sola direcci�n IP. Utilizando la propiedad NAT de la puerta de enlace para red del router de Belkin, podr� acceder a Internet desde cualquier ordenador de la red de su hogar sin necesidad de adquirir m�s direcciones IP de su ISP.";
hlp_42 = "Puerto";
hlp_43 = "Un canal l�gico que se identifica por su n�mero de puerto exclusivo. Las aplicaciones escuchan los diferentes puertos para ver si existe en ellos informaci�n que pueda estar relacionada con ellas.";
hlp_44 = "Static IP Connection";//<=====Dave=====
hlp_45 = "El tipo de conexi�n de Direcci�n IP est�tica es menos com�n que otros tipos de conexi�n. Si su ISP emplea direccionamiento IP est�tico, necesitar� su Direcci�n IP, M�scara de subred y Direcci�n de puerta de enlace del ISP. Esta informaci�n puede obtenerla de su ISP o en la documentaci�n que le envi� su ISP.";
hlp_46 = "PPPoE (Modo enrutamiento, para varios PC)";
hlp_47 = "La mayor�a de proveedores DSL emplean PPPoE como tipo de conexi�n. Si utiliza un m�dem DSL para conectarse a Internet, su ISP puede utilizar PPPoE para registrarlo en el servicio. Si dispone de una conexi�n a Internet en su casa u oficina peque�a que no requiere m�dem, podr� tambi�n utilizar PPPoE. Su tipo de conexi�n es PPPoE si: 1)Su ISP le proporcion� un nombre de usuario y una contrase�a necesarios para conectarse a Internet. 2)Su ISP le proporcion� un software como WinPOET o Enternet300 que usted emplea para conectarse a Internet. 3)Usted debe hacer doble clic en un icono de escritorio distinto del de su navegador para acceder a Internet. Para configurar el router de forma que utilice PPPoE, introduzca su Nombre de usuario y Contrase�a en los espacios correspondientes.";
hlp_48 = "PPPoA";
hlp_49 = "Point-to-Point Protocol Over ATM. Using the PPP dial-up protocol with ATM as the transport. Used by some DSL providers, IP packets travel from the PC over Ethernet to the DSL modem. The DSL modem adds the PPP protocol to the IP packets and transports them to the carrier's DSLAM via ATM.";//<=====Dave=====
hlp_50 = "Tiempo de inactividad";
hlp_51 = " La funci�n de Desconexi�n se utiliza para desconectar autom�ticamente el router de su ISP cuando no existe actividad durante un determinado periodo de tiempo. Por ejemplo, al colocar una marca junto a esta opci�n e introducir 5 en el campo para los minutos, el router se desconectar� de Internet despu�s de 5 minutos sin actividad en Internet. Esta opci�n deber� utilizarse en el caso de que usted abone sus servicios de Internet por minutos.";
hlp_52 = "PPPoA (Modo Enrutamiento, para varios PC)";
hlp_53 = "Desactivar Compartir Internet (Modo puente, para un solo PC)";
hlp_54 = "Protocolo m�ltiple sobre ATM (Modo enrutamiento, para varios PC)";
hlp_55 = "PPTP";
hlp_56 = "Protocolo de t�nel punto a punto (PPP). Una versi�n del PPP (Protocolo punto a punto) que tiene la capacidad de encapsular paquetes de datos formateados para un protocolo de red en paquetes utilizados por otro protocolo. Esta t�cnica de t�neles permite que los datos TCP/IP se transmitan mediante una red que no es TCP/IP. El PPTP puede ser empleado para unir diferentes redes f�sicas utilizando Internet como intermediario";
hlp_57 = "SNTP";
hlp_58 = "Protocolo horario de red simple (SNTP). Un est�ndar de comunicaci�n que permite la transmisi�n de informaci�n en tiempo real por una red o por Internet";
hlp_59 = "SPI";
hlp_60 = "Inspecci�n de paquetes de datos. SPI es el tipo de seguridad de Internet de nivel corporativo proporcionada por su puerta de enlace de red dom�stica HomeConnect. Utilizando la SPI, la puerta de enlace act�a a modo de \"firewall\", protegiendo su red de los piratas inform�ticos.";
hlp_61 = "IP est�tica ";
hlp_62 = "Una direcci�n IP que es configurada manualmente y nunca cambia";
hlp_63 = "M�scara de subred";
hlp_64 = "�FUNCI�N AVANZADA! No es necesario modificar la m�scara de subred. Es posible modificar la m�scara de subred en caso necesario. �nicamente realice cambios a la m�scara de subred si tiene una raz�n espec�fica para hacerlo";
hlp_65 = "TCP";
hlp_66 = "Protocolo de control de transmisiones (TCP). Es el protocolo de nivel de transporte de Internet m�s com�n. El TCP est� orientado a la conexi�n y al flujo de informaci�n y proporciona una comunicaci�n fiable a trav�s de redes de conmutaci�n de paquetes.";
hlp_67 = "TCP/IP";
hlp_68 = "Protocolo de control de transmisiones a trav�s de protocolo de Internet (TCP/IP). Este es el protocolo est�ndar para la transmisi�n de datos a trav�s de Internet.";
hlp_69 = "UDP";
hlp_70 = "Protocolo de datagramas de usuario (UDP). Protocolo de comunicaciones del nivel de red de Internet, nivel de transporte y nivel de sesi�n, que hace posible enviar un mensaje datagrama desde un ordenador hasta una aplicaci�n que se est� ejecutando en otro ordenador. A diferencia del TCP, el UDP carece de conexi�n y no garantiza una comunicaci�n fiable; la propia aplicaci�n debe procesar todo tipo de errores y controlar que el env�o sea fiable.";
hlp_71 = "WAN";
hlp_72 = "Red de �rea amplia (WAN). Una red que conecta ordenadores situados en �reas geogr�ficas separadas, (es decir, diferentes edificios, ciudades, pa�ses). Internet es una red de �rea amplia.";
hlp_73 = "Direcci�n IP de WAN";
hlp_74 = "La direcci�n IP asignada al router por el ISP.";
hlp_75 = "Canal y SSID";
hlp_76 = "Para modificar el canal de funcionamiento del router, seleccione el canal deseado del men� desplegable y seleccione su canal. Haga clic en \"Aplicar cambios\" para guardar los ajustes. Tambi�n puede cambiar el SSID. El SSID es el equivalente al nombre de la red inal�mbrica. Puede llamar al SSID como desee. Si existen otras redes inal�mbricas en su zona, deber� dar a su red inal�mbrica un nombre exclusivo. Haga clic dentro del cuadro SSID y escriba un nombre nuevo. Haga clic en \"Aplicar cambios\" para realizar el cambio.";
hlp_77 = "Utilizaci�n del conmutador del modo inal�mbrico";
hlp_78 = "1) 802.11g &amp; 802.11b : Setting the Router to this mode will let 802.11g-, and 802.11b-compliant devices to join the network. 2) Off : This mode will turn OFF the Router's access point, so no wireless devices can join the network. Turning off the wireless function of your Router is a great way to secure your network when you are away from home for a long period of time, or don't want to use the wireless feature of the Router at a certain time.";//<=====Dave=====
hlp_79 = "Emitir SSID ";
hlp_80 = "Una propiedad de la interconexi�n en red inal�mbrica es que proporciona al adaptador para red inal�mbrica de un ordenador la capacidad de buscar una red inal�mbrica autom�ticamente. Esto se efect�a estableciendo el ajuste SSID de la tarjeta en la opci�n CUALQUIERA Su router puede boquear esta b�squeda aleatoria de redes. Si desactiva la funci�n la �nica manera en la que un ordenador puede incorporarse a la red es estableciendo el SSID del ordenador con el nombre espec�fico de la red (como WLAN). Aseg�rese de que conoce su SSID (nombre de la red) antes de activar esta funci�n. Es posible lograr que su red inal�mbrica sea pr�cticamente invisible. Al desactivar la difusi�n del SSID, su red no aparecer� en ning�n estudio del sitio. La funcionalidad de estudio del sitio est� hoy disponible en muchos de los adaptadores de red inal�mbricos del mercado. Buscar� en el aire cualquier red disponible y permitir� que el ordenador seleccione la red desde el estudio del sitio. Si desactiva la SSID contribuir� a aumentar la seguridad.";
hlp_81 = "Utilizar como punto de acceso";
hlp_82 = " Cuando emplee el router como punto de acceso, deber� especificar una direcci�n IP para el punto de acceso. Esta direcci�n IP deber� encontrarse dentro de la misma serie que la red a la que vaya a conectarlo. Para acceder de nuevo a la interfaz de configuraci�n avanzada del router, introduzca la direcci�n IP en el navegador de Internet e inicie una sesi�n.";
hlp_83 = "Inal�mbrico Control de direcciones MAC";
hlp_84 = "El filtro de direcciones MAC es una potente caracter�stica de seguridad que le permite especificar qu� ordenadores est�n permitidos en la red. Nota: Esta lista solo se aplica a los ordenadores inal�mbricos. Cualquier ordenador que trate de acceder a la red y no est� especificado en la lista de filtrado no obtendr� permiso para acceder. Cuando active esta propiedad, deber� introducir la direcci�n MAC de cada cliente (ordenador) de su red para permitir el acceso a la misma de cada uno de ellos. La caracter�stica \"Bloquear\" le permite encender y apagar el acceso a la red f�cilmente para cualquier ordenador, sin tener que a�adir y eliminar la direcci�n MAC del ordenador de la lista.<Br>Configurar una lista de acceso permitido <Br>1.Seleccione el bot�n \"Permitir\" (1) para empezar a configurar una lista de ordenadores con acceso para conectar a la red inal�mbrica.2. A continuaci�n, en el campo \"Direcci�n MAC\", que est� vac�o (3), introduzca la direcci�n MAC del ordenador inal�mbrico al que desea conceder acceso a la red inal�mbrica, despu�s haga clic en \"A�adir\" (4).3. Repita el proceso hasta que haya introducido todos los ordenadores que desee a�adir.4. Haga clic en \"Aplicar cambios\" (5) para finalizar.<br><br>Configurar una lista de acceso denegado La lista \"Denegar acceso\" le permite especificar a qu� ordenadores quiere DENEGAR el acceso a la red. Se denegar� el acceso a la red inal�mbrica a todos los ordenadores que se encuentren en la lista. El resto podr� acceder.1.Seleccione el bot�n \"Denegar\" (2) para empezar a configurar una lista de ordenadores con acceso denegado a la red inal�mbrica.2. A continuaci�n, en el campo \"Direcci�n MAC\", que est� vac�o (3), introduzca la direcci�n MAC del ordenador inal�mbrico al que desea denegar el acceso a la red inal�mbrica, despu�s haga clic en \"A�adir\" (4).3. Repita el proceso hasta que haya introducido todos los ordenadores a los que desee denegar el acceso.4. Haga clic en \"Aplicar cambios\" (5) para finalizar.";
hlp_85 = "Modo RCN";
hlp_86 = "Existen dos modos de reconocimiento (RCN) que pueden utilizarse para obtener el mejor rendimiento multimedia en su red: RCN de r�fagas y RCN inmediato. El RCN inmediato es el ajuste predeterminado (de f�brica) y se recomienda para el funcionamiento normal de la red. El cambio del modo RCN de RCN inmediato a RCN de r�fagas puede afectar a la tasa de transferencia de largo alcance. Utilice el modo RCN inmediato si lo m�s importante para usted es el rendimiento de largo alcance de su red. El modo RCN de r�fagas reducir� el tiempo de procesamiento y no se reconocer�n todos los paquetes que se env�an a trav�s de la red. Cuando existe muy buena conexi�n entre el router y el cliente, el RCN de r�fagas puede lograr un aumento de la tasa de transferencia. Si una aplicaci�n, como cuando se transmiten archivos de v�deo de alta definici�n, exige el m�ximo ancho de banda, utilice el modo RCN de r�fagas. Recuerde que el rendimiento de largo alcance puede verse afectado cuando se utiliza el modo RCN de r�fagas.";

hlp_87 = "Configuraci�n de QoS (Calidad de servicio)";
hlp_88 = "QoS establece la prioridad entre los datos importantes de su red como el contenido multimedia y de Voz por IP (VoIP) para que otros datos que se est�n enviando por la red no interfieran. Basada en 802.11e, esta funci�n se puede activar o desactivar y puede elegir el modo de reconocimiento que quiera utilizar. Si quiere transmitir contenido multimedia o utilizar VoIP en su red, la funci�n QoS debe activarse. ";
hlp_89 = "Encriptaci�n";
hlp_90 = "Using Encryption can help secure your wireless network. Only one type of security may be selected at a time. Therefore the customer must select a mode that is supported on all network devices on the wireless network. This Belkin product has 5 possible Security settings: 1) Disabled. No encryption is enabled in this mode. Open networks where all users are welcome sometimes prefer to not enable encryption. 2) WPA PSK - Home (no server). WPA (Wireless protected Access) PSK is a recent standards-based security technique where each packet of information is encrypted with a different code, or key. Since the key is constantly changing, WPA is very secure. There are two types of WPA, WPA-PSK (Pre-Shared Key), and WPA-Radius Server. Obviously the difference being that one requires a server and one does not. WPA-PSK is for home and small business users who do not have a server. The PSK encryption key is generated automatically from a string of characters or Pass Phrase. Obviously the biggest security risk in WPA PSK is if someone finds out your Pass Phrase. a. TKIP verses AES. WPA setup requires the user to select whether to encrypt using TKIP or AES. The WPA standard specifies TKIP, so that is the default. Additionally TKIP should provide better compatibility between wireless products from different vendors since many wireless products will never be upgraded to AES. AES is a new encryption technique based on the un-ratified 802.11i standard. New WPA standards are being considered using AES. Although AES is not as popular, some users may prefer to use this technique. Either way, all networks devices must use the same technique. b. Pre-Shared Key. Enter any word or phrase up to 40 characters. The same PSK must also be used for every other wireless network device on the network. Watch out for upper and lower case differences (\"n\" is different than \"N\".) Remember, the easiest way to break your security is for someone to guess your PSK. 3) 128-bit WEP. Until recently, 128-bit WEP (Wired Equivalent Privacy) was the standard for wireless encryption. If not all of your wireless devices support WPA, 128bit WEP still offers very good security option. It will require you to enter hex numbers, or you can generate them automatically. 4) 64-bit WEP. Belkin only recommends 64-bit mode on networks where some devices do not support either WPA or 128bit WEP. 5) WPA - Radius Server. (This mode is accessed from the Advanced Button). WPA server is only for networks using a Radius Server. All parameter for this mode should be obtained from the administrator of your Radius Server. Unlike WPA PSK, WPA server passes the key from the server to the clients instead of generating it automatically.";//<=====Dave=====
hlp_91 = "Servidores virtuales";
hlp_92 = "Esta funci�n le permitir� enrutar llamadas externas (Internet) para servicios como servidor web (puerto 80), servidor FTP (puerto 21) y otras aplicaciones a trav�s de su router hasta su red interna. Gracias a que sus ordenadores internos est�n protegidos por un firewall, las m�quinas fuera de su red (a trav�s de Internet) no pueden acceder a ellos, ya que no pueden ser \"Aplicar cambios\". Si necesita configurar la funci�n de servidor virtual para una aplicaci�n espec�fica, necesitar� ponerse en contacto con el proveedor de la aplicaci�n para conocer la configuraci�n de puertos que necesita. Para introducir manualmente los ajustes, escriba la direcci�n IP en el espacio correspondiente para la m�quina interna, el tipo de puerto (TCP � UDP), seleccione los puertos LAN que se requieren para pasar, seleccione Activar y haga clic en Establecer S�lo puede pasar un puerto por cada direcci�n IP interna. Abrir puertos en su firewall puede significar un riesgo para la seguridad de la red. Puede activar y desactivar los ajustes con gran rapidez. Se recomienda desactivar las configuraciones cuando no est� utilizando una aplicaci�n espec�fica.";
hlp_93 = "Uso de DNS din�mico";
hlp_94 = " El servicio DNS din�mico le permite otorgar a una direcci�n IP din�mica uno de los muchos nombres de host est�tico que ofrece la lista de dominios de DynDNS.org; de esta manera, podr� acceder a sus ordenadores en red de manera m�s sencilla desde varias ubicaciones en Internet. DynDNS.org ofrece a la comunidad de Internet este servicio para hasta cinco nombres de host en forma gratuita.El servicio DNSSM din�mico es ideal para una p�gina web personal, un servidor de archivos o para facilitar el acceso a su PC del hogar y los archivos guardados cuando est� en el trabajo. Mediante la utilizaci�n de este servicio puede estar seguro de que el nombre de host siempre conducir� a su direcci�n IP, independientemente de cu�ntas veces su ISP la cambie. Cuando su direcci�n IP cambia, sus amigos y socios pueden ubicarlo siempre visitando sunombre.dyndns.org.<br><br>Puede registrarse de manera gratuita para obtener su nombre de host DNS din�mico en http://www.dyndns.org.<br><br><b>Configuraci�n del cliente de actualizaci�n para DNS din�mico del router</b><Br><br>Puede registrarse de manera gratuita para obtener su nombre de host DNS din�mico en http://www.dyndns.org.<b>Configuraci�n del cliente de actualizaci�n para DNS din�mico del router</b><Br><br>Debe registrarse en el servicio gratuito de actualizaci�n de DynDNS.org antes de poder utilizar esta funci�n. Una vez que se haya registrado, siga las instrucciones que se indican a continuaci�n.<br>1.Introduzca su nombre de usuario de DynDNS.org en el campo \"Nombre de usuario\" (1).<br>2.Introduzca su contrase�a de DynDNS.org en el campo \"Contrase�a\" (2).<br>3.Introduzca el nombre de dominio de DynDNS.org que ha configurado en DynDNS.org en el campo \"Nombre de dominio\" (3).<br>4.Haga clic en \"Actualizar DNS din�mico\" para actualizar su direcci�n IP.<br>Si la direcci�n IP din�mica que le ha asignado su ISP cambia, el Router actualizar� autom�ticamente los servidores de DynDNS.org con la direcci�n IP nueva. Tambi�n puede hacer esto de manera manual pulsando el bot�n \"Actualizar DNS din�mico\" (4)."; 
hlp_95 = "Filtros para IP de clientes";
hlp_96 = " El router puede ser configurado para restringir el acceso a Internet, al correo electr�nico o a otros servicios de red en determinados d�as y horas. Puede establecerse una restricci�n para un ordenador, unnivel de ordenadores o varios ordenadores. Para restringir el acceso a Internet a un �nico ordenador, introduzca la direcci�n IP del ordenador al que desea restringir el acceso en los campos de IP. A continuaci�n, introduzca 80 y 80 en los campos de Puerto. Seleccione TCP. Seleccione Bloquear. Tambi�n puede seleccionar Siempre para bloquear el acceso de forma permanente. Seleccione el d�a de comienzo en la parte superior, la hora de comienzo en la parte superior, el d�a de finalizaci�n en la parte inferior y la hora de finalizaci�n en la parte inferior. Haga clic en \"Aplicar cambios\". A partir de ahora, el ordenador con la direcci�n IP que ha especificado tendr� bloqueado el acceso en los momentos que ha fijado. Nota: aseg�rese de haber seleccionado la zona horaria correcta en Utilidades> Ajustes del sistema> Zona horaria.";
hlp_97 = "Filtrado de direcciones MAC";
hlp_98 = "The MAC Address Filter is a powerful security feature that allows you to specify which computers are allowed on the network. Any computer attempting to access the network that is not specified in the filter list will be denied access. When you enable this feature, you must enter the MAC address of each client on your network to allow network access to each or copy the MAC address by selecting the name of the computer from the \"DHCP Client List\". To enable this feature, select \"Enable\". Next, click \"Apply Changes\" to save the settings.";//<=====Dave=====
hlp_99 = "DMZ";
hlp_100 = "If you have a client PC that cannot run an Internet application properly from behind the firewall, you can open the client up to unrestricted two-way Internet access. This may be necessary if the NAT feature is causing problems with an application such as a game or video conferencing application. Use this feature on a temporary basis. The computer in the DMZ is not protected from hacker attacks. To put a computer in the DMZ, enter the last digits of its LAN IP address in the Static IP field and click \"Apply Changes\" for the change to take effect.";//<=====Dave=====
hlp_101 = "Contrase�a de administrador";
hlp_102 = " El router que se le ha suministrado viene SIN contrase�a. Si desea a�adir una contrase�a para aumentar la seguridad, puede establecerla aqu�. Guarde su contrase�a en un lugar seguro, ya que la necesitar� si tiene que acceder al router en el futuro. Tambi�n se recomienda que establezca una contrase�a si va a utilizar la caracter�stica de gesti�n a distancia de este router. La opci�n de tiempo l�mite de inactividad le permite establecer el periodo de tiempo que puede estar registrado en la interfaz de configuraci�n avanzada del router. El temporizador se inicia cuando deja de detectarse actividad. Por ejemplo, usted ha efectuado algunos cambios en la interfaz de configuraci�n avanzada, y despu�s deja su ordenador solo sin hacer clic en \"Cerrar sesi�n\". Suponiendo que el tiempo l�mite de inactividad est� establecido en 10 minutos, la sesi�n finalizar� 10 minutos despu�s de que se haya marchado. Puede acceder al router de nuevo si desea realizar m�s cambios. La opci�n de tiempo l�mite de inactividad se debe a motivos de seguridad y est� establecida de forma predeterminada en 10 minutos. Tenga en cuenta que no se puede acceder a la interfaz de configuraci�n avanzada del router con m�s de un ordenador al mismo tiempo. ";
hlp_103 = "Activaci�n de NAT";
hlp_104 = " Antes de activar esta funci�n, ASEG�RESE DE HABER ESTABLECIDO LA CONTRASE�A DEL ADMINISTRADOR. La Traducci�n de direcciones de red (NAT) es el m�todo con el que el router comparte la �nica direcci�n IP asignada por su ISP con el resto de ordenadores de la red. Solo los usuarios avanzados pueden utilizar esta funci�n. Esta funci�n deber� ser empleada �nicamente si su ISP le asigna varias direcciones IP o si necesita desactivar NAT para una configuraci�n avanzada del sistema. Si dispone de una sola direcci�n IP y desactiva NAT, los ordenadores de su red no podr�n acceder a Internet. Es posible asimismo que sucedan otros problemas. Al desactivar NAT se desactivar�n las funciones de su firewall.";
hlp_105 = "UPnP";
hlp_106 = " UPnP (Plug-and-play universal) es una tecnolog�a que ofrece un funcionamiento perfecto de las opciones de mensajes de voz mensajes de v�deo, juegos y otras aplicaciones compatibles con UPnP. Algunas aplicaciones requieren que se configure el firewall del router de forma espec�fica para que puedan funcionar correctamente. Normalmente se requiere abrir los puertos TCP y UDP y en algunos casos establecer puertos de activaci�n. Una aplicaci�n compatible con UPnP tiene la capacidad de comunicarse con el router, b�sicamente \"indicando\" al router de qu� forma necesita que se configure el firewall. El router que se le ha suministrado viene con la funci�n UPnP desactivada. Si est� utilizando cualquier aplicaci�n compatible con UPnP, y desea aprovechar las ventajas de las funcionalidades UPnP, puede activar esta opci�n UPnP. Simplemente seleccione \"Activar\" en la secci�n \"Activar UpnP\" de la p�gina de Utilidades. Haga clic en \"Aplicar cambios\" para guardar el cambio.";
hlp_107 = "Notificaci�n autom�tica de actualizaci�n del firmware";
hlp_108 = " El router tiene la capacidad incorporada de buscar autom�ticamente una nueva versi�n del firmware y de informarle de que existe una nueva versi�n disponible. Cuando acceda a la interfaz avanzada del router, este efectuar� una b�squeda para comprobar si existe una nueva versi�n del firmware disponible. Si existe un nuevo firmware disponible, aparecer� una notificaci�n. Puede optar por descargar la nueva versi�n o por ignorar el mensaje. El router se suministra con esta la funci�n desactivada. Si desea activarla, seleccione \"Activar\" y haga clic en \"Aplicar cambios\". ";
hlp_109 = "Gesti�n a distancia";
hlp_110 = " La gesti�n a distancia le permite efectuar cambios en los ajustes de su router desde cualquier parte a trav�s de Internet. Existen dos m�todos de gestionar el router a distancia. El primer m�todo consiste en permitir el acceso al router desde cualquier parte en Internet seleccionando \"Cualquier direcci�n IP puede gestionar el router a distancia\". Al introducir su direcci�n IP de WAN desde cualquier ordenador en Internet, aparecer� una ventana de acceso en la que deber� introducir la contrase�a de su router. El segundo m�todo consiste en permitir la gesti�n a distancia del router �nicamente a una direcci�n IP espec�fica. Este m�todo es m�s seguro, pero menos c�modo. Para utilizar este m�todo, introduzca la direcci�n IP desde la que vaya a acceder al al router en el espacio previsto y seleccione \"Solo esta direcci�n IP puede gestionar el router a distancia\". Antes de activar esta funci�n, se RECOMIENDA ENCARECIDAMENTE que establezca su contrase�a de administrador. Si deja la contrase�a vac�a, dejar� expuesto su router a posibles intrusiones.";
hlp_111 = "WLAN";
hlp_112 = "Red de �rea local inal�mbrica (WLAN). Una red de �rea local que conecta ordenadores cercanos a trav�s de radiotransmisi�n (como 802.11b)";
hlp_113 = "BLOQUEAR PING ICMP";
hlp_114 = " Los piratas inform�ticos utilizan lo que se conoce como \"pinging\" (revisar actividad) para encontrar v�ctimas potenciales en Internet. Al revisar la actividad de una direcci�n IP espec�fica y recibir una respuesta de la direcci�n IP el pirata inform�tico puede decidirse a comprobar si existe algo de inter�s. El Router puede ser configurado de forma que no responda a los intentos de ping ICMP provenientes del exterior. Esto eleva el nivel de seguridad de su router. Para desactivar la respuesta al ping, seleccione \"Bloquear ping ICMP\" y haga clic en \"Aplicar cambios\". El router no responder� a ning�n ping ICMP. ";
hlp_115 = "Modo protegido ";
hlp_116 = " NOTA: En la mayor�a de las situaciones, el mejor rendimiento se alcanza con el modo protegido DESACTIVADO. Si est� trabajando en un entorno de tr�fico 802.11b INTENSO o con interferencias, el mejor rendimiento se conseguir� con el modo protegido ACTIVADO. ";
hlp_117 = "Hora y Zona horaria";
hlp_118 = "El router mantiene la hora conect�ndose a un servidor SNTP (Protocolo horario de red simple). Esto permite al router sincronizar el reloj del sistema con la red global de Internet. Elreloj sincronizado en el router se utiliza para grabar el registro de seguridad y controlar el filtro de clientes. Seleccione la zona horaria en la que reside. Si reside en una zona en la que se realiza el cambio de hora seg�n el horario de verano, coloque una marca en el recuadro junto a \"Activar hora seg�n el horario de verano\". Puede que el reloj del sistema no se actualice de forma inmediata. Deje pasar al menos 15 minutos para que el router se ponga en contacto con los servidores de hora en Internet y obtenga una respuesta. No podr� cambiar la hora del reloj usted mismo.";
hlp_119 = "Wi-Fi Multimedia (WMM)";
hlp_120 = "This feature enables the Quality of Service (QoS) function that is used for multimedia applications, such as Voice-over-IP (VoIP) and video. This allows the network packets of the multimedia application to have priority over regular data network packets, allowing multimedia applications to run smoother and with fewer errors.";
hlp_121 = "WMM No-Acknowledgement";
hlp_122 = "No-Acknowledgement refers to the acknowledge policy used at the MAC level. Enabling no-acknowledgement can result in more efficient throughput but higher error rates in a noisy Radio Frequency (RF) environment.";

// --Restore factory defaults Successfully --
utfrds_1 = "Restablecer configuraci�n predeterminada de f�brica Correcto";
utfrds_2 = "El proceso de restablecimiento ha finalizado cuando la luz de encendido deja de parpadear.";

// -- Reset Successfully --
utrs_1 ="Reinicio correcto";
utrs_2 ="El proceso de reinicio ha finalizado cuando la luz de encendido deja de parpadear.";
utrs_3 ="El router se est� reiniciando";
utrs_4 ="segundos restantes.";


// -- Restored Settings Successfully --
utrss_1 ="Ajustes restablecidos correctamente";
utrss_2 ="El proceso de ajustes restablecidos ha finalizado cuando la luz de encendido deja de parpadear.";

// -- Apply ?-
apply_1 = "Aplicando cambios";
apply_2 = "Aplicando cambios. Por favor, espere.......";


}
