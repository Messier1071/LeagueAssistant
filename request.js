import { response } from "express";
import http from "http"

export default function HttpRequest(url,callback){
  

    http.get(url, res => {
  let data = [];
  const headerDate = res.headers && res.headers.date ? res.headers.date : 'no response date';
  console.log('Status Code:', res.statusCode);
  console.log('Date in Response header:', headerDate);

  res.on('data', chunk => {
    data.push(chunk);
  });

  res.on('end', () => {
    console.log('Response ended: ');
    var user = JSON.parse(Buffer.concat(data).toString());
    //console.log(user);

    callback(user);
  });
  }).on('error', err => {
  console.log('Error: ', err.message);
  });



}



