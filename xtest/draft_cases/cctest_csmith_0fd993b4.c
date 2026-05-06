// SPDX-License-Identifier: MIT
// cctest_csmith_0fd993b4.c --- cctest case csmith_0fd993b4 (csmith seed 265917364)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x826f7d7d */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 265917364 -o /tmp/csmith_gen_vmruv12z/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static uint8_t g_2[5][5] = {{0xC0L,0xC0L,0xC0L,0xC0L,0xC0L},{0xE5L,0x3BL,0xE5L,0x3BL,0xE5L},{0xC0L,0xC0L,0xC0L,0xC0L,0xC0L},{0xE5L,0x3BL,0xE5L,0x3BL,0xE5L},{0xC0L,0xC0L,0xC0L,0xC0L,0xC0L}};
static int32_t g_3 = 0x97EEDE0BL;
static int16_t g_54 = 0x1731L;
static uint16_t g_55 = 0x5597L;
static uint16_t g_61 = 0xD9E8L;
static int32_t g_63 = 0x25F8E10BL;
static int32_t g_99 = 3L;
static uint64_t g_100 = 0x2902D2708467E5F3LL;
static int32_t g_101 = 0L;
static uint32_t g_116[3][2] = {{0UL,0UL},{0x618026BCL,0UL},{0UL,0x618026BCL}};
static int32_t g_119 = 0L;
static uint32_t g_167 = 4294967289UL;



static uint8_t  func_1(void);
static int64_t  func_22(const uint32_t  p_23, uint32_t  p_24, uint8_t  p_25, uint32_t  p_26);
static const uint32_t  func_27(int16_t  p_28, int16_t  p_29, uint32_t  p_30);
static int16_t  func_39(uint64_t  p_40, int64_t  p_41, int64_t  p_42, const int64_t  p_43, const int64_t  p_44);




static uint8_t  func_1(void)
{ 
    int64_t l_6 = 0x891C5534BF8F0AA6LL;
    int32_t l_9 = 1L;
    int32_t l_124 = 0x5DA3FE18L;
    int32_t l_146 = 0L;
    uint32_t l_160 = 1UL;
    if (g_2[0][3])
    { 
        for (g_3 = 0; (g_3 != 26); ++g_3)
        { 
            return g_3;
        }
        return l_6;
    }
    else
    { 
        uint32_t l_33 = 0x4C821046L;
        int32_t l_120 = (-1L);
lbl_147:
        for (l_6 = 8; (l_6 < 3); l_6 = safe_sub_func_int64_t_s_s(l_6, 3))
        { 
            uint8_t l_10 = 0x32L;
            l_10--;
            l_120 = (((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(l_6, ((safe_sub_func_int8_t_s_s(((((g_2[0][3] = (safe_rshift_func_int16_t_s_u((~func_22(((l_9 &= 0xCA7B5CF1L) , func_27((safe_mul_func_int16_t_s_s(l_10, 6UL)), g_2[2][1], l_33)), g_2[0][3], l_10, l_33)), 1))) == 8UL) & g_119) < l_6), l_33)) , 0UL))), (-1L))) , 0x2E29L) > 65529UL);
        }
        for (g_55 = 0; (g_55 <= 1); g_55 += 1)
        { 
            uint8_t l_121 = 7UL;
            int32_t l_152 = (-1L);
            l_121++;
            l_124 &= l_9;
            if ((+((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_div_func_int32_t_s_s((g_116[0][1] , g_119), ((safe_lshift_func_int16_t_s_s((((((g_100 = ((((safe_div_func_uint8_t_u_u(g_61, ((safe_sub_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((g_101 > 0xED785604L), l_124)) >= 0xE5L), g_2[0][3])) ^ (-1L)))) != l_6) & g_61) ^ l_121)) <= g_116[1][1]) , g_116[1][1]) >= 0x72C646EC4B94AD5ALL) != l_121), 13)) , g_61))) ^ 0xDFL), 11)), l_9)) && l_33), l_120)), g_2[0][3])), 0x8DL)) & l_33) || l_146) >= 1L)))
            { 
                if (g_55)
                    goto lbl_147;
                l_120 = g_116[1][1];
            }
            else
            { 
                return l_121;
            }
            for (g_63 = 1; (g_63 <= 4); g_63 += 1)
            { 
                int i, j;
                g_119 ^= (((1L | 0x78ADL) & 0x5CD3L) > ((safe_rshift_func_uint8_t_u_s((((safe_mod_func_uint64_t_u_u(g_2[(g_55 + 1)][g_55], g_116[(g_55 + 1)][g_55])) | g_116[1][1]) > l_121), g_2[0][2])) < g_3));
                l_152 = (g_119 &= g_2[0][3]);
            }
        }
        l_9 = l_146;
    }
    if (((-7L) < (safe_sub_func_int8_t_s_s(g_61, ((safe_mod_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u((((l_9 = (g_3 &= 0x917CCA84L)) , (g_55 = ((((3UL >= 0xC0L) > g_2[2][4]) || g_3) && 0xCC697D3C6209D16BLL))) <= l_124), g_101)) , 65535UL) < l_6), l_6)) < g_119)))))
    { 
        int16_t l_159 = 0x524AL;
        int32_t l_163 = 1L;
        int32_t l_164 = 0L;
        int32_t l_165 = 0xF1EAABBEL;
        int32_t l_166 = 5L;
        ++l_160;
        g_119 = g_99;
        ++g_167;
    }
    else
    { 
        int32_t l_170[5][5] = {{1L,1L,1L,1L,1L},{(-5L),(-5L),(-5L),(-5L),(-5L)},{1L,1L,1L,1L,1L},{(-5L),(-5L),(-5L),(-5L),(-5L)},{1L,1L,1L,1L,1L}};
        int i, j;
        return l_170[4][1];
    }
    l_9 |= g_3;
    return g_99;
}



static int64_t  func_22(const uint32_t  p_23, uint32_t  p_24, uint8_t  p_25, uint32_t  p_26)
{ 
    uint32_t l_35 = 1UL;
    int32_t l_45 = (-9L);
    int32_t l_56 = 0x5C8A2DB6L;
    int32_t l_114[2];
    int i;
    for (i = 0; i < 2; i++)
        l_114[i] = 0x25F0F443L;
    if ((((0xCA8CL > (l_35 = (-1L))) == (~(safe_lshift_func_uint16_t_u_s(0x94DFL, 9)))) ^ func_39(l_45, l_45, p_24, g_2[0][3], g_3)))
    { 
        int16_t l_58 = 1L;
        int32_t l_66 = 1L;
        int32_t l_72 = 0xCE086565L;
        if (g_2[3][0])
        { 
            return p_23;
        }
        else
        { 
            uint8_t l_57 = 0UL;
            int32_t l_62 = 1L;
            if ((((p_24 , (((((safe_div_func_uint32_t_u_u((((safe_add_func_int64_t_s_s((g_55 = ((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(g_2[0][3], (g_54 = (g_2[0][3] , g_2[1][4])))), p_25)) && (-1L))), l_35)) ^ (-4L)) , l_56), p_23)) >= g_2[4][1]) <= g_2[0][3]) , l_57) < l_57)) | l_57) | l_58))
            { 
                l_62 |= (safe_lshift_func_uint16_t_u_s((((g_61 = (p_26 == ((g_2[0][3] < (l_45 |= l_57)) | 0UL))) > 1L) < 4294967289UL), l_56));
                g_63 = (g_3 = g_54);
            }
            else
            { 
                uint64_t l_71 = 0xEA361F882D778712LL;
                g_3 = ((l_72 = ((((safe_mul_func_uint32_t_u_u(0UL, (((l_66 = p_23) < ((safe_add_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(((l_71 = (-1L)) <= 0L), 7L)), 18446744073709551607UL)) , l_45)) != g_55))) >= g_2[0][3]) < g_54) , g_54)) ^ 0x2C4C26B3FA45FE6ELL);
            }
            for (g_54 = 0; (g_54 >= (-24)); g_54--)
            { 
                uint16_t l_93 = 0xFE3BL;
                int32_t l_94 = 0x05739219L;
                int64_t l_103 = 0x95F91B207691369FLL;
                l_62 = (safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((l_72 = (g_61 = (safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((l_57 >= (l_35 , ((safe_mod_func_int64_t_s_s(p_26, (((g_54 < 0x891F928D85E26160LL) , g_61) | g_3))) <= p_23))), 3)), p_24)) >= g_54), l_56)))), l_35)), 1UL)), l_62)), l_93)), p_25));
                g_3 = (l_94 = l_62);
                g_3 ^= (((((((safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s((l_94 = (g_99 = 0xF7L)), (g_101 = (g_100 = 0x9AL)))), 10)) >= l_93) | (((!l_103) , l_56) > l_58)) && l_56) > 0x5162L) >= l_66) >= g_2[2][2]);
            }
        }
    }
    else
    { 
        int8_t l_110 = (-1L);
        int32_t l_115[1];
        int i;
        for (i = 0; i < 1; i++)
            l_115[i] = 1L;
        l_114[1] ^= (safe_mod_func_uint64_t_u_u((((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(l_110, (safe_lshift_func_uint16_t_u_s(0UL, 3)))), (0x1AB19369L <= ((+g_3) ^ l_45)))) <= p_26) , p_24), g_100));
        --g_116[1][1];
    }
    return l_35;
}



static const uint32_t  func_27(int16_t  p_28, int16_t  p_29, uint32_t  p_30)
{ 
    uint32_t l_34 = 18446744073709551612UL;
    l_34 = 0x93BA6AEDL;
    return p_28;
}



static int16_t  func_39(uint64_t  p_40, int64_t  p_41, int64_t  p_42, const int64_t  p_43, const int64_t  p_44)
{ 
    return p_44;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_116[i][j], "g_116[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
