SELECT teacher_id, count(distinct subject_id) as cnt
FROM teacher
GROUP BY teacher_id