#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <windows.h>

struct data_mobil {
	char plat[7];
	int jenismobil;
	int layanan[3];
	int jalur;
	struct data_mobil *next;
}*head1=NULL,*head2=NULL,*head3=NULL,*head4=NULL,*curr,*temp;

//Untuk menyimpan data di queue
void masukindata(){
	temp=(struct data_mobil*)malloc(sizeof(struct data_mobil));
	printf("Masukan Plat: ");
	scanf("%s",&temp->plat);
	printf("Jenis Mobil \n1.Kecil (Agya,Jazz,dll.) \n2.Sedang (Avanza,Rush,BRV,dll.) \n3.Besar (Alphard,Vellfire,Fortuner,dll.) \n4.Truck \nMasukan jenis mobil: ");
	scanf("%d",&temp->jenismobil);
	temp->next=NULL;
	system("CLS");
	int choice;
	if (temp->jenismobil == 4){
		temp->jalur=4;
		while (1){
			printf("\nCuci?");
			printf("\n1 = Ya dan 0 = Tidak : ");
			scanf("%d",&choice);
			if (choice == 1){
				temp->layanan[0] = 1;
				break;
			}
			else if (choice == 0){
				temp->layanan[0] = 0;
				break;
			}
			else {
				printf("Masukkan angka 1 atau 0");
			}
		}
		while (1){
			printf("\nVakum?");
			printf("\n1 = Ya dan 0 = Tidak : ");
			scanf("%d",&choice);
			if (choice == 1){
				temp->layanan[1] = 1;
				break;
			}
			else if (choice == 0){
				temp->layanan[1] = 0;
				break;
			}
			else {
				printf("Masukkan angka 1 atau 0");
			}
		}
		if (!head4){
            head4=temp;
            system("CLS");
        }
        else {
            curr=head4;
            while (curr->next!=NULL){
                curr=curr->next;
            }
            curr->next=temp;
            system("CLS");
        }
	}
    else if (temp->jenismobil != 4 && temp->jenismobil != 3){
    	while (1){
			printf("\nCuci?");
			printf("\n1 = Ya dan 0 = Tidak : ");
			scanf("%d",&choice);
			if (choice == 1){
				temp->layanan[0] = 1;
				break;
			}
			else if (choice == 0){
				temp->layanan[0] = 0;
				break;
			}
			else {
				printf("Masukkan angka 1 atau 0");
			}
		}
		while (1){
			printf("\nVakum?");
			printf("\n1 = Ya dan 0 = Tidak : ");
			scanf("%d",&choice);
			if (choice == 1){
				temp->layanan[1] = 1;
				break;
			}
			else if (choice == 0){
				temp->layanan[1] = 0;
				break;
			}
			else {
				printf("Masukkan angka 1 atau 0");
			}
		}
		while (1){
			printf("\nPoles?");
			printf("\n1 = Ya dan 0 = Tidak : ");
			scanf("%d",&choice);
			if (choice == 1){
				temp->layanan[2] = 1;
				break;
			}
			else if (choice == 0){
				temp->layanan[2] = 0;
				break;
			}
			else {
				printf("Masukkan angka 1 atau 0");
			}
		}
    	printf("\nPilih jalur 1/2/3: ");
    	scanf("%d",&temp->jalur);
    	if (temp->jalur==1){
        	if (!head1){
            	head1=temp;
            	system("CLS");
        	}
        	else {
            	curr=head1;
            	while (curr->next!=NULL){
                	curr=curr->next;
            	}
            	curr->next=temp;
            	system("CLS");
        	}
    	}
    	else if (temp->jalur==2){
        	if (!head2){
            	head2=temp;
            	system("CLS");
        	}
        	else {
            	curr=head2;
            	while (curr->next!=NULL){
                	curr=curr->next;
            	}
            	curr->next=temp;
            	system("CLS");
        	}
    	}
    	else if (temp->jalur==3){
        	if (!head3){
            	head3=temp;
            	system("CLS");
        	}
        	else {
            	curr=head3;
            	while (curr->next != NULL){
                	curr=curr->next;
            	}
            	curr->next=temp;
            	system("CLS");
        	}
    	}
	}
	else if (temp->jenismobil == 3){
		temp->jalur=4;
		while (1){
			printf("\nCuci?");
			printf("\n1 = Ya dan 0 = Tidak : ");
			scanf("%d",&choice);
			if (choice == 1){
				temp->layanan[0] = 1;
				break;
			}
			else if (choice == 0){
				temp->layanan[0] = 0;
				break;
			}
			else {
				printf("Masukkan angka 1 atau 0");
			}
		}
		while (1){
			printf("\nVakum?");
			printf("\n1 = Ya dan 0 = Tidak : ");
			scanf("%d",&choice);
			if (choice == 1){
				temp->layanan[1] = 1;
				break;
			}
			else if (choice == 0){
				temp->layanan[1] = 0;
				break;
			}
			else {
				printf("Masukkan angka 1 atau 0");
			}
		}
		while (1){
			printf("\nPoles?");
			printf("\n1 = Ya dan 0 = Tidak : ");
			scanf("%d",&choice);
			if (choice == 1){
				temp->layanan[2] = 1;
				break;
			}
			else if (choice == 0){
				temp->layanan[2] = 0;
				break;
			}
			else {
				printf("Masukkan angka 1 atau 0");
			}
		}
		if (!head4){
            head4=temp;
            system("CLS");
        }
        else {
            curr=head4;
            while (curr->next!=NULL){
                curr=curr->next;
            }
            curr->next=temp;
            system("CLS");
        }
	}
}

//Untuk print queue sesuai head yang dipilih
void mobilditangani(){
	int choice;
	while (1){
		printf("Pilih jalur yang akan ditampilkan 1/2/3/4 : ");
		scanf("%d",&choice);
		system("CLS");
		if (choice == 1){
			if (!head1){
				printf("Jalur ini kosong\n");
				choice == 0;
				system("PAUSE");
				system("CLS");
				break;
			}
			else {
				temp = head1;
				break;
			}
		}
		else if (choice == 2){
			if (!head2){
				printf("Jalur ini kosong\n");
				choice == 0;
				system("PAUSE");
				system("CLS");
				break;
			}
			else {
				temp = head2;
				break;
			}
		}
		else if (choice == 3){
			if (!head3){
				printf("Jalur ini kosong\n");
				choice == 0;
				system("PAUSE");
				system("CLS");
				break;
			}
			else {
				temp = head3;
				break;
			}
		}
		else if (choice == 4){
			if (!head4){
				printf("Jalur ini kosong\n");
				choice == 0;
				system("PAUSE");
				system("CLS");
				break;
			}
			else {
				temp = head4;
				break;
			}
		}
	}
			printf("No. Plat: %s",temp->plat);
			printf("\nJenis Mobil (1.Kecil, 2.Sedang, 3.Besar, 4.Truck): %d",temp->jenismobil);
			printf("\nJalur ke-%d\n",temp->jalur);
			temp=temp->next;
			system("PAUSE");
			system("CLS");
}

//Untuk delete head di queue yang dipilih
void dequeue(){
	struct data_mobil *del;
	int choice;
	printf("Pilih jalur yang ingin diselesaikan 1/2/3/4 : ");
	scanf("%d",&choice);
	if (choice == 1){
		del = head1;
        head1 = head1->next;
        free(del);
        printf("Mobil telah diselesaikan\n");
        system("PAUSE");
		system("CLS");
	}
	else if (choice == 2){
		del = head2;
        head2 = head2->next;
        free(del);
        printf("Mobil telah diselesaikan\n");
        system("PAUSE");
		system("CLS");
	}
	else if (choice == 3){
		del = head3;
        head3 = head3->next;
        free(del);
        printf("Mobil telah diselesaikan\n");
        system("PAUSE");
		system("CLS");
    }
    else if (choice == 4){
		del = head4;
        head4 = head4->next;
        free(del);
        printf("Mobil/Truck telah diselesaikan\n");
        system("PAUSE");
		system("CLS");
	}
}

//Untuk menghitung biaya
int biaya(int service[3],int jenis){
	int total;
	if (jenis == 4){
		if (service[0] == 1){
			total = total+70000;
		}
		if (service[1] == 1){
			total = total+40000;
		}
	}
	else if (jenis == 1){
		if (service[0] == 1){
			total = total+50000;
		}
		if (service[1] == 1){
			total = total+35000;
		}
		if (service[2] == 1){
			total = total+125000;
		}
	}
	else if (jenis == 2){
		if (service[0] == 1){
			total = total+60000;
		}
		if (service[1] == 1){
			total = total+40000;
		}
		if (service[2] == 1){
			total = total+150000;
		}
	}
	else if (jenis == 3){
		if (service[0] == 1){
			total = total+70000;
		}
		if (service[1] == 1){
			total = total+50000;
		}
		if (service[2] == 1){
			total = total+200000;
		}
	}
	return total;
}

//Untuk menghitung waktu
int waktu(int service[3],int jenis){
	int total;
	if (jenis == 4){
		if (service[0] == 1){
			total = total+60;
		}
		if (service[1] == 1){
			total = total+30;
		}
	}
	else if (jenis == 1){
		if (service[0] == 1){
			total = total+30;
		}
		if (service[1] == 1){
			total = total+15;
		}
		if (service[2] == 1){
			total = total+300;
		}
	}
	else if (jenis == 2){
		if (service[0] == 1){
			total = total+30;
		}
		if (service[1] == 1){
			total = total+15;
		}
		if (service[2] == 1){
			total = total+300;
		}
	}
	else if (jenis == 3){
		if (service[0] == 1){
			total = total+60;
		}
		if (service[1] == 1){
			total = total+30;
		}
		if (service[2] == 1){
			total = total+600;
		}
	}
	return total;
}

//Untuk menunjukan data transaksi
void transaksi(){
	int choice;
	while (1){
		printf("Transaksi di jalur mana yang ingin ditampilkan 1/2/3/4 ? ");
		scanf("%d",&choice);
		if (choice == 1){
			if (!head1){
				printf("Jalur ini kosong\n");
				choice == 0;
				system("PAUSE");
				system("CLS");
				break;
			}
			else {
				temp = head1;
				break;
			}
		}
		else if (choice == 2){
			if (!head2){
				printf("Jalur ini kosong\n");
				choice == 0;
				system("PAUSE");
				system("CLS");
				break;
			}
			else {
				temp = head2;
				break;
			}
		}
		else if (choice == 3){
			if (!head3){
				printf("Jalur ini kosong\n");
				choice == 0;
				system("PAUSE");
				system("CLS");
				break;
			}
			else {
				temp = head3;
				break;
			}
		}
		else if (choice == 4){
			if (!head4){
				printf("Jalur ini kosong\n");
				choice == 0;
				system("PAUSE");
				system("CLS");
				break;
			}
			else {
				temp = head4;
				break;
			}
		}
	}
			if (temp->jenismobil != 4){
				printf("No. Plat: %s",temp->plat);
				printf("\nJenis Mobil (1.Kecil, 2.Sedang, 3.Besar, 4.Truck): %d",temp->jenismobil);
				printf("\nCuci (1.Ya 2.Tidak) : %d",temp->layanan[0]);
				printf("\nVakum (1.Ya 2.Tidak) : %d",temp->layanan[1]);
				printf("\nPoles (1.Ya 2.Tidak) : %d",temp->layanan[2]);
				int total = biaya(temp->layanan,temp->jenismobil);
				printf("\nTotal biaya : %d\n",total);
				int total1 = waktu(temp->layanan,temp->jenismobil);
				printf("Total waktu (Dalam Menit) : %d\n",total1);
				temp=temp->next;
				system("PAUSE");
				system("CLS");
			}
			else if (temp->jenismobil == 4){
				printf("No. Plat: %s",temp->plat);
				printf("\nJenis Mobil (1.Kecil, 2.Sedang, 3.Besar, 4.Truck): %d",temp->jenismobil);
				printf("\nCuci (1.Ya 2.Tidak) : %d",temp->layanan[0]);
				printf("\nVakum (1.Ya 2.Tidak) : %d",temp->layanan[1]);
				int total = biaya(temp->layanan,temp->jenismobil);
				printf("\nTotal biaya : %d\n",total);
				int total1 = waktu(temp->layanan,temp->jenismobil);
				printf("Total waktu (Dalam Menit) : %d\n",total1);
				temp=temp->next;
				system("PAUSE");
				system("CLS");
			}
}

//Untuk menyimpan data transaksi di txt file
void save(){
	int choice;
	while (1){
		printf("Transaksi di jalur mana yang ingin disave 1/2/3/4 ? ");
		scanf("%d",&choice);
		if (choice == 1){
			if (!head1){
				printf("Jalur ini kosong\n");
				choice == 0;
				system("PAUSE");
				system("CLS");
				break;
			}
			else {
				temp = head1;
				break;
			}
		}
		else if (choice == 2){
			if (!head2){
				printf("Jalur ini kosong\n");
				choice == 0;
				system("PAUSE");
				system("CLS");
				break;
			}
			else {
				temp = head2;
				break;
			}
		}
		else if (choice == 3){
			if (!head3){
				printf("Jalur ini kosong\n");
				choice == 0;
				system("PAUSE");
				system("CLS");
				break;
			}
			else {
				temp = head3;
				break;
			}
		}
		else if (choice == 4){
			if (!head4){
				printf("Jalur ini kosong\n");
				choice == 0;
				system("PAUSE");
				system("CLS");
				break;
			}
			else {
				temp = head4;
				break;
			}
		}
	}
	FILE * Data;
    Data = fopen("datatransaksi.txt", "a");
    fputs(temp->plat,Data);
    fputs("\t\t",Data);
    fprintf(Data,"%d",temp->jenismobil);
    fputs("\t\t",Data);
    fprintf(Data,"%d",temp->jalur);
    fputs("\t\t",Data);
    int total = biaya(temp->layanan,temp->jenismobil);
    fprintf(Data,"%d",total);
    fputs("\t\t",Data);
    int total1 = waktu(temp->layanan,temp->jenismobil);
    fprintf(Data,"%d",total1);
    fputs("\t\n",Data);
    fclose(Data);
    printf("Data telah disimpan\n");
    system("PAUSE");
	system("CLS");
}


int main(){
	int pilihan;
	do{
		printf("Wash-Wash \nMenu: \n 1.Daftar Mobil \n 2.Mobil Yang Ditangani \n 3.Mobil Selesai \n 4.Lihat Transaksi \n 5.Exit");
		printf("\nMasukkan pilihan anda : ");
		scanf("%d",&pilihan);
		system("CLS");
		if (pilihan == 1){
			masukindata();
		}
		else if (pilihan == 2){
			mobilditangani();
		}
		else if (pilihan == 3){
			dequeue();
		}
		else if (pilihan == 4){
			int choice;
			printf("Menu: \n 1.Lihat Transaksi \n 2.Simpan Transaksi");
			printf("\nMasukkan pilihan anda : ");
			scanf("%d",&choice);
			system("CLS");
			if (choice == 1){
				transaksi();
			}
			else if (choice == 2){
				save();
			}
		}
		else if (pilihan == 5){
			break;
		}
	}
	while (pilihan != 5);
}
