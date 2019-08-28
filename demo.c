#include <stdio.h>
#include <string.h>

#define MAX_CHARS_TITLE 32
#define MAX_CHARS_PER_KEY_LINE 64
#define MAX_CHARS_PER_VALUE_LINE 130
#define MAX_SCREEN_LINE_WIDTH 22

char *g_toAddrs[] = {
    "addr1",
    "addr2",
    "addr3",
    "addr4",
};

char *g_fromAddrs[] = {
    "addr1",
    "addr2",
    "addr3",
    "addr4",
};

int txs_info_getData(char *title, int max_title_length, char *key, int max_key_length, char *value, int max_value_length, int page_index, int chunk_index, int *page_count_out, int *chunk_count_out)
{
    *page_count_out = 3;
    *chunk_count_out = 1;
    snprintf(title, max_title_length, "to:%s", g_toAddrs[page_index]);
    snprintf(key, max_key_length, "key:%s", g_toAddrs[page_index]);
    snprintf(value, max_value_length, "from:%s", g_fromAddrs[page_index]);

    return 0;
}

volatile char viewctl_DataKey[MAX_CHARS_PER_KEY_LINE];
volatile char viewctl_DataValue[MAX_CHARS_PER_VALUE_LINE];
volatile char viewctl_Title[MAX_SCREEN_LINE_WIDTH]; // 这一批变量。保存每次显示的数据内容

int viewctl_DetailsCurrentPage;
int viewctl_DetailsPageCount;
int viewctl_ChunksIndex;
int viewctl_ChunksCount;

int main(int argc, char const *argv[])
{

    txs_info_getData(
        (char *)viewctl_Title,
        sizeof(viewctl_Title),
        (char *)viewctl_DataKey,
        sizeof(viewctl_DataKey),
        (char *)viewctl_DataValue,
        sizeof(viewctl_DataValue),
        viewctl_DetailsCurrentPage,
        viewctl_ChunksIndex,
        &viewctl_DetailsPageCount,
        &viewctl_ChunksCount);

    return 0;
}
