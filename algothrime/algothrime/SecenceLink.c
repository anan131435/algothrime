//
//  SecenceLink.c
//  algothrime
//
//  Created by 韩志峰 on 2019/7/31.
//  Copyright © 2019 韩志峰. All rights reserved.
//

#include "SecenceLink.h"
void creatLink(sqliteP L){
    int tmpData = 0;
    int tmpNo = 0;
    printf("输入第%d个元素",tmpNo);
    scanf("%d",&tmpData);
    while (tmpData != -1 &&  L -> last < maxSize) {
        L -> data[tmpNo] = tmpData;
        L -> last = tmpNo;
        L -> last ++;
        tmpNo ++;
        printf("输入第%d个元素",tmpNo);
        scanf("%d",&tmpData);
    }
}
void insertLink(sqliteP L, int i, int data){
    if( L -> last > maxSize){
        printf("error");
    }else if (i < 0 || i > L -> last){
        printf("error");
    }else{
        for (int j = L -> last; j > i; i --) {
            L->data[j + 1] = L ->data[j];
        }
        L ->data[i] = data;
        L ->last ++;
    }
}
void clearLink(sqliteP L){
    L ->last = -1;
}


