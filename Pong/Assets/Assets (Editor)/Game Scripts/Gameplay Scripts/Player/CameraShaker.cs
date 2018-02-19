﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraShaker : MonoBehaviour {
	public float power = 0.1f;
	public float duration = 0.2f;
	public Transform camera;
	public float slowDown = 0.5f;
	public bool shake = false;
	// Use this for initialization

	Vector3 position;
	float startDuration;
	void Start () {
		camera = Camera.main.transform;
		position = camera.localPosition;
		startDuration = duration;
	}

	public void hit(){
		shake = true;
	}
	// Update is called once per frame
	void Update () {
		if (shake) {
			if (duration > 0) {
				camera.localPosition = position + Random.insideUnitSphere * power;
				duration -= Time.deltaTime * slowDown;
			} else {
				shake = false;
				duration = startDuration;
				camera.localPosition = position;
			}
		}
	}
}
