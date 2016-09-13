{\rtf1\ansi\ansicpg1252\cocoartf1187\cocoasubrtf400
{\fonttbl\f0\fnil\fcharset0 Noteworthy-Light;}
{\colortbl;\red255\green255\blue255;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\sa300

\f0\fs30 \cf0 \'a0 \'a0 char a[10],b[10];\
\'a0 \'a0 int i,j,result;\
\'a0 \'a0 int alen,blen;\
\'a0 \'a0 printf("Enter first string");\
\'a0 \'a0 gets(a);\
\'a0 \'a0 printf("Enter second string");\
\'a0 \'a0 gets(b);\
\'a0 \'a0 puts(a);\
\'a0 \'a0 puts(b);\
\'a0 \'a0 alen=strlen(a);\
\'a0 \'a0 blen=strlen(b);\
\'a0 \'a0 printf("\\n a = %d, b = %d",alen,blen);\
\'a0 \'a0 if(alen != blen)\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 printf("enter again");\
\'a0 \'a0 \'a0 \'a0 exit(0);\
\'a0 \'a0 \}\
\'a0 \'a0 if(alen == blen)\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 for(i=0;i<alen;i++)\
\'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 for(j=0;j<blen;j++)\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 while(i != j)\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 if(a[i] == a[j])\
\'a0\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 if(b[i] == b[j])\
\'a0\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 a[i]=b[i];\
\'a0\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 else\
\'a0\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("Nope");\
\'a0\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0\
\'a0\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 if(a[i] != a[j])\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 if(b[i] != b[j])\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 a[i]=b[i];\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 else\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("Nope");\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \}\
\'a0 \'a0 result=strcmp(a,b);\
\'a0 \'a0 if(result==0)\
\'a0 \'a0 \'a0 \'a0 printf("yay");\
}