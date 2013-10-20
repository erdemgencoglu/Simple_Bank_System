	/*12253030_Erdem Gençoğlu_Algoritmalar ve Programlama Ödev1*/
	//Program VisualStudio2010 ile hazırlanmıştır.
	//C dili kullanılarak yazılmıştır.
	
	/*Kullanıcı adı=a*/
	/*Parola=81334*/
	#include <stdio.h>	/*Standart giriş çıkış fonk. bulunduğu kütüphanemz.*/
	#include <stdlib.h>	/*system("pause") komutunun bulunduğu kütüphanemiz. ;*/
	#include <conio.h>	/*getch(); komutunu içeren kütüphane.*/
	void main()
	{
	char KulAdi='a';	/*Burada sadece 1 karekter sorguladık birden fazla sorgulanmak istenirse dizi tanımlanarak yapılabilir.*/
	int	 Parola,secim;	/*int tipindeki değişkenlerimiz.*/
	int DgrHesap,Yatrlan,Cekilen,Gondrln,HespDgri=2500; /*Tanımladığımız diğer değişkenler.*/
	char tercih;
	printf("\t\t --------------------------------------- \n");	//
	printf("\t\t *                Eg Bank               *\n");	// Karşılama ekranımız.
	printf("\t\t --------------------------------------- \n\n");//
	printf("Lutfen kullanici adinizi ve parolanizi giriniz\n\n");	
	printf("Kullanici Adi : ");		/*Kullanıcı Sorgulama Ekranımız*/
	scanf("%c",&KulAdi);			/*Kullanıcı adı 'KulAdi' değişkeninin adresine yazılmıştır.*/
	printf("Parola : ");			/*Parola Sorgulama Ekranımız*/
	scanf("%d",&Parola);			/*Parola 'Parola' değişkeninin adresine yazılmıştır.*/		
	
	if(KulAdi =='a' && Parola==81334)/*2013 de if içerisine girmiyor tek = yazarsak kabul ediyor.*/
		{
		do{             //do-while döngü başlangıcı.
		system("cls");  //Ekranı temizleyen kodumuz.
		printf("\t\tHosgeldiniz\n");				
		printf(" ------------------------------------- \n");	//
		printf("| [1] Bakiye Sorgulama                |\n");	//
		printf("| [2] Para Yatirma                    |\n");	//	Menümüzün arayüzü
		printf("| [3] Para Cekme                      |\n");	// 
		printf("| [4] Farkli Bir Hesaba Para Gonderme |\n");	//
		printf("| [5] Cikis                           |\n");	//
		printf(" ------------------------------------- \n\n");	
		printf("Yapmak istediginiz islem icin (1,2,3,4,5) tuslarini kullanarak secim yapiniz :"); /**Kullanıcıdan seçim yapılması istenmiştir.*/
		scanf("%d",&secim); /*Yapılan secim 'secim' değişkenini adresine yazılmıştır.*/
		printf("\n");
		switch(secim)/*secim değiskenini sorgulayarak istenilen menüye girmeyi sağlar.*/
		{
			case 1: // case 1: de bakiye gösterimi yapılmıştır.
			printf("Hesabinizda = %d TL Bulunmaktadir.\n", HespDgri);	
			break;								

			case 2:	// case 2: de para yatırma menüsü ve işlemleri yapılmıştır.
			printf("\t\t\t--PARA YATIRMA--\n\n");				
			printf("Lutfen yatiracaginiz para miktarini giriniz: ");	
			scanf("%d",&Yatrlan);						
			HespDgri=HespDgri+Yatrlan;					
			printf("Hesabiniza %d TL yatirildi.\n",Yatrlan);		
			printf("Toplam kullanilabilir bakiyeniz=%d Tl dir.\n",HespDgri);			
			break;
			
			case 3:	// case 3: de para çekme menüsü ve işlemleri vardır ve case yapsının içinde 						
			printf("\t\t\t--PARA CEKME--\n\n");				 
			printf("Lutfen Cekeceginiz Para Miktarini Giriniz: ");	
			scanf("%d",&Cekilen);						
				if(Cekilen>HespDgri)/*if yapsında çekilen paranın büyüklüğü kontrol edilmiştir.*/
				{
				printf("Hesabinizda Yeteri Kadar Para Bulunmamaktadir.\n");			
				}
				else //else ye kullanıcının bakiyesi yeterli ise girer ve işlemler gerçekleşir. 
				{
				HespDgri=HespDgri-Cekilen;					
				printf("Hesabinizdan %d Tl cekilmistir.\n",Cekilen);		
				printf("Hesabinizda toplam kullanilabilir bakiye %d TL dir.\n",HespDgri);
				}
			break;
			case 4:	// case 4: de ise para gönderme ve işlemleri yapılmıştır.  
				printf("\t\t\t--PARA GONDERME--\n");				
				printf("Para gondereceginiz hesab numarasini giriniz:");	
				scanf("%d",&DgrHesap);						
				printf("Gondericeginiz para miktarini giriniz:");
				scanf("%d",&Gondrln);						
					if(Gondrln>HespDgri) /*Gönderilen paranın hesabımızdaki para ile karşılaştırılması yapılmıştır. */
					{
					printf("Hesabinizda Yeteri Kadar Para Bulunmamaktadir.\n");//Eğer bakiyemiz yeterli değilse bu kullanıcıya belirtilmiştir.					
					}
					else /*Bakiye yeterli ise bu yapıya girer ve işlemler yapılabilir.*/
					{
					printf("Hesabinizdan %d TL girmis oldugunuz hesaba gonderildi.\n",Gondrln);
					HespDgri=HespDgri-Gondrln;
					printf("Kalan Bakiyeniz %d Tl dir\n",HespDgri);
					}	
			break;
			case 5:	//Case 5: kullanıcı eğer işlem yapmak istemiyorsa seçilen kısımdır.																
				{					
				printf("Bizi tercih ettiginiz icin tesekkur ederiz.\n");	
				printf("Cikis isleminiz basariyla gerceklestirilmistir.\n");
				}														
				break;																	
		default: /*Case yapısı sonlandırıldı.*/
			printf("Seciminizi yanlis yaptiniz lutfen sonra tekrar deneyiniz:\n");//Girilen secim yanlış ise bu printf ile kullanıcıya bildirilmiştir.
		}		
		printf("\n");							
		printf("Yeni bir isleme devam etmek istiyormusunuz?\n");	
		printf("(e) veya (h) "); // Yeni işlem yapılma sorgusu
		printf("\n");							
		tercih=getch();							
			}
	while(tercih =='e');// while döngüsü tercih e olduğu sürece islemlerin sürekli tekrarlanmasını sağlar.
		}
	else /*Bu else kısımına kullanıcı adı ve parolanın yanlış girilmesi sonucu girer.*/
		{
			printf("\n");
			printf("Kullanici Adi veya Parolanizi Yanlis Girdiniz.!!!\n\nLutfen Tekrar Kontrol Ediniz!\n\n");//Sorgu kısmında yanlış parola veya kullanıcıadi girilmisse işleme devam etmez.						
		}	
	printf("\n");
	system("pause");/*Programın kapanması için bir tuşa basılması beklenir.*/																			  
	
	}
