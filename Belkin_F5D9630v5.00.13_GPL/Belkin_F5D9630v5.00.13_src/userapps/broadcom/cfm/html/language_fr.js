function dw(message)
{
	document.write(message);	
}

function assign_var()
{
// -------------- Menu ----------------
menu_1 = "Accueil";
menu_2 = "Aide";
menu_3 = "Connexion";
menu_4 = "D�connexion";
menu_5 = "Statut d'Internet";
menu_6 = "Connect�";
menu_7 = "Pas de connexion";
menu_8 = "Mise en place du r�seau local (LAN)";
menu_9 = "Param�tres de r�seau local";
menu_10 = "Liste de Clients DHCP";
menu_11 = "Internet WAN";
menu_12 = "Type de Connexion";
menu_13 = "DNS";
menu_14 = "Sans Fil";
menu_15 = "Canal et SSID";
menu_16 = "S�curit�";
menu_17 = "Utilisation comme Point d'acc�s";
menu_18 = "Contr�le d'adresse MAC";
menu_19 = "Pare-feu";
menu_20 = "Serveurs Virtuels";
menu_21 = "Filtres d'IP des clients";
menu_22 = "Zone DMZ";
menu_23 = "DDNS";
menu_24 = "Blocage du ping WAN";
menu_25 = "Journal de s�curit�";
menu_26 = "Utilitaires";
menu_27 = "Red�marrer le Routeur";
menu_28 = "R�tablir les param�tres par d�faut";
menu_29 = "Sauvegarder les param�tres";
menu_30 = "R�tablir les param�tres pr�c�dents";
menu_31 = "Mise � jour du micrologiciel";
menu_32 = "Param�tres du syst�me";
menu_33 = "Wi-Fi Protected Setup";
menu_34 = "Wireless Bridge";
		
// -------------- Home ----------------
home_1 = "Statut";	
home_2 = "Vous devez ouvrir une session avant d'apporter des modifications.";
home_3 = "Connexion";
home_4 = "D�connexion";
home_5 = "Information sur la version";
home_6 = "Param�tres de r�seau local";
home_7 = "Version du microprogramme";
home_8 = "LAN/WLAN MAC";
home_9 = "Version du code d'amorce";
home_10 = "Adresse IP";
home_11 = "Mat�riel  ";
home_12 = "Masque de Sous-R�seau";
home_13 = "Serveur DHCP";
home_14 = "Param�tres Internet";
home_15 = "Caract�ristiques";
home_16 = "Adresse MAC du WAN ";
home_17 = "NAT";
home_18 = "IP WAN";
home_19 = "Fonction sans fil";
home_20 = "Passerelle par d�faut";	
home_21 = "SSID";	
home_22 = "Serveur DNS principal";
home_23 = "S�curit�";
home_24 = "D�sactiv�";
home_25 = "WEP";
home_26 = "WPA (avec serveur radius)";
home_27 = "WPA-PSK(sans serveur)";
home_28 = "Serveur DNS secondaire";
home_29 = "ADSL";
home_30 = "Language";//<=====Dave=====
home_31 = "Type";
home_32 = "Current Langugae";//<=====Dave=====
home_33 = "Statut";
home_34 = "Available Langugaes";//<=====Dave=====
home_35 = "Aucune liaison";
home_36 = "Voie descendante";
home_37 = "Voie ascendante";
home_38 = "D�bit de donn�es";
home_39 = "Marge d'immunit� au bruit";
home_40 = "Puissance en sortie";
home_41 = "Att�nuation";
home_42 = "Accueil Configuration";
home_43 = "Activ�";
home_44 = "D�sactiv�";
home_45 = "English";
home_46 = "Deutsch";
home_47 = "Fran&ccedil;ais";
home_48 = "Espa�ol";
home_49 = "Param�tres de r�seau local sans fil";
home_50 = "Adresse MAC du r�seau sans fil local";
home_51 = "Heure";
home_52 = "WPS";

// -------------- Login ----------------
lgn_1 = "Connexion";
lgn_2 = "Avant d'apporter des modifications, vous devez vous connecter avec votre mot de passe. Si vous n'avez pas encore cr�� un mot de passe personnalis�, laissez ce champ vide et cliquez sur ��Envoyer��.";
lgn_3 = "Mot de passe";
lgn_4 = "Par d�faut ";
lgn_5 = "Effacer";
lgn_6 = "Envoyer";

// -------------- LAN Main ----------------
lm_1 = "LAN";
lm_2 = "LAN";
lm_3 = "Le serveur DHCP attribue automatiquement des adresses IP � chaque ordinateur afin de simplifier la configuration de la mise en r�seau. Les param�tres par d�faut du serveur DHCP sont compatibles avec la plupart des applications. Vous pouvez apporter des modifications aux param�tres si vous le d�sirez.";
lm_4 = "Les modifications que vous pouvez apporter sont�:";
lm_5 = "Modifier l'adresse IP interne du routeur. Valeur par d�faut = 192.168.2.1";
lm_6 = "Modifier le masque de sous-r�seau. Le masque par d�faut est 255.255.255.0";
lm_7 = "Activer/D�sactiver la fonction de serveur DHCP. Par D�faut= ON (Activ�)";
lm_8 = "Sp�cifiez l'adresse de d�part et de fin de la R�serve d'Adresses IP Par d�faut = D�part�: 2 / Fin�: 100";
lm_9 = "Entrer la dur�e d'autorisation de l'adresse IP Par d�faut = Permanent";
lm_10 = "Entrez un Nom de Domaine local. Par d�faut = Permanent";
lm_11 = "Pour apporter des modifications, cliquez sur ��Param�tres du R�seau local�� sur l'onglet LAN, situ� � la gauche.";
lm_12 = "Le Routeur vous fournira aussi une liste de tous les clients reli�s au r�seau. Pour visualiser la liste, cliquez ��Liste de Clients DHCP�� � l'onglet LAN, � gauche.";

// -------------- LAN Settings ----------------
ls_1 = "LAN";
ls_2 = "Param�tres de r�seau local";
ls_3 = "Vous pouvez ici apporter des modifications au r�seau local (LAN). Pour que les modifications soient prises en compte, vous devez appuyer sur le bouton ��Enregistrer les Modifications�� au bas de l'�cran.";
ls_4 = "Adresse IP";
ls_5 = "Plus d'infos";
ls_6 = "Masque de Sous-R�seau";
ls_7 = "Serveur DHCP ";
ls_8 = "Activ�";
ls_9 = "�teint";
ls_10 = "La fonction de serveur DHCP permet la mise en place d'un r�seau en toute simplicit�, en attribuant une adresse IP � chacun des ordinateurs du r�seau. Il n'est pas n�cessaire d'apporter des modifications ici.";
ls_11 = "Adresse de d�part de la R�serve d'Adresses IP ";
ls_12 = "Adresse de fin de la R�serve d'Adresses IP ";
ls_13 = "Dur�e d'autorisation";
ls_14 = "Une heure";
ls_15 = "Deux heures";
ls_16 = "Demi-journ�e";
ls_17 = "Un jour";
ls_18 = "Deux jours";
ls_19 = "Une semaine";
ls_20 = "Deux semaines";
ls_21 = "Toujours";
ls_22 = "La dur�e pendant laquelle le serveur DHCP r�servera l'adresse IP pour chaque ordinateur.";
ls_23 = "Nom de domaine local";
ls_24 = "optionnel";
ls_25 = "Fonction qui vous permet d'attribuer un nom � votre r�seau.";
ls_26 = "Effacer les modifications";
ls_27 = "Enregistrer les modifications";
ls_28 = "L'adresse IP choisie doit �tre une adresse IP non-acheminable.  192.168.x.x (o� x est un nombre compris entre 0 et 255.) 10.x.x.x (o� x est un nombre compris entre 0 et 255) 172.y.x.x (o� y est un nombre compris entre 16 et 31, et x est un chiffre est compris entre 0 et 255.)";
ls_29 = "Vous n'avez pas entr� les num�ros ou certains num�ros entr�s ne sont pas valides. Les nombres contenus dans les zones de saisie doivent �tre compris entre 0 et 255.";
ls_30 = "Les nombres du masque de sous-r�seau que vous avez entr�s sont incorrects.";
ls_31 = "L'adresse IP LAN ne peut pas figurer dans la r�serve d'adresses DHCP.";
ls_32 = "L'IP de fin doit �tre sup�rieur � l'IP de d�part.";
ls_33 = "Nom du domaine local non valide";
ls_34 = "Souhaitez-vous vraiment changer l'adresse IP du r�seau local ?";
ls_35 = "Veuillez modifier manuellement la zone de saisie Adresse dans la barre d'�tat de votre navigateur et indiquer la nouvelle adresse LAN";
ls_36 = "Le Routeur sans fil red�marre. Si vous faites cette modification � partir d'un ordinateur sans fil, celui-ci peut �tre d�connect� du Routeur pendant un court laps de temps.";
ls_37 = "L'IP entr�e n'est pas valide";

// -------------- LAN DHCP ----------------
ld_1 = "LAN";
ld_2 = "DHCP";
ld_3 = "Liste de Clients DHCP";
ld_4 = "Cette page montre l'adresse IP, le Nom d'H�te et l'adresse MAC de chaque ordinateur reli� � votre r�seau. Si vous n'avez pas sp�cifi� de nom d'h�te pour l'ordinateur, le champ Nom d'H�te sera vide. Pour mettre � jour la liste, cliquez sur Rafra�chir.";
ld_5 = "Adresse IP";
ld_6 = "Nom d'h�te";
ld_7 = "Adresse MAC";
ld_8 = "Actualiser";

// -------------- WAN Main ----------------
wm_1 = "Internet WAN";
wm_2 = "WAN";
wm_3 = "Vous pouvez configurer votre Routeur selon les param�tres de votre FAI � l'onglet Internet WAN. Le Routeur peut pratiquement se connecter � tous les syst�mes de FAI, si bien s�r vous avez configur� votre Routeur avec les param�tres appropri�s � votre type de connexion. Pour configurer votre Routeur selon les param�tres de votre FAI, cliquez sur Type de Connexion � l'onglet Internet WAN, � la gauche de l'�cran.";
wm_4 = "Types de Connexions prises en charge:";
wm_5 = "PPPoE";
wm_6 = "PPPoA";
wm_7 = "Dynamic/Fixed IP (1483 Bridge)";//<=====Dave=====
wm_8 = "IP fixe ";
wm_9 = "Modem seulement (D�sactivation du partage de l'Internet)";

// -------------- WAN Connection ----------------
wc_1 = "WAN";
wc_2 = "Type de Connexion";
wc_3 = "S�lectionnez votre type de connexion�:";
wc_4 = "PPPoE";
wc_5 = "PPPoA";
wc_6 = "Dynamic/Fixed IP (1483 Bridge)";//<=====Dave=====
wc_7 = "IP fixe (IPoA)";
wc_8 = "Modem seulement (D�sactivation du partage de l'Internet)";
wc_9 = "Suivant";

// -------------- WAN DNS ----------------
wd_1 = "WAN";
wd_2 = "DNS";
wd_3 = "Si votre FAI vous a attribu� une adresse DNS sp�cifique, entrez l'adresse dans cette fen�tre et cliquez sur ��Enregistrer les Modifications��. ";
wd_4 = "Automatiquement du FAI";
wd_5 = "Adresse DNS";
wd_6 = "Adresse DNS Secondaire ";
wd_7 = "DNS = serveur de nom de domaine. Un Serveur de Nom de Domaine est un serveur que l'on retrouve sur l'Internet, et qui traduit les URL (Universal Resource Links) telles que www.belkin.com en adresses IP.";
wd_8 = "Plus d'infos";
wd_9 = "Effacer les modifications";
wd_10 = "Enregistrer les modifications";
wd_11 = "Adresse IP incorrecte. Le dernier num�ro ne peut �tre ni 0 ni 255.";

// -------------- WAN Connection PPPoE ----------------
wcp_1 = "PPPoE / PPPoA";
wcp_2 = "PPPoE";
wcp_3 = "PPPoA";
wcp_4 = " Pour entrez vos param�tres PPPoA, entrez les informations ci-dessous et cliquez sur \"Enregistrer les Modifications\" ";
wcp_5 = " Pour entrez vos param�tres PPPoE, entrez les informations ci-dessous et cliquez sur \"Enregistrer les Modifications\" ";
wcp_6 = "Nom d'utilisateur";
wcp_7 = "Mot de passe";
wcp_8 = "Nouvelle saisie du mot de passe";
wcp_9 = "Nom de service";
wcp_10 = "VPI / VCI";
wcp_11 = "Encapsulation";
wcp_12 = "LLC";
wcp_13 = "VC/MUX";
wcp_14 = "MTU";
wcp_15 = "N'apportez aucun changement aux param�tres de MTU, � moins que votre FAI ne vous ait fourni un param�tre diff�rent de 1432.";
wcp_16 = "D�connecter apr�s ";
wcp_17 = "minutes d'inactivit�.";
wcp_18 = "Utiliserl'adresse IP fixe";
wcp_19 = "Veuillez entrer votre nom d'utilisateur";
wcp_20 = "Veuillez entrer votre mot de passe";
wcp_21 = "The password you entered do not match. Please enter your password and re-type the same password.";//<=====Dave=====

// -------------- WAN Connection Dynamic/Fixed IP  ----------------
wcd_1 = "Dynamic/Fixed IP (1483 Bridge)";//<=====Dave=====
wcd_2 = " L'adresse IP WAN est un adresse IP non valide.";
wcd_3 = " Le masque de sous-r�seau WAN est un adresse IP non valide.";
wcd_4 = " La Route par d�faut est un adresse IP non valide.";
wcd_5 = "Cliquez ici pour entrer vos param�tres de DNS.";
wcd_6 = " Utiliser la route fixe par d�faut:";
wcd_7 = "Pour configurer vos param�tres d'adressage IP dynamique, entrez les informations de connexion ci-dessous et cliquez sur ��Enregistrer les Modifications��.";
wcd_8 = "IP assigned by ISP";//<=====Dave=====
wcd_9 = "Oui";
wcd_10 = "No";//<=====Dave=====

// -------------- WAN Connection Static IP  ----------------
wcs_1 = "IP fixe (IPoA)";
wcs_2 = "Aucune s�lection pour la passerelle par d�faut.";
wcs_3 = "Veuillez entrer/valider vos param�tres d'adresse DNS � l'�cran suivant.";
wcs_4 = "Pour configurer vos param�tres d'adressage IP statique, entrez les informations de connexion ci-dessous et cliquez sur ��Enregistrer les Modifications��. ";
wcs_5 = "Gateway IP Address";//<=====Dave=====
wcs_6 = "Utiliser l'interface WAN:";
wcs_7 = " Adresse IP WAN";

// -------------- WAN Connection Modem  ----------------
wcm_1 = "Modem seulement (D�sactivation du partage de l'Internet)";
wcm_2 = "To enter your Modem settings, type in your information below and click \"Apply changes\".";//<=====Dave=====
wcm_3 = "Activer le service Pont";

// -------------- Wireless Main  ----------------
wlm_1 = "Sans Fil";
wlm_2 = "Dans cet onglet, vous pouvez ajuster les param�tres de la section Sans Fil du Routeur.";
wlm_3 = "Canal et SSID";
wlm_4 = "Faire des ajustements au canal sans fil et au SSID (nom du r�seau sans fil).";
wlm_5 = "S�curit�";
wlm_6 = "Modifiez les param�tres de s�curit�, tels que les param�tres de WPA ou de WEP. ";
wlm_7 = "Utilisation comme Point d'acc�s";
wlm_8 = "D�finissez le mode de fonctionnement du routeur sur Point d'acc�s. ";
wlm_9 = "Contr�le d'adresse MAC";
wlm_10 = "Dressez une liste de clients qui obtiendront ou se verront refuser l'acc�s au r�seau sans fil.";
wlm_11 = "Easily setup and connect to a WPA-enabled 802.11 network with WPS-certified devices using either Personal Information Number(PIN) method or Push Button Configuration(PBC) method.";
wlm_12 = "Set up a list of MAC addresses that enable the interconnection of access points wirelessly.";

// -------------- Wireless Channel and SSID  ----------------
wlcs_1 = "Canal actuel   ";
wlcs_2 = "Le SSID ne peut �tre vide.";
wlcs_3 = "Pour apporter des modifications aux param�tres du routeur, veuillez le faire ici. Cliquez sur ��Enregistrer les modifications�� pour enregistrer les param�tres.";
wlcs_4 = "Canal sans fil";
wlcs_5 = "SSID";
wlcs_6 = "Mode Sans Fil ";
wlcs_7 = "802.11g onln";
wlcs_8 = "802.11g only";
wlcs_9 = "802.11b only";
wlcs_10 = "�teint";
wlcs_11 = "Bandwidth";//<=====Dave=====
wlcs_12 = "Diffusion du SSID ";
wlcs_13 = "Mode Prot�g� ";
wlcs_14 = "Auto";
wlcs_15 = "WMM";
wlcs_16 = "Disable Afterburner(wireless_wifi) for selection";//<=====Dave=====
wlcs_17 = "WMM No Acknowledgement";//<=====Dave=====

// -------------- Wireless Security None  ----------------
wlsn_1 = "Mode S�curis�";
wlsn_2 = "WPA-PSK(sans serveur)";
wlsn_3 = "WEP 128 bits";
wlsn_4 = "WEP 64 bits";
wlsn_5 = "WPA (avec serveur radius)";
wlsn_6 = "Vous pouvez configurer les param�tres de s�curit�/chiffrement ici. La S�curit� devrait �tre activ�e pour assurer la s�curit� maximale du r�seau sans fil. Le WPA (Wireless Protected Access) pr�sente un changement de cl�s dynamique et constitue la meilleure option de s�curit�. Dans les environnements sans fil, l� o� aucun des p�riph�riques ne prend en charge le WPA, le mode WEP (Wired Equivalent Privacy) devrait �tre utilis�.";

// -------------- Wireless Security WEP 64  ----------------
wlsw64_1 = "Vous n'avez pas entr� tous les chiffres hexad�cimaux ou certains chiffres hexad�cimaux entr�s ne sont pas valides. Un chiffre hex peut �tre un nombre de 0 � 9 ou une lettre de A � F.";
wlsw64_2 = "Cette expression mot de passe est invalide";
wlsw64_3 = "Cl� 1";
wlsw64_4 = "Cl� 2";
wlsw64_5 = "Cl� 3 ";
wlsw64_6 = "Cl� 4";
wlsw64_7 = "Impossible d'enregistrer les modifications�: le sans fil est d�sactiv�";
wlsw64_8 = " NOTE�:Pour g�n�rer automatiquement des paires hexad�cimales � l'aide d'une expression mot de passe, cochez la case de gauche et saisissez ici votre expression mot de passe";
wlsw64_9 = "Expression mot de passe";
wlsw64_10 = "G�n�rer";

// -------------- Wireless Security WEP 128  ----------------
wlsw128_1 = "(paires de 13 chiffres hexad�cimaux) ";

// -------------- Wireless Security WPA PSK  ----------------
wlswp_1 = "La Cl� pr�-partag�e WPA doit comporter entre 8 et 63 caract�res ASCII ou 64 nombres hexad�cimaux.";
wlswp_2 = "TKIP";
wlswp_3 = "AES";
wlswp_4 = "Authentification ";
wlswp_5 = "WPA PSK";
wlswp_6 = "WPA2-PSK";
wlswp_7 = "Technique de chiffrement ";
wlswp_8 = "Cl� Pr�-Partag�e (Pre-Shared Key - PSK)";
wlswp_9 = "WPA-PSK(sans serveur)";
wlswp_10 = "Wireless Protected Access avec cl� pr�-partag�e (pre-shared key)�: La cl� est un mot de passe, sous la forme d'un mot, d'une phrase ou d'une cha�ne de lettres et de chiffres. La cl� doit �tre compos�e de 8 � 63 caract�res, et peut inclure des espaces et des symboles, ou une cl� hex 64 bits (0-F) seulement. Chaque client se connectant � un r�seau doit utiliser la m�me cl� (cl� pr�-partag�e) ";
wlswp_11 = "Dissimuler la PSK ";
wlswp_12 = "WPA-PSK + WPA2-PSK";

// -------------- Wireless Security WPA Radius  ----------------
wlsr_1 = "Entrez la cl� RADIUS.";
wlsr_2 = "Configuration WPA/WPA2-Enterprise (RADIUS)";
wlsr_3 = "Param�tres avanc�s - Le Wireless Protected Access utilisant un serveur pour distribuer les cl�s aux clients�: Cette option n�cessite qu'un serveur Radius soit en op�ration sur le r�seau.";
wlsr_4 = "WPA-RADIUS";
wlsr_5 = "WPA2-RADIUS";
wlsr_6 = "Serveur Radius ";
wlsr_7 = "Port Radius ";
wlsr_8 = "Cl� Radius ";
wlsr_9 = "Intervalle de ressaisie de la cl� ";
wlsr_10 = "(secondes)";

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
wlap_1 = "Veuillez modifier manuellement la zone de saisie Adresse dans la barre d'�tat de votre navigateur et indiquer l'adresse LAN.";
wlap_2 = "Utilisation comme Point d'acc�s";
wlap_3 = "Activer";
wlap_4 = "D�sactiver";
wlap_5 = " L'adresse IP choisie doit �tre une adresse IP non-acheminable. Quelques exemples d'adresses IP non-acheminable, soit 192.168.x.x (o� x est un nombre compris entre 0 et 255.) 172.y.x.x (o� y est un nombre compris entre 16 et 31, et x est un chiffre est compris entre 0 et 255) 10.x.x.x (o� x est un nombre compris entre 0 et 255) ";
wlap_6 = "Sp�cifier l'adresse IP";

// -------------- Wireless MAC filter  ----------------
wlmac_1 = "Contr�le d'adresse MAC";
wlmac_2 = "Adresse MAC";
wlmac_3 = "Ajouter";

// -------------- Firewall Main  ----------------
fwm_1 = "Pare-feu";
fwm_2 = "Votre Routeur poss�de un pare-feu afin de prot�ger votre r�seau contre une multitude d'attaques provenant de pirates informatiques, incluant le Ping de la Mort (Ping of Death - PoD) et l'attaque par D�ni de Service (Denial of Service - DoS). Vous pouvez au besoin d�sactiver la fonction de pare-feu. D�sactiver le pare-feu ne rendra pas votre r�seau totalement vuln�rable aux attaques provenant des pirates informatiques, mais il est recommand� d'activer le pare-feu aussi souvent que possible.";

// -------------- Firewall Virtual Sever  ----------------
fwvs_1 = "Serveurs Virtuels";
fwvs_2 = "Active Worlds";
fwvs_3 = "Age of Empires";
fwvs_4 = "Age of Empires Expansion: The Rise of Rome";
fwvs_5 = "Age of Empires II Expansion: The Conquerors";
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
fwvs_23 = "Close Combat pour Windows";
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
fwvs_38 = "Jeux DirectX 7";
fwvs_39 = "Jeux DirectX 8";
fwvs_40 = "Serveur de nom de domaine (DNS)";
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
fwvs_54 = "Serveur FTP";
fwvs_55 = "GNUtella";
fwvs_56 = "Golf �dition 2001";
fwvs_57 = "Go2Call";
fwvs_58 = "Half Life";
fwvs_59 = "Serveur Half Life";
fwvs_60 = "Serveur Heretic II";
fwvs_61 = "I76";
fwvs_62 = "Client ICUII";
fwvs_63 = "IPSEC";
fwvs_64 = "Ivisit";
fwvs_65 = "IRC";
fwvs_66 = "IStreamVideo2HP";
fwvs_67 = "KaZaA";
fwvs_68 = "Kohan Immortal Sovereigns";
fwvs_69 = "LapLink Gold";
fwvs_70 = "Links 2001";
fwvs_71 = "Serveur Lotus Notes";
fwvs_72 = "Messagerie (POP3)";
fwvs_73 = "Messagerie (SMTP)";
fwvs_74 = "MechCommander 2.0";
fwvs_75 = "MechWarrior 4";
fwvs_76 = "Media Player 7";
fwvs_77 = "Midtown Madness 2";
fwvs_78 = "Mig 29";
fwvs_79 = "Monster Truck Madness 2";
fwvs_80 = "Motocross Madness 2";
fwvs_81 = "Serveur Motorhead";
fwvs_82 = "MSN Gaming Zone";
fwvs_83 = "MSN Messenger";
fwvs_84 = "Myth";
fwvs_85 = "Serveur Myth II";
fwvs_86 = "Myth: The Fallen Lords";
fwvs_87 = "Need for Speed";
fwvs_88 = "NetMech";
fwvs_89 = "Netmeeting 2.0, 3.0, Intel Video Phone";
fwvs_90 = "Network Time Protocol (NTP)";
fwvs_91 = "Serveur de News (NNTP)";
fwvs_92 = "OKWeb";
fwvs_93 = "OKWin";
fwvs_94 = "Outlaws";
fwvs_95 = "Pal Talk";
fwvs_96 = "pcAnywhere v7.5";
fwvs_97 = "PhoneFree";
fwvs_98 = "Polycom ViaVideo H.323";
fwvs_99 = "Polycom ViaVideo H.324";
fwvs_100 = "PPTP";
fwvs_101 = "Quake";
fwvs_102 = "Quake II (client et serveur)";
fwvs_103 = "Quake III";
fwvs_104 = "Red Alert";
fwvs_105 = "RealAudio";
fwvs_106 = "Real Player 8 Plus";
fwvs_107 = "Rise of Rome";
fwvs_108 = "Roger Wilco";
fwvs_109 = "Rogue Spear";
fwvs_110 = "Serveur de shell s�curis� (SSH)";
fwvs_111 = "Serveur Web s�curis� (HTTPS)";
fwvs_112 = "ShoutCast";
fwvs_113 = "SNMP";
fwvs_114 = "Interruption SNMP";
fwvs_115 = "Speak Freely";
fwvs_116 = "StarCraft";
fwvs_117 = "Starfleet Command";
fwvs_118 = "StarLancer";
fwvs_119 = "SWAT3";
fwvs_120 = "Serveur Telnet";
fwvs_121 = "TFTP";
fwvs_122 = "The 4th Coming";
fwvs_123 = "Tiberian Sun: C&C III";
fwvs_124 = "Total Annihilation";
fwvs_125 = "Ultima";
fwvs_126 = "Unreal Tournament";
fwvs_127 = "Urban Assault";
fwvs_128 = "VoxPhone 3.0";
fwvs_129 = "Warbirds 2";
fwvs_130 = "Serveur Web (HTTP)";
fwvs_131 = "WebPhone 3.0";
fwvs_132 = "Westwood Online";
fwvs_133 = "Windows 2000 Terminal Server";
fwvs_134 = "X Windows";
fwvs_135 = "Yahoo Pager";
fwvs_136 = "Yahoo Messenger Chat";
fwvs_137 = "Toutes les entr�es sont pleines.\nVeuillez effacer certaines entr�es et recommencer.";
fwvs_138 = "Cette fonction vous permet de relayer les appels de service externes (Interner) tel un serveur Web (port 80), un serveur FTP (port 21) ou autres applications via votre Routeur vers votre r�seau interne.";
fwvs_139 = "S�lectionnez un";
fwvs_140 = "Effacer";
fwvs_151 = "Type";
fwvs_152 = "Voulez-vous effacer toutes les entr�es�?";
fwvs_153 = "Voulez-vous effacer l'entr�e";


// -------------- Firewall Client IP filter  ----------------
fwcf_1 = "Filtres d'IP des clients";
fwcf_2 = "Dimanche";
fwcf_3 = "Lundi";
fwcf_4 = "Mardi";
fwcf_5 = "Mercredi";
fwcf_6 = "Jeudi";
fwcf_7 = "Vendredi";
fwcf_8 = "Samedi";
fwcf_9 = "L'Adresse source est une adresse IP non valide.";
fwcf_10 = "Le Port de destination est un num�ro de port ou une plage non valide .";
fwcf_11 = "Le Routeur peut �tre configur� de sorte � limiter l'acc�s de certains ordinateurs � Internet, au courrier �lectronique ou � certains services r�seau";
fwcf_12 = "Les Deux";
fwcf_13 = "Temps de blocage";
fwcf_14 = "Toujours";
fwcf_15 = "Bloquer";
fwcf_16 = "Jour";
fwcf_17 = "Heure";
fwcf_18 = "Port";

// -------------- Firewall DMZ  ----------------
fwdmz_1 = "Zone DMZ";
fwdmz_2 = "La zone DMZ vous permet de sp�cifier quel ordinateur de votre r�seau doit �tre plac� � l'ext�rieur du pare-feu NAT. Cette op�ration peut s'av�rer n�cessaire si la traduction d'adresse r�seau (NAT) emp�che le bon fonctionnement d'applications telles que les jeux ou les vid�oconf�rences. Servez-vous de cette fonction au besoin. L'ordinateur plac� dans la zone DMZ ne sera pas prot�g� contre les attaques provenant de hackers. Pour placer un ordinateur dans la zone DMZ, entrez les derniers chiffres de son adresse IP dans le champ de saisie ci-dessous, et s�lectionnez ��Activer��. Cliquez ��Enregistrer les Modifications��� pour que les modifications apport�es soient prises en compte.";
fwdmz_3 = "Adresse IP de l'h�te DMZ virtuel";
fwdmz_4 = "IP fixe ";
fwdmz_5 = "IP priv�e";

// -------------- Firewall DDNS  ----------------
fwddns_1 = "Nom d'h�te vide.";
fwddns_2 = "Nom de domaine vide.";
fwddns_3 = "Nom d'utilisateur vide.";
fwddns_4 = "Courriel non valide.";
fwddns_5 = "Mot de passe vide.";
fwddns_6 = "Cl� non valide.";
fwddns_7 = "DDNS";
fwddns_8 = "Les services DDNS (Dynamic DNS) vous permettent d'utiliser un nom de domaine m�me si votre adresse IP Internet est dynamique. Vous devez souscrire au service DDNS aupr�s de l'un des services DDNS �num�r�s.";
fwddns_9 = "Service DDNS";
fwddns_10 = "D�sactiver le DDNS";
fwddns_11 = "�tat DDNS";
fwddns_12 = "D�connect�";
fwddns_13 = "Connect�";
fwddns_14 = "Nom d'utilisateur";
fwddns_15 = "Mot de passe";
fwddns_16 = "Nom de Domaine";
fwddns_17 = "E-mail";
fwddns_18 = "La cl�";
fwddns_19 = "Mise � jour DNS Dynamique";

// -------------- Firewall Wan Ping Blocking  ----------------
fwwpb_1 = "Blocage du ping WAN";
fwwpb_2 = "FONCTION AVANC�E�! Vous pouvez configurer le Routeur de sorte qu'il ignore un ping ICMP (ping au port WAN). Cette fonction rehausse le niveau de s�curit�.";
fwwpb_3 = "Blocage du Ping ICMP";

// -------------- Firewall Security Log  ----------------
fwsl_1 = "Journal de s�curit�";
fwsl_2 = "Le routeur conserve un journal de l'activit� � l'int�rieur de celui-ci, telle que les connexions et d�connexions, et toute tentative de connexion au routeur en provenance de l'Internet. Vous pouvez visualiser le journal ci-dessous.";
fwsl_3 = "Journal";
fwsl_4 = "Enregistrer";
fwsl_5 = "Effacer";

// -------------- Utility Main  ----------------
utm_1 = "Utilitaires";
utm_2 = "Cet �cran vous permet de g�rer plusieurs param�tres du Routeur et accomplir certaines t�ches administratives.";
utm_3 = " Red�marrer le Routeur ";
utm_4 = "Parfois il peut �re utile de red�marrer le routeur lorsque celui-ci fonctionne de fa�on inappropri�e. Red�marrer le Routeur n'affectera en rien vos param�tres de configuration.";
utm_5 = "R�tablir les param�tres par d�faut";
utm_6 = "Cette option r�tablira les param�tres du Routeur vers les param�tres par d�faut du fabricant. Nous vous recommandons de faire une copie de vos param�tres avant de r�tablir la configuration par d�faut.";
utm_7 = "Sauvegarder les param�tres";
utm_8 = "Vous pouvez sauvegarder votre configuration actuelle gr�ce � cette fonction. Cela vous permettra de la r�tablir plus tard si vous perdez les param�tres ou s'ils sont modifi�s. Nous vous recommandons de faire une copie de vos param�tres avant de mettre � jour le micrologiciel.";
utm_9 = "Mise � jour du micrologiciel";
utm_10 = "De temps � autre, Belkin peut lancer une nouvelle version du micrologiciel du Routeur. Ces mises � jour peuvent contenir des am�liorations et des solutions aux probl�mes existants.";
utm_11 = "Param�tres du syst�me";
utm_12 = " La page \"�Param�tres du syst�me\" est l'endroit o� vous pouvez entrer un nouveau mot de passe d'administrateur, r�gler le fuseau horaire, activer la gestion � distance, et activer/d�sactiver la fonction de NAT ";
utm_13 = " R�tablir les Param�tres Pr�alablement Sauvegard�s ";
utm_14 = "Cette option vous permet de r�tablir une configuration sauvegard�e pr�alablement.";

// -------------- Utility Reset  ----------------
utrst_1 = "Voulez-vous vraiment red�marrer le Routeur�? Red�marrer le routeur n'affectera en rien votre configuration.";
utrst_2 = "Allouez jusqu'� 60 secondes au Routeur pour red�marrer. Ne d�branchez pas le Routeur avant que le processus de red�marrage ne soit compl�t�.";
utrst_3 = "Red�marrer le Routeur";
utrst_4 = "Il peut parfois �tre utile de red�marrer le Routeur lorsque celui-ci fonctionne de fa�on incongrue. Red�marrer le Routeur n'affectera en rien vos param�tres de configuration. Cliquez sur le bouton ��Red�marrer le Routeur�� ci-dessous pour red�marrer le Routeur. ";

// -------------- Utility Factory Default  ----------------
utfd_1 = "R�tablir les param�tres par d�faut du fabricant ";
utfd_2 = "AVERTISSEMENT�: Tous vos r�glages seront perdus. Voulez-vous vraiment continuer�?";
utfd_3 = "La restauration des param�tres par d�faut peut prendre jusqu'� 60 secondes. N'�teignez pas le routeur pendant le processus.";
utfd_4 = "Les param�tres par d�faut ne seront pas restaur�s. Aucun param�tre ne sera perdu�!";
utfd_5 = "Cette option r�tablira les param�tres du Routeur vers les param�tres par d�faut du fabricant. Nous vous recommandons de faire une copie de vos param�tres avant de r�tablir la configuration par d�faut. Pour r�tablir la configuration par d�faut, cliquez sur le bouton ��R�tablir les Param�tres par D�faut�� ci-dessous.";
utfd_6 = "R�tablir les Param�tres par D�faut";

// -------------- Utility Save/Backup settings  ----------------
utss_1 = "Enregistrer/Sauvegarder les param�tres actuels ";
utss_2 = "Vous pouvez sauvegarder votre configuration actuelle gr�ce � cette fonction. Cela vous permettra de la r�tablir plus tard si vous perdez les param�tres ou s'ils sont modifi�s. Nous vous recommandons de faire une copie de vos param�tres avant de mettre � jour le micrologiciel.";
utss_3 = "Enregistrer";

// -------------- Utility Previous Settings  ----------------
utps_1 = "R�tablir les Param�tres Pr�c�dents ";
utps_2 = "La mise � jour des param�tres est en cours et le routeur va red�marrer. Veuillez patienter une minute.";
utps_3 = "Voulez-vous poursuivre et r�tablir les param�tres ?";
utps_4 = "Suite au r�tablissement des param�tres, le Routeur peut ne pas r�pondre aux commandes pendant une p�riode pouvant aller jusqu'� environ une minute.\n\nCeci est normal. Ne d�branchez pas votre Routeur pendant cette p�riode.";
utps_5 = "Cette option vous permet de r�tablir une configuration sauvegard�e pr�alablement.";
utps_6 = "R�tablir";

// -------------- Utility Firmware Update  ----------------
utfu_1 = "Mise � jour du micrologiciel";
utfu_2 = "Rechercher une nouvelle version du micrologiciel";
utfu_3 = "V�rifier le micrologiciel";
utfu_4 = "T�l�chargement du logiciel en cours. Veuillez patienter une minute.";
utfu_5 = "Veuillez sp�cifier o� se trouve le fichier de mise � niveau. Entrez le nom du fichier ainsi que son chemin d'acc�s ou cliquez sur ��Parcourir�� pour acc�der � l'emplacement du fichier.";
utfu_6 = "Voulez-vous vraiment poursuivre la mise � jour�?";
utfu_7 = "� la fin de la mise � niveau, il est possible que le routeur ne r�ponde pas aux commandes pendant une minute. Ceci est normal. Ne fermez ni ne red�marrez votre Routeur pendant cette p�riode.";
utfu_8 = "De temps � autre, Belkin peut lancer une nouvelle version du micrologiciel du Routeur. Ces mises � jour peuvent contenir des am�liorations et des solutions � des probl�mes existants. Cliquez sur le lien ci-dessous pour v�rifier la disponibilit� d'une mise � jour du micrologiciel de ce Routeur.";
utfu_9 = "REMARQUE�: Veuillez faire une copie de vos param�tres avant de mettre � jour le micrologiciel. <b><a  style=\"FONT-SIZE: 11px; color:#0066FF\" href=\"util_save.html\"> Cliquez ici </a></b> pour acc�der � la page Enregistrer/Sauvegarder les param�tres en cours.";
utfu_10 = "Version du microprogramme";
utfu_11 = "Mettre � jour le micrologiciel";
utfu_12 = "Mise � Jour";
utfu_13 = "Mise � jour du micrologiciel en cours.";
utfu_14 = "N'INTERROMPEZ PAS LE PROCESSUS ET NE D�BRANCHEZ PAS LE ROUTEUR. Ceci pourrait rendre votre Routeur inutilisable.";

// -------------- Utility System Settings  ----------------
utsys_1 = "Param�tres du syst�me";
utsys_2 = "Dimanche";
utsys_3 = "Lundi";
utsys_4 = "Mardi";
utsys_5 = "Mercredi";
utsys_6 = "Jeudi";
utsys_7 = "Vendredi";
utsys_8 = "Samedi";
utsys_9 = "Janvier";
utsys_10 = "F�vrier";
utsys_11 = "Mars";
utsys_12 = "Avril";
utsys_13 = "Mai";
utsys_14 = "Juin";
utsys_15 = "Juillet";
utsys_16 = "Ao�t";
utsys_17 = "Septembre";
utsys_18 = "Octobre";
utsys_19 = "Novembre";
utsys_20 = "D�cembre";
utsys_21 = "132.163.4.102-Am�rique du Nord";
utsys_22 = "192.5.41.41-Am�rique du Nord";
utsys_23 = "192.5.41.209-Am�rique du Nord";
utsys_24 = "207.200.81.113-Am�rique du Nord";
utsys_25 = "208.184.49.9-Am�rique du Nord";
utsys_26 = "129.132.2.21-Europe";
utsys_27 = "130.149.17.8-Europe";
utsys_28 = "128.250.36.3-Australie";
utsys_29 = "137.189.8.174-Asie/Pacifique";
utsys_30 = "Ligne internationale de changement de date ouest";
utsys_31 = "�les Midway, Samoa";
utsys_32 = "Hawaii";
utsys_33 = "Alaska";
utsys_34 = "Pacifique, Tijuana";
utsys_35 = "Arizona, Mazatlan";//<=====Dave=====
utsys_36 = "Chihuahua, La Paz";//<=====Dave=====
utsys_37 = "Montagnes Rocheuses";
utsys_38 = "Central America";//<=====Dave=====
utsys_39 = "Centre";
utsys_40 = "Guadalajara, Mexico City, Monterrey";//<=====Dave=====
utsys_41 = "Saskatchewan";
utsys_42 = "Bogota, Lima, Quito";
utsys_43 = "Est";
utsys_44 = "Indiana";
utsys_45 = "Heure de Atlantique";
utsys_46 = "Caracas, La Paz";
utsys_47 = "Santiago";
utsys_48 = "Terre-Neuve";
utsys_49 = "Brasilia";
utsys_50 = "Buenos Aires, Georgetown";
utsys_51 = "Groenland";
utsys_52 = "Centre-Atlantique";
utsys_53 = "Acores";
utsys_54 = "Iles du Cap-Vert";
utsys_55 = "Casablanca, Monrovia";
utsys_56 = "Heure de Greenwich Dublin, Edimbourg, Lisbonne, Londres";
utsys_57 = "Amsterdam, Berlin, Berne, Rome, Stockholm, Vienne";
utsys_58 = "Belgrade, Bratislava, Budapest, Ljubljana, Prague";
utsys_59 = "Bruxelles, Copenhague, Madrid, Paris";
utsys_60 = "Sarajevo, Skopje, Varsovie, Zagreb";
utsys_61 = "Afrique centrale et occidentale";
utsys_62 = "Ath�nes, Istanbul, Minsk";
utsys_63 = "Bucarest";
utsys_64 = "Le Caire";
utsys_65 = "Harare, Pretoria";
utsys_66 = "Helsinki, Kyiv, Riga, Sofia, Tallinn, Vilnius";//<=====Dave=====
utsys_67 = "Jerusalem";//<=====Dave=====
utsys_68 = "Bagdad";
utsys_69 = "Kowe�t, Riyad";
utsys_70 = "Moscou, St. Petersbourg, Volgograd";
utsys_71 = "Nairobi";
utsys_72 = "T�h�ran";
utsys_73 = "Abu Dhabi, Muscat";
utsys_74 = "Baku, Tbilisi, Yerevan";//<=====Dave=====
utsys_75 = "Kaboul";
utsys_76 = "Iekaterinbourg";
utsys_77 = "Islamabad, Karachi, Tashkent";//<=====Dave=====
utsys_78 = "Chennai, Kolkata, Mumbai, New Delhi";//<=====Dave=====
utsys_79 = "Kathmandu";//<=====Dave=====
utsys_80 = "Almaty, Novosibirsk";//<=====Dave=====
utsys_81 = "Astana, Dhaka";//<=====Dave=====
utsys_82 = "Sri Jayawardenepura";//<=====Dave=====
utsys_83 = "Rangoon";//<=====Dave=====
utsys_84 = "Bangkok, Hanoi, Jakarta";
utsys_85 = "Krasnoyarsk";//<=====Dave=====
utsys_86 = "Pekin, Chongqoing, Hong Kong, Ouroumtsi";
utsys_87 = "Irkutsk, Ulaan Bataar";//<=====Dave=====
utsys_88 = "Kuala Lumpur, Singapore";//<=====Dave=====
utsys_89 = "Perth";
utsys_90 = "Taipei";
utsys_91 = "Osaka, Sapporo, Tokyo";
utsys_92 = "Seoul";//<=====Dave=====
utsys_93 = "Yakoutsk";
utsys_94 = "Adelaide";//<=====Dave=====
utsys_95 = "Darwin";//<=====Dave=====
utsys_96 = "Brisbane";
utsys_97 = "Canberra, Melbourne, Sydney";
utsys_98 = "Guam, Port Moresby";
utsys_99 = "Hobart";
utsys_100 = "Vladivostok";
utsys_101 = "Magadan";
utsys_102 = "Solomon Is., New Caledonia";//<=====Dave=====
utsys_103 = "Auckland, Wellington";
utsys_104 = "Fidji, Kamtchatka, Iles Marshall";
utsys_105 = "Autres";
utsys_106 = "Aucun(e)";
utsys_107 = "Avant d'activer cette fonction, il est FORTEMENT RECOMMAND� que vous ajoutiez un mot de passe administrateur.";
utsys_108 = "Please choose the following remote management type :\n1.Any IP address can remotely manage the router\n2.Only this IP address can remotely manage the router";//<=====Dave=====
utsys_109 = "Num�ro incorrect�! Doit �tre compris entre 1..65535";
utsys_110 = "Le premier serveur temporel est ��Autre��, mais le champ ��Autre�� est vide.";
utsys_111 = "NTP IP Address is invalid IP address.";//<=====Dave=====
utsys_112 = "Le second serveur temporel est ��Autre��, mais le champ ��Autre�� est vide.";
utsys_113 = "L'ancien mot de passe admin est incorrect.";
utsys_114 = "Password should not be less than 3 characters or lognger than 12 characters.";//<=====Dave=====
utsys_115 = "Les mots de passe ne correspondent pas.";
utsys_116 = "Login Timeout should be between 1 and 99.";//<=====Dave=====
utsys_117 = "Mot de passe Administrateur";
utsys_118 = "Le Routeur est livr� SANS mot de passe d�fini. Si par souci de s�curit� vous d�sirer ajouter un mot de passe, vous pouvez le configurer ici.";
utsys_119 = "Entrez le Mot de Passe actuel ";
utsys_120 = "Entrez le nouveau mot de passe ";
utsys_121 = "Confirmer le nouveau Mot de Passe ";
utsys_122 = "Temporisation de la Connexion ";
utsys_123 = "1-99 minutes";
utsys_124 = "D�finition d'un fuseau horaire";
utsys_125 = "D�finissez votre fuseau horaire. Si vous demeurez dans une r�gion ayant recours � l'heure d'�t�, cochez cette case.";
utsys_126 = "Fuseau horaire";
utsys_127 = "Heure d'�t�";
utsys_128 = "Ajuster automatiquement � l'heure d'�t�";
utsys_129 = "Premier Serveur temps NTP";
utsys_130 = "Second Serveur temps NTP";
utsys_131 = "Gestion � distance";
utsys_132 = "FONCTION AVANC�E�! La gestion � distance vous permet d'apporter des changements aux param�tres de votre Routeur, o� que vous soyez gr�ce � l'Internet. Avant d'activer cette fonction, ASSUREZ-VOUS D'AVOIR ENTR� UN MOT DE PASSE ADMINISTRATEUR.";
utsys_133 = "Enable Remotely Management";//<=====Dave=====
utsys_134 = "N'importe quelle adresse IP peut g�rer le routeur � distance.";
utsys_135 = "Seule cette adresse IP est autoris�e � g�rer le routeur � distance";
utsys_136 = "Port d'acc�s distant";
utsys_137 = "Activer la NAT";
utsys_138 = "FONCTION AVANC�E�! Vous permet d'�teindre la fonction de traduction d'adresse r�seau (NAT). Dans la plupart des cas, il est recommand� de ne PAS D�SACTIVER cette fonctionnalit�. ";
utsys_139 = "Activer/D�sactiver NAT";
utsys_140 = "UPnP";
utsys_141 = "FONCTION AVANC�E�! Vous permet de d�sactiver la fonction d'UPnP du Routeur.";
utsys_142 = "Activer le UPnP";
utsys_143 = "Activer la mise � jour automatique du micrologiciel";
utsys_144 = "FONCTION AVANC�E�! Vous permet de v�rifier automatiquement la disponibilit� de mises � jour pour votre routeur.";
utsys_145 = " Activation/D�sactivation de la mise � jour automatique du micrologiciel";

// -------------- Check New Firmware  ----------------
cnf_1 = "V�rifier le micrologiciel";
cnf_2 = " �chec de la connexion au serveur d'informations sur le micrologiciel, v�rifiez la connexion WAN.";
cnf_3 = "Aucune mise � jour du micrologiciel n'est disponible pour ce routeur !";

// -------------- Help  ----------------
hlp_1 = "Aide";
hlp_2 = "HELP OF TERMS";//<=====Dave=====
hlp_3 = "haut";
hlp_4 = "Administrateur";
hlp_5 = "Un Administrateur s'acquitte des t�ches d'entretien du r�seau. Dans le cas pr�cis de ce routeur, c'est la personne qui configure le routeur et apporte les changements aux param�tres.    ";
hlp_6 = "Client";
hlp_7 = "Se dit d'un ordinateur faisant partie d'un r�seau et qui utilise les services du routeur, tels que le serveur DHCP automatique et le Pare-Feu.";
hlp_8 = "DHCP";
hlp_9 = "La fonction de serveur DHCP permet la mise en place d'un r�seau en toute simplicit�, en attribuant une adresse IP � chacun des ordinateurs du r�seau. Le serveur DHCP peut �tre d�sactiv� au besoin. Si vous d�sactivez le serveur DHCP, vous devrez entrer manuellement une adresse IP statique pour chaque ordinateur du r�seau. Le pool d'adresses IP est la plage d'adresses IP mises de c�t� pour attribution dynamique aux ordinateurs de votre r�seau. La valeur par d�faut est de 2 � 100 (99 ordinateurs). Pour changer ce nombre, entrez de nouvelles adresses IP de d�but et de fin, puis cliquez sur \"Enregistrer les modifications\".";
hlp_10 = "Nom de domaine local";
hlp_11 = "Vous pouvez donner un nom de domaine local (nom de r�seau) � votre r�seau. Il n'est pas n�cessaire de modifier ce param�tre, � moins qu'un besoin avanc� sp�cifique ne vous oblige � le faire. Vous pouvez donner n'importe quel nom � votre r�seau, par exemple \"MON R�SEAU\".";
hlp_12 = "Connexion par num�rotation";
hlp_13 = "Se dit d'une connexion utilisant le r�seau t�l�phonique public";
hlp_14 = "DNS";
hlp_15 = "DNS est l'acronyme de Domain Name Server, qui se traduit par Serveur de noms de domaine. Un serveur de noms de domaine est un serveur qui se trouve sur Internet et qui traduit les adresses URL (Universal Resource Links), telles que www.belkin.com, en adresses IP. La plupart des FAI n'exigent pas que vous entriez ces informations lors de la configuration du routeur. Si vous utilisez une connexion de type IP fixe, il est possible que vous deviez entrer une adresse DNS sp�cifique et une adresse DNS secondaire pour assurer le bon fonctionnement de votre connexion. Si vous utilisez une connexion de type dynamique ou PPPoE, il est fort probable que vous n'ayez pas � entrer d'adresse DNS.";
hlp_16 = "Modem DSL";
hlp_17 = "DSL est l'acronyme de Digital Subscriber Line (Ligne d'abonn� num�rique). Un modem DSL utilise vos lignes t�l�phoniques existantes pour transmettre des donn�es � haut d�bit.";
hlp_18 = "IP dynamique";
hlp_19 = "ne adresse IP qui est automatiquement obtenue aupr�s d'un serveur DHCP.";
hlp_20 = "Ethernet";
hlp_21 = "Une norme de r�seaux informatiques. Les r�seaux Ethernet sont connect�s par des c�bles et des hubs sp�ciaux. Ils transmettent les donn�es jusqu'� 10 millions de bits par seconde (Mbps).";
hlp_22 = "Pare-feu";
hlp_23 = "Fronti�re �lectronique qui emp�che tout utilisateur non autoris� d'acc�der � certains fichiers ou ordinateurs d'un r�seau.";
hlp_24 = "Micrologiciel";
hlp_25 = "Logiciel emmagasin� dans la m�moire. Programmes essentiels qui demeurent en place m�me lorsque le syst�me est �teint. Les micrologiciels sont plus faciles � modifier que les mat�riels informatiques, mais plus permanents que les logiciels stock�s sur disque.";
hlp_26 = "Adresse IP";
hlp_27 = "L' \"Adresse IP\" est l'adresse IP interne du routeur. Pour acc�der � l'Interface de configuration avanc�e, entrez cette adresse IP dans la barre d'adresse de votre navigateur. Cette adresse peut �tre modifi�e au besoin. Pour modifier l'adresse IP, entrez la nouvelle adresse IP et cliquez sur \"Enregistrer les modifications\". L'adresse IP choisie doit �tre une adresse IP non-acheminable. Quelques exemples d'adresses IP non-acheminable, soit: 192.168.x.x (o� x est un nombre compris entre 0 et 255.) 172.y.x.x (o� y est un nombre compris entre 16 et 31, et x est un chiffre est compris entre 0 et 255) 10.x.x.x (o� x est un nombre compris entre 0 et 255)";
hlp_28 = "ISDN";
hlp_29 = "Acronyme de Integrated Services Digital Network (R�seau num�rique � int�gration de services). Lignes de t�l�communications num�riques qui peuvent transmettre � la fois de la voix et des services r�seaux num�riques � un d�bit jusqu'� 128�K et qui sont beaucoup plus rapides et fiables que les modems haut d�bit analogiques. Les lignes ISDN sont offertes par la plupart des op�rateurs t�l�phoniques.";
hlp_30 = "FAI";
hlp_31 = "Acronyme de Fournisseur d'acc�s � Internet. Un FAI est une entreprise qui permet aux individus et aux autres entreprises de se connecter � Internet.";
hlp_32 = "Adresse de passerelle du FAI (voir FAI pour d�finition)";
hlp_33 = "L'adresse de passerelle du FAI est une adresse IP correspondant au routeur Internet situ� chez votre fournisseur d'acc�s. Cette adresse n'est requise que lorsque vous utilisez un modem c�ble ou ADSL.";
hlp_34 = "LAN";
hlp_35 = "Acronyme de Local Area Network (r�seau local). Un LAN est un groupe d'ordinateurs et de p�riph�riques connect�s entre eux dans une zone relativement restreinte (la maison ou le bureau, par exemple). Votre r�seau � domicile est consid�r� comme un r�seau local";
hlp_36 = "Adresse MAC";
hlp_37 = " MAC est l'acronyme de Media Access Control. L'adresse MAC est l'adresse mat�rielle du p�riph�rique connect� � un r�seau";
hlp_38 = "MTU";
hlp_39 = "Acronyme de Maximum Transmission Unit (Unit� de transmission maximale). Le plus grand paquet (unit�) de donn�es pouvant �tre transmis sur un m�dium physique particulier";
hlp_40 = "NAT";
hlp_41 = "Acronyme de Network Address Translation (Traduction d'adresse r�seau). Ce proc�d� permet � tous les ordinateurs de votre r�seau domestique d'utiliser une seule adresse IP. Gr�ce � la technologie NAT du de votre passerelle r�seau domestique HomeConnect, vous pouvez acc�der � Internet depuis tous les ordinateurs de votre r�seau domestique sans devoir vous procurer d'autres adresses IP aupr�s de votre FAI";
hlp_42 = "Port";
hlp_43 = "Une voie logique identifi�e par son num�ro de port unique Les applications �coutent certains ports pour rep�rer des informations pouvant y �tre li�es.";
hlp_44 = "Static IP Connection";//<=====Dave=====
hlp_45 = "La connexion ��IP fixe�� est moins r�pandue que les autres types de connexion. Si c'est le cas, vous devez conna�tre votre adresse IP, celle de votre masque de sous-r�seau ainsi que l'adresse de passerellede votre FAI. Vous pouvez obtenir ces informations aupr�s de votre FAI ou parmi les documents fournis par votre FAI.";
hlp_46 = "PPPoE (Mode Routage, pour plusieurs PC)";
hlp_47 = "La plupart des fournisseurs de services ADSL utilisent la connexion de type PPPoE. Si vous utilisez un modem ADSL pour vous brancher � Internet, votre FAI utilise probablement le protocole PPPoE pour vous connecter au service. Si vous disposez, chez vous ou au bureau, d'une connexion Internet qui ne n�cessite pas de modem, vous pouvez �galement utiliser le PPPoE. Votre type de connexion est le PPPoE si: 1)Votre FAI vous a attribu� un nom d'utilisateur et un mot de passe, qui sont requis pour vous brancher � Internet. 2)Votre FAI vous a fourni des logiciels tels que WinPOET et Enternet300, et vous utilisez ceux-ci pour vous brancher � Internet. 3)Vous devez double-cliquer une ic�ne sur votre bureau, autre que celle de votre navigateur, pour vous brancher � Internet. Pour configurer le routeur selon le protocole PPPoE, entrez votre nom d'utilisateur et votre mot de passe dans les champs pr�vus. si votre routeur est correctement configur�. Pour de plus amples informations sur la configuration de votre routeur selon le protocole PPPoE, reportez-vous au manuel de l'utilisateur.";
hlp_48 = "PPPoA";
hlp_49 = "Point-to-Point Protocol Over ATM. Using the PPP dial-up protocol with ATM as the transport. Used by some DSL providers, IP packets travel from the PC over Ethernet to the DSL modem. The DSL modem adds the PPP protocol to the IP packets and transports them to the carrier's DSLAM via ATM.";//<=====Dave=====
hlp_50 = "Temps d'inactivit�";
hlp_51 = " La fonction de d�connexion permet de d�connecter automatiquement le routeur de votre FAI lorsque celui-ci est inactif pendant une p�riode de temps d�termin�e. Par exemple, en s�lectionnant cette option et en entrant le chiffre 5 dans le champ des minutes, le routeur se d�connectera automatiquement d'Internet apr�s 5�minutes d'inactivit� Internet. Cette option devrait �tre utilis�e si votre FAI vous facture � la minute.";
hlp_52 = "PPPoE (mode Routage, pour plusieurs PC)";
hlp_53 = "D�sactiver le partage d'Internet (mode Pont, pour un seul PC)";
hlp_54 = "Protocole multiple sur r�seau ATM (mode Routage, pour plusieurs PC)";
hlp_55 = "PPTP";
hlp_56 = "Acronyme de Point-to-Point Tunneling Protocol (Protocole de tunnelisation poste � poste). Une version am�lior�e du PPP qui poss�de la capacit� d'encapsuler des paquets de donn�es format�s pour un protocole r�seau en paquets pouvant �tre utilis�s par un autre protocole. Cette technique de tunnellisation permet aux donn�es TCP/IP d'�tre transmises sur un r�seau non-TCP/IP. Le PPTP peut �tre utilis� pour relier deux r�seaux physiques diff�rents, en utilisant l'Internet comme interm�diaire";
hlp_57 = "SNTP";
hlp_58 = "Acronyme de Simple Network Time Protocol. Norme de communication permettant la transmission d'informations en temps r�el sur un r�seau ou Internet";
hlp_59 = "SPI";
hlp_60 = " Acronyme de Stateful Packet Inspection. SPI est le type de s�curit� Internet pour entreprises que propose votre passerelle r�seau domestique HomeConnect. Gr�ce au SPI, la passerelle se comporte comme un pare-feu et prot�ge votre r�seau contre les pirates informatiques. ";
hlp_61 = "IP fixe ";
hlp_62 = "Une adresse IP qui est configur�e manuellement et qui ne change jamais";
hlp_63 = "Masque de Sous-R�seau";
hlp_64 = "FONCTION AVANC�E�! Il n'est pas n�cessaire de modifier le masque de sous-r�seau. Il est toutefois possible de le modifier au besoin. N'apportez des changements au masque de sous-r�seau que si vous le devez absolument";
hlp_65 = "TCP";
hlp_66 = "Acronyme de Transmission Control Protocol. Protocole de transport de donn�es le plus courant sur Internet. Le protocole TCP est orient� vers la connexion et la transmission, et procure une communication fiable entre les r�seaux � commutation de paquets.";
hlp_67 = "TCP/IP";
hlp_68 = "Acronyme de Transmission Control Protocol over Internet Protocol. Il s'agit du protocole standard pour la transmission des donn�es sur Internet.";
hlp_69 = "UDP";
hlp_70 = "Acronyme de User Datagram Protocol. Protocole de communication pour la couche r�seau Internet, la couche de transport et la couche session, ce qui rend possible l'envoi d'un message datagramme depuis un ordinateur vers une application fonctionnant sur un autre ordinateur. Contrairement au TCP, l'UDP ne requiert pas de connexion et ne garantit pas une communication fiable�; l'application elle-m�me doit traiter les erreurs et v�rifier la fiabilit� de la transmission.";
hlp_71 = "WAN";
hlp_72 = "Acronyme de Wide Area Network (r�seau �tendu). R�seau qui permet de connecter des ordinateurs situ�s dans des zones g�ographiquement distinctes (b�timents, villes ou pays diff�rents). Internet est un r�seau �tendu.";
hlp_73 = "Adresse IP WAN";
hlp_74 = "L'adresse IP que le FAI attribue au routeur.";
hlp_75 = "Canal et SSID";
hlp_76 = "Pour modifier le canal d'op�ration du routeur, s�lectionnez le canal d�sir� � partir de la liste d�roulante et s�lectionnez votre canal. Cliquez \"Enregistrer les modifications\" pour enregistrer les param�tres. Vous pouvez �galement modifier le SSID. Le SSID est l'�quivalent du nom du r�seau sans fil. Vous pouvez lui donner n'importe quel nom. S'il existe d'autres r�seaux sans fil dans votre environnement imm�diat, vous devez donner un nom unique au v�tre. Pour modifier le SSID, cliquez sur la zone SSID, puis entrez le nouveau nom. Cliquez \"Enregistrer les modifications\" pour faire la modification.";
hlp_77 = "Utilisation de la fonction de commutation entre les modes sans fil";
hlp_78 = "1) 802.11g &amp; 802.11b : Setting the Router to this mode will let 802.11g-, and 802.11b-compliant devices to join the network. 2) Off : This mode will turn OFF the Router's access point, so no wireless devices can join the network. Turning off the wireless function of your Router is a great way to secure your network when you are away from home for a long period of time, or don't want to use the wireless feature of the Router at a certain time.";//<=====Dave=====
hlp_79 = "Diffusion du SSID ";
hlp_80 = "Une des caract�ristiques des r�seaux sans fil est la possibilit� pour un adaptateur r�seau sans fil d'un ordinateur de rechercher automatiquement un r�seau sans fil existant. Ceci est rendu possible en param�trant la carte � TOUT Votre routeur est en mesure de bloquer cette recherche a�latoire d'un r�seau. Si vous d�sactivez la , le seul moyen dont dispose votre ordinateur pour se connecter au r�seau est de param�trer le SSID de celui-ci en lui donnant le nom du r�seau (par exemple WLAN). Assurez-vous de conna�tre le SSID (nom du r�seau) avant d'activer cette fonction. Il est possible de rendre presque invisible votre r�seau sans fil. En d�sactivant l'�mission du SSID, votre r�seau n'appara�tra pas lors de l'analyse du site. L'analyse de site est une fonction que poss�dent la majorit� des adaptateurs r�seau sans fil disponibles sur le march�. Il balaye l' air ambiant � la recherche de r�seaux et permet � l'ordinateur de choisir parmi eux. Le fait de d�sactiver la fonction de diffusion du SSID renforce la s�curit� du r�seau.";
hlp_81 = "Utilisation comme Point d'acc�s";
hlp_82 = "Lorsque vous utilisez le routeur comme point d'acc�s, vous devez indiquer l'adresse IP du point  d'acc�s. Cette adresse IP doit figurer dans la m�me plage que le r�seau auquel vous allez vous connecter. Pour acc�der � nouveau � l'interface d'installation �volu�e du routeur, entrez l'adresse IP dans le navigateur Web et connectez-vous.";
hlp_83 = "Sans Fil Contr�le de l'Adresse MAC";
hlp_84 = "Le filtre d'adresse MAC repr�sente une puissante caract�ristique de s�curit�, vous permettant d'autoriser, � des ordinateurs sp�cifiques, l'acc�s � votre r�seau sans fil. Remarque�: Cette liste ne s'applique qu'aux ordinateurs sans fil. Cette liste peut �tre configur�e de sorte que tout ordinateur non sp�cifi� dans les param�tres du filtre et qui tente d'acc�der au r�seau se verra refuser l'acc�s. Lorsque vous activez cette fonction, vous devez entrer l'adresse MAC de chaque client (ordinateur) de votre r�seau, pour permettre � chacun d'acc�der au r�seau. La fonction ��Bloquer�� vous permet d'activer et de d�sactiver facilement l'acc�s au r�seau pour tout ordinateur sans devoir ajouter l'adresse MAC de l'ordinateur � la liste ni la supprimer.<Br>Dresser une liste d'ordinateurs ��autoris�s�� <Br>1.S�lectionnez la case d'option ��Autoriser�� (1) pour commencer � dresser une liste d'ordinateurs pouvant se connecter � votre r�seau sans fil. <Br>2. Puis, dans le champ ��Addresse MAC�� vide (3), entrez l'adresse MAC de l'ordinateur � qui vous autorisez l'acc�s � votre r�seau sans fil. Cliquez ensuite sur ��Ajouter�� (4). <Br>3. Recommencez pour chaque ordinateur. <Br>4. Cliquez sur ��Enregistrer les modifications�� (5) pour terminer.<br><br>Dresser une liste d'ordinateurs ��refus�s�� <Br>La liste d'acc�s restreint vous permet de sp�cifier les ordinateurs qui se verront REFUSER l'acc�s au r�seau. Tout ordinateur se trouvant dans la liste se verra refuser l'acc�s au r�seau sans fil. Tous les autres pourront y acc�der. <Br>1.S�lectionnez la case d'option ��Refuser�� (2) pour commencer � dresser une liste d'ordinateurs qui se verront refuser l'acc�s � votre r�seau sans fil. <Br>2. Puis, dans le champ ��Addresse MAC�� vide (3), entrez l'adresse MAC de l'ordinateur � qui vous refusez l'acc�s � votre r�seau sans fil. Cliquez ensuite sur ��Ajouter�� (4). <Br>3. Recommencez pour chaque ordinateur. <Br>4. Cliquez sur ��Enregistrer les modifications�� (5) pour terminer."; 
hlp_85 = "Mode ACK";
hlp_86 = "Il existe deux modes d'accus�s de r�ception (AR - ACK en anglais), pouvant �tre utilis�s pour tirer les meilleures performances multim�dia de votre r�seau�: Burst ACK et Immediate ACK. Immediate ACK est le param�tre par d�faut. Nous vous le recommandons pour le fonctionnement normal du r�seau. Modifier le Mode AR de ��Immediate ACK�� � ��Burst ACK�� peut affecter le d�bit � longue port�e. Utilisez ��Immediate ACK�� lorsque la performance � grande distance est importante. Le Mode ��Burst ACK�� diminue le surd�bit en n'acquittant pas chaque paquet envoy� sur le r�seau. En pr�sence d'une bonne connexion entre le routeur et le client, le mode ��Burst ACK�� peut am�liorer le d�bit. Si une application, telle que le t�l�chargement de contenu vid�o en temps r�el, requiert une bande passante maximale, utilisez le mode ��Burst ACK��. Rappelez-vous que la performance � grande port�e sera affect�e par l'utilisation du mode ��Burst ACK��.";
hlp_87 = "Configuration du QoS (Quality of Service)";
hlp_88 = "Le QoS s'assure que les donn�es prioritaires sur votre r�seau, telles que le contenu multim�dia et la Voix sur IP (VoIP), ne soient pas ��contamin�es�� par les donn�es transmises sur votre r�seau. Bas� sur la norme 802.11e, vous pouvez activer/d�sactiver cette fonction ou vous pouvez choisir le mode d'accus� de r�ception de votre choix. Si vous comptez utiliser le transfert multim�dia en temps r�el ou la Voix sur IP sur votre r�seau, il est recommand� d'activer la fonction QoS.";
hlp_89 = "Chiffrement";
hlp_90 = "Using Encryption can help secure your wireless network. Only one type of security may be selected at a time. Therefore the customer must select a mode that is supported on all network devices on the wireless network. This Belkin product has 5 possible Security settings: 1) Disabled. No encryption is enabled in this mode. Open networks where all users are welcome sometimes prefer to not enable encryption. 2) WPA PSK - Home (no server). WPA (Wireless protected Access) PSK is a recent standards-based security technique where each packet of information is encrypted with a different code, or key. Since the key is constantly changing, WPA is very secure. There are two types of WPA, WPA-PSK (Pre-Shared Key), and WPA-Radius Server. Obviously the difference being that one requires a server and one does not. WPA-PSK is for home and small business users who do not have a server. The PSK encryption key is generated automatically from a string of characters or Pass Phrase. Obviously the biggest security risk in WPA PSK is if someone finds out your Pass Phrase. a. TKIP verses AES. WPA setup requires the user to select whether to encrypt using TKIP or AES. The WPA standard specifies TKIP, so that is the default. Additionally TKIP should provide better compatibility between wireless products from different vendors since many wireless products will never be upgraded to AES. AES is a new encryption technique based on the un-ratified 802.11i standard. New WPA standards are being considered using AES. Although AES is not as popular, some users may prefer to use this technique. Either way, all networks devices must use the same technique. b. Pre-Shared Key. Enter any word or phrase up to 40 characters. The same PSK must also be used for every other wireless network device on the network. Watch out for upper and lower case differences (\"n\" is different than \"N\".) Remember, the easiest way to break your security is for someone to guess your PSK. 3) 128-bit WEP. Until recently, 128-bit WEP (Wired Equivalent Privacy) was the standard for wireless encryption. If not all of your wireless devices support WPA, 128bit WEP still offers very good security option. It will require you to enter hex numbers, or you can generate them automatically. 4) 64-bit WEP. Belkin only recommends 64-bit mode on networks where some devices do not support either WPA or 128bit WEP. 5) WPA - Radius Server. (This mode is accessed from the Advanced Button). WPA server is only for networks using a Radius Server. All parameter for this mode should be obtained from the administrator of your Radius Server. Unlike WPA PSK, WPA server passes the key from the server to the clients instead of generating it automatically.";//<=====Dave=====
hlp_91 = "Serveurs Virtuels";
hlp_92 = "Cette fonction vous permet d'acheminer, via le routeur et vers votre r�seau interne, les appels externes (Internet) de services tels qu'un serveur web (port 80), un serveur FTP (port 21) ou d'autres applications. Parce que vos ordinateurs internes sont prot�g�s par le pare-feu, les machines provenant de l'Internet ne peuvent acc�dez � ceux-ci puisqu'ils sont ��invisibles��. Si vous devez configurer la fonction de Serveur virtuel pour une application particuli�re, vous devez contacter le fabricant de votre application et d�terminer quels param�tres de ports sont n�cessaires. Pour saisir manuellement les param�tres, entrez l'adresse IP dans le champ fourni pour la machine (serveur) interne, le type de port (TCP ou UDP), s�lectionnez les ports publics du LAN qui doivent �tre pass�s, s�lectionner ��Enable [Activer]�� et cliquez sur �tablir Vous pouvez seulement faire passer un seul port par adresse IP interne. L'ouverture des ports de votre pare-feu risque de compromettre la s�curit� de votre r�seau. Vous pouvez facilement activer ou d�sactiver cette fonction. Il est recommand� de d�sactiver cette fonction lorsque vous n'utilisez pas une application sp�cifique.";
hlp_93 = "Utilisation du serveur DNS dynamique";
hlp_94 = "Le service DNS Dynamique vous permet d'attribuer une adresse IP dynamique � un nom d'h�te fixe parmi ceux offerts par DynDNS.org, ce qui vous permet d'acc�der � vos ordinateurs � partir de maints endroits sur Internet. DynDNS.org offre ce service � la communaut� des Internautes, gratuitement, pour jusqu'� cinq noms d'h�te.<br><br>Le service DNS Dynamique est id�al pour les sites web maison, les serveurs de fichiers, ou pour vous faciliter l'acc�s � votre PC ou aux fichiers stock�s sur votre PC lorsque vous �tes au travail. Le service garantit que votre nom d'h�te pointe toujours vers votre adresse IP, peut importe si votre FAI modifie celle-ci. Lorsque votre adresse IP change, vos amis et associ�s peuvent toujours vous retrouver en visitant votrenom.dyndns.org�!<Br><br>Inscrivez-vous gratuitement et obtenez votre nom d'h�te DNS Dynamique � http://www.dyndns.org.<Br><br><b>Configuration du client DNS Dynamique du routeur</b><br><br>Inscrivez-vous gratuitement et obtenez votre nom d'h�te DNS Dynamique � http://www.dyndns.org.<br><br><b>Configuration du client DNS Dynamique du routeur</b><br>Vous devez vous inscrire au service gratuit de mise � jour de DynDNS.org avant d'utiliser cette fonction. Apr�s vous �tre inscrit, veuillez suivre les �tapes ci-dessous.<br>1.Entrez votre nom d'utilisateur DynDNS.org dans le champ ��User Name [Nom d'utilisateur]�� (1).<br>2.Entrez votre mot de passe DynDNS.org dans le champ ��Password [Mot de passe]�� (2).<br>3.Entrez votre nom d'utilisateur DynDNS.org dans le champ ��User Name [Nom d'utilisateur]�� (3).<Br>4.Cliquez sur ��Update Dynamic DNS [Mise � jour DNS Dynamique]�� pour mettre � jour votre adresse IP.<Br>Lorsque votre FAI modifie l'adresse IP qui vous est attribu�e, le routeur s'occupe de la mise � jour des serveurs DynDNS.org, avec votre nouvelle adresse IP. Vous pouvez �galement le faire manuellement, en cliquant sur le bouton ��Update Dynamic DNS [Mise � jour DNS Dynamique]�� (4)."; 
hlp_95 = "Filtres d'IP des clients";
hlp_96 = " Le Routeur peut �tre configur� de sorte � limiter l'acc�s de certains ordinateurs � Internet, au courrier �lectronique et autres fonctions r�seaux, � des jours et des heures donn�s. La restriction peut s'appliquer � un seul ordinateur, � un groupe d'ordinateurs ou � plusieurs ordinateurs. Par exemple, pour limiter l'acc�s � Internet � un ordinateur particulier, entrez l'adresse IP de l'ordinateur dont vous d�sirez contr�ler l'acc�s dans les champs IP. Ensuite, entrez 80 et 80 dans les champs de ports. S�lectionnez TCP. S�lectionnez Bloquer. Vous pouvez aussi s�lectionner Toujours pour bloquer l'acc�s en tout temps. S�lectionnez le jour du d�but en haut, l'heure du d�but en haut, le jour de fin en bas. Cliquez sur ��Enregistrer les Modifications��. L'ordinateur � l'adresse IP que vous avez sp�cifi�e ne pourra dor�navant plus acc�der � l'Internet aux heures sp�cifi�es. Remarque�: Assurez-vous d'avoir s�lectionn� le fuseau horaire appropri� sous Utilitaires > Param�tres du Syst�me > Fuseau Horaire.";
hlp_97 = "Filtrage des adresses MAC";
hlp_98 = "The MAC Address Filter is a powerful security feature that allows you to specify which computers are allowed on the network. Any computer attempting to access the network that is not specified in the filter list will be denied access. When you enable this feature, you must enter the MAC address of each client on your network to allow network access to each or copy the MAC address by selecting the name of the computer from the \"DHCP Client List\". To enable this feature, select \"Enable\". Next, click \"Apply Changes\" to save the settings.";//<=====Dave=====
hlp_99 = "Zone DMZ";
hlp_100 = "If you have a client PC that cannot run an Internet application properly from behind the firewall, you can open the client up to unrestricted two-way Internet access. This may be necessary if the NAT feature is causing problems with an application such as a game or video conferencing application. Use this feature on a temporary basis. The computer in the DMZ is not protected from hacker attacks. To put a computer in the DMZ, enter the last digits of its LAN IP address in the Static IP field and click \"Apply Changes\" for the change to take effect.";//<=====Dave=====
hlp_101 = "Mot de passe Administrateur";
hlp_102 = " Le routeur est livr� SANS mot de passe d�fini. Si par souci de s�curit� vous d�sirer ajouter un mot de passe, vous pouvez le configurer ici. Conservez votre mot de passe dans un endroit s�r puisque vous en aurez besoin lorsque vous voudrez vous connecter au routeur par la suite. Nous recommandons aussi l'ajout d'un mot de passe si vous pr�voyez utiliser la fonction de gestion � distance du routeur. L'option de temporisation de la connexion vous permet de d�terminer la plage horaire pendant laquelle vous pouvez �tre connect� au niveau de l'interface de configuration avanc�e du routeur. La temporisation d�bute lorsqu'il n'y a plus d'activit�. Par exemple, vous avez apport� des modifications au niveau de l'interface de configuration �volu�e, puis vous avez quitt� l'ordinateur sans cliquer sur \"D�connexion\". En supposant que vous ayez param�tr� la temporisation � 10�minutes, votre connexion prendra fin 10�minutes apr�s votre d�part. Vous devrez de nouveau vous connecter au routeur pour proc�der � d'autres modifications. L'option de temporisation de la connexion sert � des fins de s�curit�. La valeur par d�faut est 10�minutes. Prenez note qu'un seul ordinateur � la fois peut �tre connect� � l'interface de configuration avanc�e du routeur.";
hlp_103 = "Activer la NAT";
hlp_104 = "Avant d'activer cette fonction, ASSUREZ-VOUS D'AVOIR AJOUT� UN MOT DE PASSE ADMINISTRATEUR. La traduction d'adresses r�seau (Network Address Translation, NAT) est la m�thode qui permet au routeur de partager une seule adresse IP attribu�e par le FAI avec les autres ordinateurs du r�seau. Cette fonction ne devrait �tre utilis�e que par des utilisateurs avanc�s. Cette fonction ne devrait �tre utilis�e que si votre FAI vous attribu� de multiples adresses IP, ou vous devrez d�sactiver la NAT pour acc�der aux configurations avanc�es du syst�me.  Si vous disposez d'une seule adresse IP et si vous d�sactivez le NAT, les ordinateurs de votre r�seau ne pourront pas acc�der � Internet. D'autres probl�mes peuvent aussi survenir. La d�sactivation NAT d�sactive les fonctions de votre pare-feu.";
hlp_105 = "UPnP";
hlp_106 = "L'UPnP (Universal Plug-and-Play) est une technologie qui offre un fonctionnement transparent de la messagerie vocale et vid�o, des jeux, et d'autres applications compatibles avec l'UPnP. Certaines applications n�cessitent que le pare-feu du routeur soit configur� selon certains param�tres pour fonctionner correctement. Pour ce faire, vous devez habituellement ouvrir des ports TCP et UDP, et parfois m�me configurer des ports de d�clenchement. Une application qui est compatible avec l'UPnP poss�de la capacit� de communiquer avec le routeur, lui indiquant la mani�re dont le pare-feu doit �tre configur�. Le routeur est livr� avec la fonction UPnP d�sactiv�e. Si vous utilisez une application qui est compatible avec l'UPnP, et si vous d�sirez b�n�ficier des avantages de l'UPnP, vous pouvez activer la fonction UPnP. S�lectionnez simplement l'option \"Activer\" dans la section \"�Activation de l'UPnP\" dans la page Utilitaires. Cliquez sur \"Appliquer les modifications\" pour enregistrer les modifications. ";
hlp_107 = "Notification automatique de mise � jour du microprogramme";
hlp_108 = " Le Routeur poss�de la capacit� intrins�que de v�rifier automatiquement s'il existe une nouvelle version du microprogramme et vous avertit lorsque la nouvelle version est disponible. Lorsque vous vous connectez � l'interface avanc�e du routeur, le routeur proc�dera � la recherche d'une nouvelle version du micrologiciel, si celle-ci est disponible. Vous serez averti lorsqu'une une nouvelle version du micrologiciel est disponible. Vous pouvez choisir de t�l�charger cette nouvelle version ou de l'ignorer. Le routeur est livr� avec cette fonction d�sactiv�e. Si vous voulez l'activer, s�lectionnez \"Activer\" et cliquez sur \"Enregistrer les Modifications\".";
hlp_109 = "Gestion � distance";
hlp_110 = "La gestion � distance vous permet d'apporter des changements aux param�tres du routeur o� que vous soyez sur Internet. Il existe deux m�thodes pour g�rer votre routeur � distance. La premi�re m�thode consiste � permettre l'acc�s au routeur � partir de l'Internet en s�lectionnant \"N'importe quelle adresse IP peut g�rer le routeur � distance\". Lorsque vous aurez entr� votre adresse IP WAN depuis un ordinateur sur Internet, un �cran de connexion appara�tra. Vous devrez y entrer le mot de passe du routeur. La deuxi�me m�thode consiste � permettre � une adresse IP sp�cifique de g�rer le routeur � distance. Cette m�thode est la plus s�curitaire, mais la moins pratique. Pour y avoir recours, entrez l'adresse IP autoris�e � acc�der au routeur dans le champ fourni � cet effet, puis s�lectionnez \"Seule cette adresse IP est autoris�e � g�rer le routeur � distance\". Avant d'activer cette fonction, nous vous CONSEILLONS VIVEMENT de d�finir un mot de passe d'administrateur. Si vous laissez le mot de passe vide, vous autorisez potentiellement des intrusions sur le routeur.";
hlp_111 = "WLAN";
hlp_112 = "Acronyme de Wireless Local Area Network (r�seau local sans fil). R�seau local qui relie des ordinateurs proches entre eux via des ondes radio (comme 802.11b)";
hlp_113 = "Blocage du Ping ICMP";
hlp_114 = " Les pirates informatiques utilisent une technique appel�e Pinging pour d�nicher sur Internet. En �mettant un ping sur une certaine adresse IP et en recevant une r�ponse de celle-ci, un pirate peut savoir qu'il a un poste � pirater. Lpouvez configurer le routeur de sorte qu'il ignore un ping ICMP venant de l'ext�rieur. Ceci rehausse le niveau de s�curit� de votre routeur. Pour d�sactiver la r�ponse au ping, s�lectionnez \"Blocage du ping ICMP\" et cliquez sur \"Enregistrer les modifications\". Le routeur ignorera un ping ICMP. ";
hlp_115 = "Mode Prot�g� ";
hlp_116 = " NOTE�: Dans la majorit� des cas, vous obtiendrez de meilleures performances (d�bit) avec le Mode Prot�g� �tant D�sactiv�. Si vous travaillez dans un environnement avec un trafic 802.11b TR�S DENSE ou subissez des interf�rences, vous obtiendrez de meilleures performances avec le Mode Prot�g� �tant Activ�.";
hlp_117 = "D�finition d'un fuseau horaire";
hlp_118 = " Le routeur harmonise le temps en se connectant � un serveur SNTP (Simple Network Time Protocol). Ceci lui permet de synchroniser  l'horloge du syst�me avec l'Internet plan�taire. Lhorloge ainsi synchronis�e est utilis�e par le routeur pour garder un journal de connexions et pour contr�ler le filtrage des clients. S�lectionnez le fuseau horaire du pays dans lequel vous r�sidez. Si vous r�sidez dans une r�gion qui applique l'horaire d'�t�, cochez la case en regard de l'option \"Appliquer les horaires d'�t� \".L'horloge du syst�me peut ne pas �tre mise � jour imm�diatement. Laissez au moins 15�minutes au routeur pour contacter les serveurs sur Internet et recevoir une r�ponse. Vous ne pouvez pas modifier l'horloge vous-m�me. ";
hlp_119 = "Wi-Fi Multimedia (WMM)";
hlp_120 = "This feature enables the Quality of Service (QoS) function that is used for multimedia applications, such as Voice-over-IP (VoIP) and video. This allows the network packets of the multimedia application to have priority over regular data network packets, allowing multimedia applications to run smoother and with fewer errors.";
hlp_121 = "WMM No-Acknowledgement";
hlp_122 = "No-Acknowledgement refers to the acknowledge policy used at the MAC level. Enabling no-acknowledgement can result in more efficient throughput but higher error rates in a noisy Radio Frequency (RF) environment.";

// -- Restore factory defaults Successfully --
utfrds_1 = "Restauration des param�tres par d�faut du constructeur r�ussie";
utfrds_2 = "Veuillez attendre que le t�moin d'alimentation cesse de clignoter.";

// -- Reset Successfully --
utrs_1 ="Initialisation R�ussie";
utrs_2 ="Veuillez attendre que le t�moin d'alimentation cesse de clignoter.";
utrs_3 ="Le Routeur red�marre";
utrs_4 ="secondes restantes.";


// -- Restored Settings Successfully --
utrss_1 ="R�tablissement des param�tres r�ussi";
utrss_2 ="Veuillez attendre que le t�moin d'alimentation cesse de clignoter.";

// -- Apply -
apply_1 = " Enregistrement des modifications ";
apply_2 = " Enregistrement des modifications. Veuillez patienter....... ";


}
