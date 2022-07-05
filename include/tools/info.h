// info.h

/**
 * @brief 生成一个给定类型ID
 * 
 * @param dest 储存ID的目标字符串
 * @param type ID类型，U-用户，G-商品，O-订单
 */
void genID(char* dest, char type);

/**
 * @brief 获取时间
 * 
 * @param dest 存储目标时间的字符串
 */
void getDate(char* dest);