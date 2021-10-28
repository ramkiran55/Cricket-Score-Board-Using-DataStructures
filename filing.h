void filing()
{
//    system("cls");
//    locate(20,8);
//    FILE *newfile,*filelist;
//    char filename[20];
//    char extension[]=".dat";
//    char filenamewithdirectory[]="Files//";
//    char filenamecheck[20];
//    char filenamecheckvar;
//    int i=0,flag=1;
//    filelist=fopen("Files//filelist.txt","a+");
//    if(filelist==NULL)
//    {
//        printf(" File Listing Error...");
//        exit(1);
//    }
//    while(flag==1)
//    {
//        if (flag==1)
//        {
//            printf("\nPlease enter the new file name:");
//            scanf(" %[^\n]",filename);
//            i=0;
//        }
//        rewind(filelist);
//        while(filenamecheckvar!=EOF)
//        {
//            filenamecheckvar=fgetc(filelist);
//            filenamecheck[i]=filenamecheckvar;
//            if(filenamecheckvar=='\n')
//            {
//                filenamecheck[i]='\0';
//                i=-1;
//                if(strcmp(filenamecheck,filename)==0)
//                {
//                    printf("Filename already exists.Please give new filename:");
//                    flag=1;
//                    break;
//                }
//            }
//            i++;
//            flag=0;
//        }
//    }
//        fseek(filelist,0,SEEK_END);
//        fprintf(filelist,"%s",filename);
//        fprintf(filelist,"\n");
//        fclose(filelist);
//        strcat(filename,extension);
//        strcat(filenamewithdirectory,filename);
//        strcpy(file,filenamewithdirectory);
//        newfile=fopen(filenamewithdirectory,"w");
//        if(newfile==NULL)
//        {
//            printf("File opening Error...");
//            exit(1);
//        }
//        printf("Creating file...\n");
//        Sleep(3000);
//        printf("File Created.");
//        Sleep(1000);
    }
