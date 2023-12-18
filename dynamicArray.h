#ifndef __DYNAMIC_ARRAY_H
#define __DYNAMIC_ARRAY_H

typedef int ELEMENTTYPE;

/* 避免头文件重复包含 */
typedef struct dynamicArray
{
    ELEMENTTYPE *data;         /* 数组的空间 */
    int len;                   /* 数组的大小 */
    int capacity;              /* 数组的容量 */
} dynamicArray;

/* API */


/* 动态数组初始化 */
int dynamicArrayInit(dynamicArray *pArray);

/* 动态数组插入数据 */
int dynamicArrayInsertData(dynamicArray *pArray, ELEMENTTYPE val);

/* 动态数组插入数据，在指定位置插入 */
int dynamicArrayAppointPosInsertData(dynamicArray *pArray, int pos, ELEMENTTYPE val);

/* 动态数组修改指定位置的数据 */
int dynamicArrayModifyAppointPosData(dynamicArray *pArray, int pos, ELEMENTTYPE val);

/* 动态数组删除数据（默认情况下，删除最后末尾的数据）*/
int dynamicArrayDeleteData(dynamicArray *pArray);

/* 动态数组，删除指定位置的数据 */
int dynamicArrayDeleteAppointPosData(dynamicArray *pArray, int pos);

/* 动态数组的销毁 */
int dynamicArrayDestory(dynamicArray *pArray);

/* 获取数组的大小 */
int dynamicArrayGetSize(dynamicArray *pArray, int *pSize);

/* 获取数组的容量 */
int dynamicArrayGetCapacity(dynamicArray *pArray, int *pCapacity);


#endif