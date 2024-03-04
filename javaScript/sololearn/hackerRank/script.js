function findSubstring(s, k) {
  for (let i = 0; i < s; i++) {
    for (let j = 0; j < s; j++) {
      if (i === j) {
        console.log(i);
      }
    }
  }
}
function main() {
  const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

  const s = readLine();

  const k = parseInt(readLine().trim(), 10);

  const result = findSubstring(s, k);

  ws.write(result + "\n");

  ws.end();
}
