//
//  SecenceLink.h
//  algothrime
//
//  Created by 韩志峰 on 2019/7/31.
//  Copyright © 2019 韩志峰. All rights reserved.
//

#ifndef SecenceLink_h
#define SecenceLink_h

#include <stdio.h>
/*线性表
 1.存储密度高
 2.物理地址连续 逻辑连续
 3.插入删除元素大片记录移动，效率低下
 */
/*
 链表两个元素逻辑上相邻  移动的是指向记录的指针
 */
#define maxSize 1024

typedef struct {
    int data[maxSize];
    int last;
}sqlite, *sqliteP;

void creatLink(sqliteP L);
void insertLink(sqliteP L, int no, int data);
void clearLink(sqliteP L);
void deletLink(sqliteP l, int no);
int locateLink(sqlite l, int no);
#endif /* SecenceLink_h */
