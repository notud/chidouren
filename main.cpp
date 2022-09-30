int main() {
	int start = clock_t();
	srand(time(0));
	initgraph(WIDTH, HEIGHT);
	bkinit();
	initplayer();
	point(0 + blockwidth / 2, WIDTH - blockwidth / 2, HEIGHT - blockwidth / 2, 0 + blockwidth / 2);
	load();
	BeginBatchDraw();
	while (1) {
		while (clock() - start > changemaze) {
			start = clock();
			bkinit();
			point(0 + blockwidth / 2, WIDTH - blockwidth / 2, HEIGHT - blockwidth / 2, 0 + blockwidth / 2);
		}
		gamedraw();
		FlushBatchDraw();
	}
	EndBatchDraw();
	return 0;
}
