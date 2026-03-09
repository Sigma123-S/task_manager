import json
import matplotlib.pyplot as plt

with open("../data/tasks.json", "r") as f:
    tasks = json.load(f)

done = sum(1 for t in tasks if t['done'])
not_done = len(tasks) - done

plt.pie([done, not_done], labels=['Выполнено', 'Не выполнено'], autopct='%1.1f%%')
plt.title('Статистика задач')
plt.savefig('../data/report.png')
