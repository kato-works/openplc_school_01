# openplc_school_01
Let's study OpenPLC!

フォルダ　openplc-runtime-dataを作成。

Docker上でランタイムを実行する必要あり。

ランタイム実行後は、左側メニュのDownloadボタンを押して、ランタイムをインストールする必要あり

Device - Configuration から、
- Compile Onlyのチェックを外す
- Deviceを、OpenPLC Runtime v4 を選択
- IP Addressを、localhostに選択
- Connect を押し、コンテナのユーザ・パスワードを入力（任意）

docker rm -f openplc-runtime  

docker run --rm --name openplc-runtime \
  -p 8443:8443 \
  -p 8080:8080 \
  --cap-add=SYS_NICE \
  --cap-add=SYS_RESOURCE \
  -v openplc-runtime-data:/run/runtime \
  ghcr.io/autonomy-logic/openplc-runtime:latest


練習問題

https://arrows-system.jp/work-book/