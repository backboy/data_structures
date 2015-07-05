#include "trie.h"
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define ALPH_SIZE 26
#define FFOR(i,a,b) for(i=a;i<b;i++)
#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
#define CHAR_TO_INDEX(c) ((int)c-(int)'a')
#define INDEX_TO_CHAR(c) ('a'+c)
typedef struct trie_node_struct trie_node_s;
struct trie_node_struct{
    int val;
    char c;
    trie_node_s* child[ALPH_SIZE];
    bool is_visited;
};
typedef struct trie_struct trie_s;
struct trie_struct{
    trie_node_s* root;
    int cnt;
};
trie_node_s* create_new_node(){

    trie_node_s *p_node=NULL;
    p_node=(trie_node_s*)malloc(sizeof(trie_node_s));
    if( p_node ){
        p_node->val=0;
        //p_node->is_visited=false;
        int i;
        FFOR(i,0,ALPH_SIZE)p_node->child[i]=NULL;
    }

    return p_node;


}
void insert_key(trie_s &trie, char key[]){
    int len;
    for(len=0;key[len];len++);
    trie.cnt++;
    trie_node_s* p_crawl=trie.root;
    int i;
    FFOR(i,0,len){
        int indx=CHAR_TO_INDEX(key[i]);
        if(!p_crawl->child[indx]){p_crawl->child[indx]=create_new_node();p_crawl->child[indx]->c=key[i];}
        p_crawl=p_crawl->child[indx];
    }
    p_crawl->val=trie.cnt;
    //printf("%d\n",p_crawl->val);

}
/*void dfs_visit_trie(trie_node_s *p_crawl){

    printf("%c",p_crawl->c);
    p_crawl->is_visited=true;
    int i;
    FFOR(i,0,ALPH_SIZE){
        if(p_crawl->child[i] && p_crawl->child[i]->is_visited==false){
                dfs_visit_trie(p_crawl->child[i]);

        }
    }
}
void dfs_trie(trie_s &trie){

    int i;
    trie_node_s* p_crawl=trie.root;
    FFOR(i,0,ALPH_SIZE){
        if(p_crawl->child[i] && p_crawl->child[i]->is_visited==false){

            dfs_visit_trie(p_crawl->child[i]);
            printf("\n");

        }
    }

}*/
bool search_trie(trie_s &trie,char key[]){

    int len;
    for(len=0;key[len];len++);
    trie_node_s* p_crawl=trie.root;
    int i;
    FFOR(i,0,len){
        int indx=CHAR_TO_INDEX(key[i]);
        if(!p_crawl->child[indx])break;
        p_crawl=p_crawl->child[indx];

    }
    //printf("%d ",p_crawl->val);
    return (i==len)?true:false;


}
int trie_main(){
    char keys[][8]={"the", "a", "there", "answer", "any", "by", "bye", "their"};
    //trie initialization
    trie_s trie;
    trie.root=create_new_node();
    trie.cnt=0;
    //
    int i;
    FFOR(i,0,ARRAY_SIZE(keys))insert_key(trie,keys[i]);
    //dfs_trie(trie);
    printf("%d\n",search_trie(trie,"there"));
    printf("%d\n",search_trie(trie,"amy"));
    printf("%d\n",search_trie(trie,"the"));
    printf("%d\n",search_trie(trie,"any"));
    printf("%d\n",search_trie(trie,"anss"));
    getch();
    return 0;
}
