void reserverSentence(const char* sentence, int len, char sep)
{
    int *index_mark = new int[len]();
    int word_num = 1;
    index_mark[0] = -1;
    for(int i = 0; i < len; i++) {
        if(sentence[i] == ' ') {
            index_mark[word_num] = i;
            word_num++;
        }
    }

    char * word;
    int word_start, word_len;
    index_mark[word_num] = len;
    word_num++;
    for(int i = word_num - 1; i > 0; i--) {
        word_start = index_mark[i - 1] + 1;
        word_len = index_mark[i] - word_start;
        word = new char[word_len + 1]();
        memcpy(word, sentence + word_start, word_len);
        cout<<word;
        if(i != 1) {
            cout<<" ";
        }
        delete[] word;
    }
    cout<<sep<<endl;
    delete[] index_mark;
}
void reserverSentences(const char* sentences, int len){
    int old_pos = -1;
    for(int i = 0; i < len; i++) {
        if(sentences[i] == '.' || sentences[i] == '?' || sentences[i] == '!') {
            reserverSentence(sentences + old_pos + 1, i - old_pos - 1, sentences[i]);
            old_pos = i;
        }        
    }
}

int _tmain(int argc, _TCHAR* argv[])
{    
    cout<<"Enter a sentence"<<endl;
    string line;
    getline(cin, line);
    reserverSentences(line.c_str(), line.size());
    system("pause");
    return 0; 
}