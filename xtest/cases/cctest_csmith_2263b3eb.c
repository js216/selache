// SPDX-License-Identifier: MIT
// cctest_csmith_2263b3eb.c --- cctest case csmith_2263b3eb (csmith seed 576959467)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x71bd2e2c */
/* @exp_ticks 0xf348 */

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

// Options:   -s 576959467 -o /tmp/csmith_gen_9djir3p0/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int16_t  f0;
   int8_t  f1;
   const int8_t  f2;
};
#pragma pack(pop)

union U1 {
   uint16_t  f0;
   int8_t * f1;
};

union U2 {
   const uint64_t  f0;
   int8_t * f1;
   uint32_t  f2;
};


static int8_t g_3 = 0xCCL;
static int32_t g_18[2][5][7] = {{{(-1L),5L,(-8L),0x0F6B34C2L,(-9L),0xCD4A7974L,(-9L)},{(-5L),(-8L),(-8L),(-5L),(-2L),3L,0xCD4A7974L},{(-1L),1L,0xCD4A7974L,(-8L),0x2EE72C34L,0x0F6B34C2L,0x94486CAEL},{0x24ADC9FEL,6L,(-5L),0xFF8CD3BEL,5L,(-1L),0xCD4A7974L},{0x70CC321AL,3L,3L,(-1L),0xD95FF79FL,(-9L),(-9L)}},{{0xFB29D945L,(-1L),0xFBEBF0A0L,(-1L),0xFB29D945L,(-2L),1L},{(-8L),3L,0x94486CAEL,0xFF8CD3BEL,0xCD4A7974L,0x45D764CEL,6L},{0x2EE72C34L,0x70CC321AL,(-2L),(-9L),9L,0x165F5C9BL,0xCD4A7974L},{(-9L),0x94486CAEL,0xFB29D945L,0xD95FF79FL,0xFF8CD3BEL,8L,0x94BE3D0EL},{0x70CC321AL,0xFF8CD3BEL,(-1L),(-1L),0xFF8CD3BEL,0x70CC321AL,0x165F5C9BL}}};
static int64_t g_36 = 0xE6156CF859E2267CLL;
static int32_t g_37 = 0L;
static int8_t g_43 = (-6L);
static int8_t *g_58 = &g_3;
static int8_t **g_57 = &g_58;
static uint16_t g_75 = 0x3605L;
static uint8_t g_81[5][4] = {{0xAAL,0xAAL,0x42L,0x42L},{0xAAL,0xAAL,0x42L,0x42L},{0xAAL,0xAAL,0x42L,0x42L},{0xAAL,0xAAL,0x42L,0x42L},{0xAAL,0xAAL,0x42L,0x42L}};
static uint32_t g_89 = 1UL;
static uint32_t g_91 = 0xECB7BB15L;
static uint32_t g_94 = 1UL;
static const struct S0 *g_100[2] = {(void*)0,(void*)0};
static int16_t g_113 = (-3L);
static uint64_t g_116 = 0x103E2EA94D18AF38LL;
static uint32_t g_147 = 0x199FB15EL;
static struct S0 g_154 = {0xEFC0L,-3L,0L};
static struct S0 g_157 = {0x45D9L,-1L,4L};
static struct S0 *g_156[4] = {&g_157,&g_157,&g_157,&g_157};
static struct S0 g_159 = {8L,0x87L,0xDDL};
static uint16_t g_161 = 8UL;
static int32_t *g_169[7] = {&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,&g_37};
static struct S0 g_174 = {-1L,0L,0xB0L};
static const union U1 g_211 = {0x7D86L};
static union U2 g_224 = {0UL};
static int16_t g_277 = 0L;
static union U1 g_286 = {6UL};
static uint16_t g_304[1][3][1] = {{{1UL},{1UL},{1UL}}};
static const union U1 *g_315 = (void*)0;
static const union U1 **g_314 = &g_315;
static int64_t g_344 = 0xCAF49107512484DALL;
static struct S0 **g_376[6][5][7] = {{{(void*)0,&g_156[3],&g_156[3],&g_156[3],(void*)0,(void*)0,&g_156[3]},{(void*)0,&g_156[3],(void*)0,(void*)0,(void*)0,&g_156[2],&g_156[3]},{&g_156[3],&g_156[3],&g_156[3],&g_156[3],&g_156[3],&g_156[3],&g_156[3]},{(void*)0,(void*)0,(void*)0,&g_156[2],&g_156[3],&g_156[2],(void*)0},{(void*)0,(void*)0,&g_156[3],&g_156[3],&g_156[3],(void*)0,(void*)0}},{{&g_156[3],(void*)0,(void*)0,(void*)0,&g_156[3],(void*)0,(void*)0},{&g_156[2],&g_156[3],&g_156[2],&g_156[3],&g_156[3],&g_156[2],&g_156[3]},{(void*)0,&g_156[3],(void*)0,&g_156[3],&g_156[3],(void*)0,&g_156[3]},{&g_156[2],&g_156[3],&g_156[3],&g_156[2],&g_156[3],&g_156[2],&g_156[3]},{&g_156[3],(void*)0,(void*)0,&g_156[3],(void*)0,(void*)0,&g_156[3]}},{{(void*)0,&g_156[3],&g_156[3],&g_156[3],(void*)0,(void*)0,&g_156[3]},{(void*)0,&g_156[3],(void*)0,(void*)0,(void*)0,&g_156[2],&g_156[3]},{&g_156[3],&g_156[3],&g_156[3],&g_156[3],&g_156[3],&g_156[3],&g_156[3]},{(void*)0,(void*)0,(void*)0,&g_156[2],&g_156[3],&g_156[2],(void*)0},{(void*)0,(void*)0,&g_156[3],&g_156[3],&g_156[3],(void*)0,(void*)0}},{{&g_156[3],(void*)0,(void*)0,(void*)0,&g_156[3],(void*)0,(void*)0},{&g_156[2],&g_156[3],&g_156[2],&g_156[3],&g_156[3],&g_156[2],&g_156[3]},{(void*)0,&g_156[3],(void*)0,&g_156[3],&g_156[3],(void*)0,&g_156[3]},{&g_156[2],&g_156[3],&g_156[3],&g_156[2],&g_156[3],&g_156[3],&g_156[2]},{(void*)0,(void*)0,(void*)0,&g_156[3],(void*)0,(void*)0,(void*)0}},{{&g_156[3],&g_156[2],&g_156[3],&g_156[2],&g_156[3],&g_156[3],&g_156[2]},{(void*)0,(void*)0,(void*)0,&g_156[2],(void*)0,&g_156[3],&g_156[3]},{&g_156[2],(void*)0,&g_156[3],&g_156[3],(void*)0,&g_156[2],(void*)0},{(void*)0,&g_156[2],(void*)0,&g_156[3],&g_156[3],&g_156[3],(void*)0},{&g_156[3],&g_156[3],&g_156[2],&g_156[3],&g_156[2],&g_156[3],&g_156[3]}},{{(void*)0,&g_156[2],&g_156[3],&g_156[2],(void*)0,(void*)0,(void*)0},{&g_156[3],(void*)0,&g_156[3],&g_156[2],&g_156[2],&g_156[3],(void*)0},{(void*)0,(void*)0,&g_156[3],&g_156[3],&g_156[3],&g_156[2],&g_156[3]},{&g_156[3],&g_156[2],&g_156[2],&g_156[3],(void*)0,&g_156[3],&g_156[2]},{(void*)0,(void*)0,(void*)0,&g_156[3],(void*)0,(void*)0,(void*)0}}};
static int64_t g_436 = 9L;
static union U2 *g_564 = (void*)0;
static union U2 * const *g_563 = &g_564;
static uint8_t g_663 = 0UL;
static union U1 *g_702[4] = {&g_286,&g_286,&g_286,&g_286};
static union U1 **g_701 = &g_702[2];
static uint64_t *g_798 = &g_116;
static int32_t g_801[6][5][4] = {{{0x80DB6B87L,1L,0xC58C247CL,0xC58C247CL},{0xD9E6D22AL,0xD9E6D22AL,0x18A51F16L,(-10L)},{0x54BBEF8AL,(-2L),0xCB7F9E59L,(-5L)},{0x0F6F8EE2L,0xD5AEB7F2L,6L,0xCB7F9E59L},{9L,0xD5AEB7F2L,(-1L),(-5L)}},{{0xD5AEB7F2L,(-2L),0x577B275AL,(-10L)},{(-10L),0xD9E6D22AL,0x82E41F66L,0xC58C247CL},{(-1L),1L,0L,0xE047C726L},{0x577B275AL,(-5L),(-3L),0xCABEB0A7L},{0x54BBEF8AL,(-2L),(-1L),(-2L)}},{{0L,0x45CFCCB1L,0x9B6158EBL,0xCB7F9E59L},{(-2L),1L,0xD5AEB7F2L,(-2L)},{0x45CFCCB1L,9L,0x577B275AL,0L},{0L,0x577B275AL,0L,6L},{(-2L),1L,0xE047C726L,6L}},{{(-10L),0x2A34BD2FL,0x341E42F5L,1L},{0x54BBEF8AL,(-1L),0x341E42F5L,0x80DB6B87L},{(-10L),0L,0xE047C726L,0xCB7F9E59L},{(-2L),(-1L),0L,1L},{0L,1L,0x577B275AL,0x54BBEF8AL}},{{0x45CFCCB1L,(-10L),0xD5AEB7F2L,0x9B6158EBL},{(-2L),1L,0x9B6158EBL,0x035E7E4EL},{0L,0x0F6F8EE2L,(-1L),0x12FDFB7BL},{0x54BBEF8AL,0x80DB6B87L,(-3L),9L},{0x577B275AL,(-10L),0L,0xCB7F9E59L}},{{(-1L),0x82E41F66L,0x82E41F66L,(-1L)},{(-10L),(-5L),0x577B275AL,0xC58C247CL},{(-10L),0x1E965270L,0x12FDFB7BL,(-1L)},{0x45CFCCB1L,0xE047C726L,0x99701AA0L,(-1L)},{3L,0x1E965270L,0x2A34BD2FL,0xC58C247CL}}};
static int8_t * const *g_813 = &g_58;
static int8_t * const **g_812 = &g_813;
static int8_t * const ***g_811 = &g_812;
static uint32_t g_895 = 0UL;
static uint16_t g_987[5] = {6UL,6UL,6UL,6UL,6UL};
static int32_t ** const g_1047 = &g_169[4];
static int32_t ** const *g_1046 = &g_1047;
static int32_t ** const **g_1045 = &g_1046;
static uint64_t g_1117 = 0x120EDA8D016E2873LL;
static uint32_t *g_1137 = &g_91;
static uint32_t ** const g_1136 = &g_1137;
static uint32_t ** const *g_1135 = &g_1136;
static uint32_t ** const **g_1134[7] = {&g_1135,&g_1135,&g_1135,&g_1135,&g_1135,&g_1135,&g_1135};
static int32_t *g_1204 = &g_801[4][3][2];
static int32_t * const *g_1203[1][4] = {{&g_1204,&g_1204,&g_1204,&g_1204}};
static int32_t *g_1282 = (void*)0;
static union U2 g_1414 = {0x469A65B09DB0CD3FLL};
static uint32_t g_1549 = 0x64A0D3EFL;
static struct S0 g_1666 = {-3L,0x0EL,0x89L};
static int16_t *g_1681 = &g_277;
static int16_t **g_1680 = &g_1681;
static uint32_t g_1682 = 0x678634CFL;
static uint32_t g_1702[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static struct S0 **g_1771 = &g_156[2];
static struct S0 **g_1772 = (void*)0;
static int64_t g_1847 = 0x6D31F7AAAE55B4B9LL;
static uint8_t g_1917 = 0xC6L;
static uint64_t g_1944 = 18446744073709551615UL;
static int16_t * const *g_1979 = &g_1681;
static uint16_t *g_1993 = &g_161;
static uint16_t **g_1992 = &g_1993;
static uint16_t *** const g_1991[4] = {&g_1992,&g_1992,&g_1992,&g_1992};
static uint64_t g_2030[5] = {0xEDAFA4765647D672LL,0xEDAFA4765647D672LL,0xEDAFA4765647D672LL,0xEDAFA4765647D672LL,0xEDAFA4765647D672LL};
static uint32_t g_2045[1] = {1UL};
static struct S0 g_2085[3] = {{0L,0x27L,0L},{0L,0x27L,0L},{0L,0x27L,0L}};
static int16_t g_2106 = 0L;
static const int8_t g_2159 = 0x5EL;
static union U1 ***g_2162[7] = {&g_701,&g_701,&g_701,&g_701,&g_701,&g_701,&g_701};
static union U1 *** const *g_2161[7][5] = {{&g_2162[4],&g_2162[2],(void*)0,&g_2162[2],&g_2162[4]},{(void*)0,(void*)0,&g_2162[4],&g_2162[4],&g_2162[2]},{(void*)0,&g_2162[2],(void*)0,&g_2162[3],&g_2162[3]},{&g_2162[4],&g_2162[2],&g_2162[4],(void*)0,&g_2162[2]},{(void*)0,&g_2162[3],&g_2162[2],(void*)0,&g_2162[4]},{&g_2162[2],(void*)0,&g_2162[3],&g_2162[3],(void*)0},{(void*)0,&g_2162[2],&g_2162[2],&g_2162[4],&g_2162[4]}};
static uint8_t *g_2205 = (void*)0;
static uint8_t **g_2204 = &g_2205;
static union U1 *g_2223 = &g_286;
static int64_t g_2226 = (-10L);



static uint32_t  func_1(void);
static int8_t ** func_7(int32_t  p_8, uint16_t  p_9);
static uint16_t  func_11(int64_t  p_12);
static int8_t  func_15(uint16_t  p_16);
static int32_t  func_27(uint32_t  p_28, uint32_t  p_29, int8_t * p_30, uint64_t  p_31, struct S0  p_32);
static int8_t  func_33(uint8_t  p_34);
static int32_t ** func_38(int8_t  p_39, int64_t  p_40, uint32_t  p_41);
static uint16_t  func_49(int8_t * p_50, union U1  p_51, int32_t * p_52);




static uint32_t  func_1(void)
{ 
    int8_t *l_2 = &g_3;
    int8_t *l_4 = &g_3;
    int8_t **l_5 = (void*)0;
    int8_t **l_6 = &l_4;
    int32_t l_10 = 0xB534DE6FL;
    int32_t l_1568 = 0xD1113EF8L;
    int64_t *l_1569 = &g_436;
    uint8_t *l_1911 = &g_81[4][3];
    uint8_t **l_1910 = &l_1911;
    int32_t l_1949 = 0x6891994AL;
    int32_t l_1950 = 0x9A0A03FDL;
    int32_t l_1951 = 0x0E650778L;
    int8_t l_1952 = 0x4DL;
    int32_t l_1953 = (-10L);
    union U1 l_1976 = {65529UL};
    int32_t **l_2019 = &g_1282;
    int32_t *** const l_2018 = &l_2019;
    int32_t *** const *l_2017 = &l_2018;
    uint32_t l_2022 = 4294967291UL;
    int16_t l_2080 = 0xDEFAL;
    int8_t l_2087[2][5][4] = {{{0xD0L,1L,1L,0xD0L},{1L,0xD0L,0x3EL,5L},{1L,0x3EL,1L,0x3DL},{0xD0L,5L,0x3DL,0x3DL},{0x3EL,0x3EL,1L,5L}},{{5L,0xD0L,1L,0xD0L},{0x3EL,1L,0x3DL,1L},{0xD0L,1L,1L,0xD0L},{1L,0xD0L,0x3EL,5L},{1L,0x3EL,1L,0x3DL}}};
    union U1 l_2090 = {65533UL};
    struct S0 l_2112 = {0xC3DEL,1L,0xD8L};
    uint32_t l_2118[3];
    int16_t l_2127 = 0xF92CL;
    int32_t ***l_2149 = (void*)0;
    int32_t ****l_2148 = &l_2149;
    uint32_t l_2194 = 0xC8F62789L;
    union U1 ****l_2207 = &g_2162[5];
    uint32_t l_2227 = 18446744073709551615UL;
    union U1 **l_2236[7] = {&g_702[2],&g_702[2],&g_702[2],&g_702[2],&g_702[2],&g_702[2],&g_702[2]};
    int32_t l_2239[1];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2118[i] = 0xFEC7AA3EL;
    for (i = 0; i < 1; i++)
        l_2239[i] = 0L;
    l_10 = ((((((*g_798) = (1UL ^ ((l_2 != ((*l_6) = l_4)) , ((l_6 = func_7(l_10, func_11(((*l_1569) = (((safe_sub_func_int8_t_s_s(6L, ((l_1568 &= func_15(g_3)) , l_1568))) & l_10) & l_10))))) == (void*)0)))) <= g_157.f2) , g_161) , g_91) > l_10);
    for (g_75 = 0; (g_75 <= 4); g_75 += 1)
    { 
        uint16_t l_1907 = 1UL;
        uint8_t **l_1912 = &l_1911;
        uint8_t *l_1918[1][4];
        int32_t l_1919[3];
        int32_t l_1942 = 0x95CF07AEL;
        uint32_t l_1955 = 0xB70AD149L;
        int32_t l_1958 = 0L;
        const union U2 l_1981 = {0x0E906B55965EC7EELL};
        int64_t l_1990 = 0x33F111CCCA05D825LL;
        union U1 l_2024 = {0UL};
        struct S0 ***l_2031[1];
        struct S0 * const *l_2033 = &g_156[3];
        struct S0 * const **l_2032 = &l_2033;
        const uint16_t l_2078 = 0xE76CL;
        const int8_t l_2079 = 0x5AL;
        int32_t l_2086 = (-1L);
        uint32_t l_2119[3];
        int32_t l_2126 = 1L;
        struct S0 ***l_2157 = &g_376[0][3][0];
        int16_t l_2192[3][4] = {{1L,1L,0xBCDFL,1L},{1L,0x8886L,0x8886L,1L},{0x8886L,1L,0x8886L,0x8886L}};
        int32_t ** const **l_2198[2];
        uint64_t **l_2203 = (void*)0;
        union U1 *l_2222 = (void*)0;
        uint32_t **l_2237 = &g_1137;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_1918[i][j] = &g_1917;
        }
        for (i = 0; i < 3; i++)
            l_1919[i] = 1L;
        for (i = 0; i < 1; i++)
            l_2031[i] = &g_376[2][4][1];
        for (i = 0; i < 3; i++)
            l_2119[i] = 5UL;
        for (i = 0; i < 2; i++)
            l_2198[i] = &g_1046;
    }
    return g_2085[0].f2;
}



static int8_t ** func_7(int32_t  p_8, uint16_t  p_9)
{ 
    const int32_t * const l_1899[7] = {&g_801[4][2][1],&g_801[4][2][1],&g_801[5][0][1],&g_801[4][2][1],&g_801[4][2][1],&g_801[5][0][1],&g_801[4][2][1]};
    int32_t l_1904 = 2L;
    int32_t *l_1905 = &g_37;
    int32_t l_1906 = 0x16342E17L;
    int i;
    l_1906 |= ((((void*)0 != l_1899[2]) == ((*l_1905) = ((*g_1681) <= (((*g_1046) != (*g_1046)) > (((((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0x7A76E921L, (**g_1136))), 0x7AC8L)) , p_8) , g_1666.f1) != g_1117) > l_1904))))) || 1L);
    return &g_58;
}



static uint16_t  func_11(int64_t  p_12)
{ 
    uint8_t l_1579 = 250UL;
    int32_t l_1596 = 0L;
    int32_t l_1602[1][2][4] = {{{1L,1L,1L,1L},{1L,1L,1L,1L}}};
    int32_t l_1615 = 0xE872E804L;
    uint64_t l_1632 = 1UL;
    union U1 ***l_1637 = &g_701;
    int8_t l_1649 = 0x8EL;
    const int32_t l_1730 = 0L;
    uint16_t l_1734 = 65534UL;
    struct S0 l_1744 = {-1L,1L,5L};
    union U2 *l_1749 = (void*)0;
    struct S0 **l_1782[7][6] = {{(void*)0,(void*)0,&g_156[3],(void*)0,(void*)0,&g_156[3]},{(void*)0,(void*)0,&g_156[3],(void*)0,(void*)0,&g_156[3]},{(void*)0,(void*)0,&g_156[3],(void*)0,(void*)0,&g_156[3]},{(void*)0,(void*)0,&g_156[3],(void*)0,(void*)0,&g_156[3]},{(void*)0,(void*)0,(void*)0,&g_156[3],&g_156[3],(void*)0},{&g_156[3],&g_156[3],(void*)0,&g_156[3],&g_156[3],(void*)0},{&g_156[3],&g_156[3],(void*)0,&g_156[3],&g_156[3],(void*)0}};
    int8_t **l_1873 = &g_58;
    int32_t *l_1896 = &l_1596;
    int i, j, k;
    for (g_89 = 0; (g_89 <= 3); g_89 += 1)
    { 
        int32_t *l_1570 = (void*)0;
        int32_t *l_1571 = (void*)0;
        int32_t *l_1572 = (void*)0;
        int32_t *l_1573 = &g_18[1][1][5];
        int32_t *l_1574 = &g_37;
        int32_t *l_1575 = &g_18[0][2][0];
        int32_t *l_1576 = &g_18[1][0][5];
        int32_t *l_1577[2];
        int8_t l_1578[1][4][7] = {{{(-8L),(-8L),0x82L,0x82L,(-8L),(-8L),0x82L},{0x60L,(-8L),0x60L,(-8L),0x60L,(-8L),0x60L},{(-8L),0x82L,0x82L,(-8L),(-8L),0x82L,0x82L},{0x93L,(-8L),0x93L,(-8L),0x93L,(-8L),0x93L}}};
        uint32_t **l_1595 = &g_1137;
        uint32_t ***l_1594 = &l_1595;
        uint32_t ****l_1593 = &l_1594;
        uint32_t *****l_1592[7][5][3] = {{{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593}},{{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593}},{{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593}},{{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593}},{{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593}},{{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593}},{{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593},{&l_1593,&l_1593,&l_1593}}};
        int16_t l_1603 = (-1L);
        int64_t l_1605 = 0x568EB97A3A688266LL;
        int8_t l_1606 = 0x3DL;
        uint32_t l_1716[2][7][1] = {{{6UL},{0xFB5272A4L},{6UL},{6UL},{0xFB5272A4L},{6UL},{6UL}},{{0xFB5272A4L},{6UL},{6UL},{0xFB5272A4L},{6UL},{6UL},{0xFB5272A4L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1577[i] = (void*)0;
        --l_1579;
        for (g_1117 = 0; (g_1117 <= 3); g_1117 += 1)
        { 
            int16_t l_1599 = 0xAB82L;
            int32_t l_1601[2][4][1] = {{{0xBD0E4CE5L},{0x26A1281CL},{0xBD0E4CE5L},{0x26A1281CL}},{{0xBD0E4CE5L},{0x26A1281CL},{0xBD0E4CE5L},{0x26A1281CL}}};
            int8_t l_1604[7][2][3] = {{{0x2BL,0xB7L,1L},{0x2DL,0x18L,1L}},{{1L,(-6L),(-1L)},{0x2DL,(-6L),0x2DL}},{{0x2BL,0x18L,(-1L)},{0x2BL,0xB7L,1L}},{{0x2DL,0x18L,0x1EL},{0x1EL,0x2BL,0x16L}},{{0x5FL,0x2BL,0x5FL},{0L,0x2DL,0x16L}},{{0L,1L,0x1EL},{0x5FL,0x2DL,0x1EL}},{{0x1EL,0x2BL,0x16L},{0x5FL,0x2BL,0x5FL}}};
            int32_t * const *l_1624 = &l_1573;
            int16_t *l_1654 = &l_1599;
            int16_t *l_1655 = &g_113;
            struct S0 *l_1665 = &g_1666;
            uint64_t l_1713 = 1UL;
            int i, j, k;
            for (g_113 = 0; (g_113 <= 3); g_113 += 1)
            { 
                uint32_t ***l_1591[7];
                uint32_t ****l_1590 = &l_1591[1];
                uint32_t *****l_1589 = &l_1590;
                int i;
                for (i = 0; i < 7; i++)
                    l_1591[i] = (void*)0;
                for (g_1549 = 0; (g_1549 <= 3); g_1549 += 1)
                { 
                    int32_t l_1582[7] = {0L,0L,0L,0L,0L,0L,0L};
                    int i, j, k;
                    l_1582[4] |= g_801[(g_1549 + 2)][g_1549][g_113];
                    (*l_1574) = 0x2A52BCD8L;
                }
                l_1596 = (((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s(0x9D662745514A8BF2LL, 0UL)), (safe_sub_func_int16_t_s_s((((((l_1589 != l_1592[6][4][1]) || (p_12 < (*l_1576))) , (((void*)0 != &l_1577[1]) && (-9L))) < p_12) , 5L), 0xA0A0L)))) != p_12) <= l_1579);
            }
            for (g_36 = 3; (g_36 >= 0); g_36 -= 1)
            { 
                int32_t * const l_1597 = &g_18[0][2][0];
                int32_t **l_1598 = &l_1577[1];
                int32_t l_1600[6][5][7] = {{{0x6EE64696L,(-1L),0x6EE64696L,0x115F0339L,0x115F0339L,0x6EE64696L,(-1L)},{(-1L),0x26906C93L,0x2EF9A891L,0x2EF9A891L,0x26906C93L,(-1L),0x26906C93L},{0x6EE64696L,0x115F0339L,0x115F0339L,0x6EE64696L,(-1L),0x6EE64696L,0x115F0339L},{0L,0L,(-1L),0x2EF9A891L,(-1L),0L,0L},{(-9L),0x115F0339L,0x47138EE1L,0x115F0339L,(-9L),(-9L),0x115F0339L}},{{(-1L),0x26906C93L,(-1L),(-1L),(-1L),(-1L),0x26906C93L},{0x115F0339L,(-1L),0x47138EE1L,0x47138EE1L,(-1L),0x115F0339L,(-1L)},{(-1L),(-1L),(-1L),(-1L),0x26906C93L,(-1L),(-1L)},{(-9L),(-9L),0x115F0339L,0x47138EE1L,0x115F0339L,(-9L),(-9L)},{0L,(-1L),0x2EF9A891L,(-1L),0L,0L,(-1L)}},{{0x6EE64696L,(-1L),0x6EE64696L,0x115F0339L,0x115F0339L,0x6EE64696L,(-1L)},{(-1L),0x26906C93L,0x2EF9A891L,0x2EF9A891L,0x26906C93L,(-1L),0x26906C93L},{0x6EE64696L,0x115F0339L,0x115F0339L,0x6EE64696L,(-1L),0x6EE64696L,0x115F0339L},{0L,0L,(-1L),0x2EF9A891L,(-1L),0L,0L},{(-9L),0x115F0339L,0x47138EE1L,0x115F0339L,(-9L),(-9L),0x115F0339L}},{{(-1L),0x26906C93L,(-1L),(-1L),(-1L),(-1L),0x26906C93L},{0x115F0339L,(-1L),0x47138EE1L,0x47138EE1L,(-1L),0x115F0339L,(-1L)},{(-1L),(-1L),(-1L),(-1L),0x26906C93L,(-1L),(-1L)},{(-9L),(-9L),0x115F0339L,0x47138EE1L,0x115F0339L,(-9L),(-9L)},{0L,(-1L),0x2EF9A891L,(-1L),0L,0L,(-1L)}},{{0x6EE64696L,(-1L),0x6EE64696L,0x115F0339L,0x115F0339L,0x6EE64696L,(-1L)},{(-1L),0x26906C93L,0x2EF9A891L,0x2EF9A891L,0x26906C93L,(-1L),0x26906C93L},{0x6EE64696L,0x115F0339L,0x115F0339L,0x6EE64696L,(-1L),0x6EE64696L,0x115F0339L},{0L,(-1L),(-1L),0x26906C93L,(-1L),(-1L),(-1L)},{0x115F0339L,0x6EE64696L,(-1L),0x6EE64696L,0x115F0339L,0x115F0339L,0x6EE64696L}},{{0x2EF9A891L,0L,0x2EF9A891L,(-1L),(-1L),0x2EF9A891L,0L},{0x6EE64696L,(-9L),(-1L),(-1L),(-9L),0x6EE64696L,(-9L)},{0x2EF9A891L,(-1L),(-1L),0x2EF9A891L,0L,0x2EF9A891L,(-1L)},{0x115F0339L,0x115F0339L,0x6EE64696L,(-1L),0x6EE64696L,0x115F0339L,0x115F0339L},{(-1L),(-1L),0x26906C93L,(-1L),(-1L),(-1L),(-1L)}}};
                uint32_t l_1607[7][3][5] = {{{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L},{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L},{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L}},{{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L},{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L},{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L}},{{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L},{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L},{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L}},{{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L},{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L},{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L}},{{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L},{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L},{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L}},{{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L},{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L},{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L}},{{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L},{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L},{18446744073709551608UL,0UL,18446744073709551608UL,0xDDCDEB57L,0xDDCDEB57L}}};
                int i, j, k;
                (*l_1598) = l_1597;
                if (p_12)
                    break;
                if (p_12)
                    break;
                ++l_1607[6][1][1];
            }
            for (p_12 = 3; (p_12 >= 0); p_12 -= 1)
            { 
                uint16_t l_1614 = 0xA28FL;
                int16_t *l_1622[5][7][4] = {{{(void*)0,&l_1603,&g_277,&g_277},{&l_1599,&l_1599,&g_113,&l_1603},{&l_1603,(void*)0,&g_113,(void*)0},{&l_1599,(void*)0,&g_277,&g_113},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1599,&l_1603},{(void*)0,&l_1599,(void*)0,&g_277}},{{(void*)0,&l_1603,&g_277,&g_277},{&l_1599,&l_1599,&g_113,&l_1603},{&l_1603,(void*)0,&l_1599,(void*)0},{(void*)0,&l_1603,&g_113,&l_1599},{(void*)0,&l_1603,&l_1603,(void*)0},{&l_1603,(void*)0,(void*)0,&g_277},{&l_1603,(void*)0,&l_1603,&g_113}},{{(void*)0,&g_277,&g_113,&g_113},{(void*)0,(void*)0,&l_1599,&g_277},{&g_277,(void*)0,&l_1599,(void*)0},{(void*)0,&l_1603,&g_113,&l_1599},{(void*)0,&l_1603,&l_1603,(void*)0},{&l_1603,(void*)0,(void*)0,&g_277},{&l_1603,(void*)0,&l_1603,&g_113}},{{(void*)0,&g_277,&g_113,&g_113},{(void*)0,(void*)0,&l_1599,&g_277},{&g_277,(void*)0,&l_1599,(void*)0},{(void*)0,&l_1603,&g_113,&l_1599},{(void*)0,&l_1603,&l_1603,(void*)0},{&l_1603,(void*)0,(void*)0,&g_277},{&l_1603,(void*)0,&l_1603,&g_113}},{{(void*)0,&g_277,&g_113,&g_113},{(void*)0,(void*)0,&l_1599,&g_277},{&g_277,(void*)0,&l_1599,(void*)0},{(void*)0,&l_1603,&g_113,&l_1599},{(void*)0,&l_1603,&l_1603,(void*)0},{&l_1603,(void*)0,(void*)0,&g_277},{&l_1603,(void*)0,&l_1603,&g_113}}};
                int16_t l_1623 = 1L;
                const int32_t *l_1627[3];
                const int32_t **l_1626 = &l_1627[0];
                int32_t l_1630 = (-1L);
                union U2 *l_1635 = &g_224;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1627[i] = &l_1615;
                if ((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((g_154.f0 , ((*l_1575) = l_1614)) > (l_1615 == (g_113 = ((safe_sub_func_uint32_t_u_u(p_12, (safe_add_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(g_436, p_12)) && l_1602[0][1][3]) != (-6L)), p_12)))) != g_75)))) != p_12), l_1623)) && (*g_798)), g_81[4][3])))
                { 
                    int32_t * const **l_1625 = &l_1624;
                    const int32_t ***l_1628 = &l_1626;
                    l_1601[1][2][0] ^= ((((*l_1573) |= 0xADD3E125L) <= (((*l_1625) = l_1624) == ((*l_1628) = l_1626))) >= (p_12 < l_1604[3][0][2]));
                    (**g_1046) = l_1575;
                    if ((*l_1574))
                        continue;
                }
                else
                { 
                    int64_t l_1629[2];
                    int32_t l_1631[4] = {0x0880DE13L,0x0880DE13L,0x0880DE13L,0x0880DE13L};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1629[i] = 1L;
                    l_1632--;
                }
                for (g_116 = 0; (g_116 <= 3); g_116 += 1)
                { 
                    union U2 **l_1636 = &l_1635;
                    int32_t l_1646 = 0x586826A4L;
                    uint32_t *l_1647 = (void*)0;
                    uint32_t *l_1648[4];
                    uint64_t *l_1650[3][3][6] = {{{&l_1632,&g_116,&l_1632,&g_116,&l_1632,&l_1632},{&g_116,&l_1632,&l_1632,&g_116,&l_1632,&g_116},{&l_1632,&g_1117,&g_1117,&g_116,&g_116,(void*)0}},{{&g_116,&l_1632,&l_1632,&l_1632,&g_116,&l_1632},{(void*)0,&g_1117,&g_1117,&g_116,&l_1632,&g_1117},{&g_1117,&l_1632,&g_1117,&g_1117,&l_1632,&g_1117}},{{&g_116,&g_116,&g_1117,&g_116,&g_1117,&l_1632},{&l_1632,(void*)0,&l_1632,&g_1117,&l_1632,(void*)0},{&l_1632,&l_1632,&g_1117,&g_116,&g_1117,&g_116}}};
                    int32_t l_1651[3][1][1];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1648[i] = &g_147;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1651[i][j][k] = 0xC02E618AL;
                        }
                    }
                    (*l_1573) |= p_12;
                    (*l_1636) = l_1635;
                    l_1630 |= (((**g_813) = ((l_1651[0][0][0] |= (((**l_1626) != ((void*)0 != l_1637)) > ((l_1649 &= (safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*l_1573) , (**l_1624)), (0xCC331BF00444C4FALL | ((((safe_rshift_func_uint8_t_u_s(g_157.f0, 2)) | l_1646) >= 0x4914L) , p_12)))), 0xF0L)), 1))) , g_174.f0))) ^ (*g_798))) & p_12);
                }
            }
            if (((((safe_mul_func_int8_t_s_s(1L, (g_1414.f2 >= p_12))) & (((*l_1655) = ((*l_1654) ^= g_113)) || (((((g_224 , (((***g_1135) = ((**l_1624) && (&g_314 != (void*)0))) , 0L)) | 18446744073709551606UL) | p_12) <= l_1632) >= (**l_1624)))) <= l_1602[0][1][3]) != 1UL))
            { 
                int16_t l_1656[5];
                int32_t **l_1657 = &l_1570;
                struct S0 *l_1664 = &g_154;
                int i;
                for (i = 0; i < 5; i++)
                    l_1656[i] = 0x3BF0L;
                if (p_12)
                    break;
                for (l_1615 = 3; (l_1615 >= 0); l_1615 -= 1)
                { 
                    l_1656[3] ^= p_12;
                }
                (*l_1657) = ((***g_1045) = &l_1601[0][3][0]);
                for (l_1632 = 0; (l_1632 <= 2); l_1632 += 1)
                { 
                    uint8_t *l_1658 = (void*)0;
                    uint8_t *l_1659 = &g_81[4][1];
                    int8_t l_1683 = 0xD6L;
                    int i, j, k;
                    (*l_1657) = ((**g_1046) = ((l_1656[(l_1632 + 1)] && ((*l_1659) = l_1656[g_89])) , &l_1601[1][2][0]));
                    if (l_1656[(l_1632 + 2)])
                        break;
                    (*l_1575) = ((((g_987[1] ^= ((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((l_1665 = l_1664) == l_1664), 0x53L)), (safe_add_func_int64_t_s_s((((*l_1659) ^= (safe_rshift_func_int8_t_s_s(((((void*)0 != &g_702[g_1117]) <= 65535UL) || ((safe_rshift_func_uint8_t_u_u((!(safe_sub_func_int16_t_s_s(((((safe_add_func_uint16_t_u_u(((((safe_div_func_int64_t_s_s(g_116, l_1579)) , g_1680) == &g_1681) ^ p_12), (**l_1624))) != g_1682) == 1L) ^ p_12), 0xF765L))), 4)) ^ (**g_813))), (**l_1657)))) == g_157.f0), p_12)))) <= l_1683)) == (**g_1680)) > 0L) , (*l_1575));
                    (*l_1575) = 0x122B7BAEL;
                    return (**l_1624);
                }
            }
            else
            { 
                int32_t l_1700 = 0x68A3799DL;
                const int32_t l_1701 = 0x6E46CB86L;
                for (g_1666.f1 = 0; (g_1666.f1 <= 3); g_1666.f1 += 1)
                { 
                    int64_t *l_1714 = &g_36;
                    int64_t *l_1715[7] = {&g_344,&g_344,&l_1605,&g_344,&g_344,&l_1605,&g_344};
                    struct S0 *l_1719 = &g_157;
                    struct S0 **l_1720 = &g_156[3];
                    int i;
                    g_1702[0] &= (l_1602[0][1][3] ^= (safe_lshift_func_int16_t_s_u(((p_12 && ((((safe_div_func_int16_t_s_s(p_12, (safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((-1L), (safe_add_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((&g_304[0][1][0] == &g_304[0][1][0]), ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(249UL, 0)), 7)) , (l_1700 = (p_12 , p_12))))) <= 0x49L), g_174.f1)))), 0)))) && p_12) | 0x09L) , p_12)) > g_1117), l_1701)));
                    (*l_1575) = (safe_add_func_uint16_t_u_u((65532UL < (((safe_sub_func_int8_t_s_s((255UL < ((safe_lshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((l_1716[1][5][0] &= ((*l_1714) = (l_1713 & (**l_1624)))) > ((void*)0 == (**g_1045))), (((**g_1136)--) || ((**l_1624) >= (*g_1681))))), 0x04AF2A17L)), g_18[1][0][3])) == (*g_798))), g_18[0][0][5])) >= 0x7DEDD59E97B283A7LL) || g_174.f1)), g_81[4][3]));
                    (*l_1720) = l_1719;
                }
            }
        }
    }
    if ((l_1596 |= (((safe_mul_func_int8_t_s_s(l_1615, (!(safe_add_func_uint8_t_u_u(g_304[0][1][0], 0x61L))))) != (((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(l_1730, (((safe_mod_func_uint64_t_u_u((~l_1734), (safe_sub_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u((((0xD8E8602314C0469CLL | (((l_1602[0][1][3] = ((safe_div_func_uint8_t_u_u((~(safe_rshift_func_uint16_t_u_u((0x1148L && 0x4E15L), g_1702[0]))), 0xCDL)) & 0x0BD0107E1B5675C7LL)) <= 0UL) < 0x64DAD167L)) , l_1744) , 0x006BL), 15)) && (****g_811)) | (-1L)), g_304[0][1][0])))) , p_12) > (***g_812)))), 15)) , 3UL) && 4294967295UL)) < p_12)))
    { 
        union U2 **l_1745 = (void*)0;
        union U2 **l_1746 = &g_564;
        union U2 *l_1748 = &g_1414;
        union U2 **l_1747[6];
        int i;
        for (i = 0; i < 6; i++)
            l_1747[i] = &l_1748;
        l_1749 = ((*l_1746) = &g_224);
    }
    else
    { 
        uint32_t l_1752 = 0xE633E860L;
        int32_t l_1763 = 0xB4B7D52EL;
        struct S0 ***l_1770[6][2] = {{&g_376[1][3][4],&g_376[1][3][4]},{&g_376[1][3][4],&g_376[1][3][4]},{&g_376[1][3][4],&g_376[1][3][4]},{&g_376[1][3][4],&g_376[1][3][4]},{&g_376[1][3][4],&g_376[1][3][4]},{&g_376[1][3][4],&g_376[1][3][4]}};
        union U2 *l_1805[2];
        int32_t l_1839 = 0x393A4D89L;
        int32_t l_1840 = 0xFF23D6F0L;
        int32_t l_1843 = 9L;
        int32_t l_1848 = 1L;
        int32_t l_1849 = (-4L);
        int32_t l_1850 = 0xB7B7E2A7L;
        int32_t l_1852 = 0L;
        int16_t **l_1860 = &g_1681;
        int64_t *l_1897[2];
        int32_t *l_1898 = &l_1848;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1805[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_1897[i] = &g_36;
        for (g_277 = 0; (g_277 == 15); ++g_277)
        { 
            uint32_t l_1759 = 0x00827BC0L;
            uint8_t *l_1762[3];
            int32_t l_1768 = 0x3369691CL;
            int32_t *l_1769 = &g_18[0][2][0];
            int i;
            for (i = 0; i < 3; i++)
                l_1762[i] = (void*)0;
            ++l_1752;
            (*l_1769) = (((((((safe_sub_func_int16_t_s_s(p_12, (-1L))) < (-1L)) & (safe_lshift_func_uint8_t_u_u(((++l_1759) || (0x35BDL > 0xBA96L)), 3))) || (l_1763 = l_1759)) == (safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s(0x22ECL, l_1768)), 0x941FL))) <= l_1744.f2) , l_1759);
        }
        l_1602[0][1][3] ^= ((g_1772 = (g_1771 = (g_376[5][2][6] = (void*)0))) != ((l_1763 = (l_1596 &= (safe_unary_minus_func_uint8_t_u((safe_sub_func_int64_t_s_s((((l_1744.f1 != ((((((l_1763 , 1L) == ((&g_1681 == (void*)0) | (safe_lshift_func_int8_t_s_s(((--(*g_798)) <= (safe_mod_func_uint64_t_u_u((((((g_1702[5] < 0UL) , p_12) | l_1752) , 0xC10AFAE7L) || 0xDE5C1403L), 4UL))), 7)))) >= p_12) | l_1752) | 1L) >= g_663)) != l_1615) > p_12), p_12)))))) , l_1782[2][2]));
        for (g_895 = 0; (g_895 <= 1); g_895 += 1)
        { 
            int8_t l_1790 = 0L;
            union U1 l_1797 = {0UL};
            int32_t l_1803 = 0x6411DC7CL;
            int32_t l_1838 = 0L;
            int32_t l_1844 = (-9L);
            int32_t l_1845 = 0L;
            int32_t l_1846[4] = {0xFD0AF56BL,0xFD0AF56BL,0xFD0AF56BL,0xFD0AF56BL};
            int16_t **l_1862 = &g_1681;
            union U2 l_1863 = {0x578EB767FC250D91LL};
            int64_t *l_1874 = &g_1847;
            int32_t *l_1875 = &l_1763;
            struct S0 *** const l_1881 = &l_1782[5][4];
            int i;
            for (g_1666.f1 = 0; (g_1666.f1 <= 3); g_1666.f1 += 1)
            { 
                uint16_t *l_1784 = &g_286.f0;
                uint16_t **l_1783 = &l_1784;
                int32_t l_1795 = 0x39B672ECL;
                int32_t l_1796 = 0xCD212F1EL;
                const int32_t *l_1801 = &g_18[0][2][0];
                const int32_t **l_1800 = &l_1801;
                const int32_t ***l_1799 = &l_1800;
                const int32_t ****l_1798[4][6][6] = {{{&l_1799,(void*)0,(void*)0,(void*)0,(void*)0,&l_1799},{&l_1799,&l_1799,&l_1799,&l_1799,&l_1799,&l_1799},{&l_1799,&l_1799,(void*)0,&l_1799,&l_1799,&l_1799},{&l_1799,(void*)0,&l_1799,&l_1799,&l_1799,(void*)0},{&l_1799,&l_1799,&l_1799,&l_1799,&l_1799,&l_1799},{&l_1799,&l_1799,(void*)0,&l_1799,&l_1799,&l_1799}},{{&l_1799,&l_1799,&l_1799,&l_1799,&l_1799,&l_1799},{&l_1799,&l_1799,&l_1799,&l_1799,&l_1799,&l_1799},{&l_1799,&l_1799,(void*)0,&l_1799,&l_1799,&l_1799},{&l_1799,(void*)0,&l_1799,&l_1799,&l_1799,(void*)0},{&l_1799,&l_1799,&l_1799,&l_1799,&l_1799,&l_1799},{&l_1799,&l_1799,(void*)0,&l_1799,&l_1799,&l_1799}},{{&l_1799,&l_1799,&l_1799,&l_1799,&l_1799,&l_1799},{&l_1799,&l_1799,&l_1799,&l_1799,&l_1799,&l_1799},{&l_1799,&l_1799,(void*)0,&l_1799,&l_1799,&l_1799},{&l_1799,(void*)0,&l_1799,&l_1799,&l_1799,(void*)0},{&l_1799,&l_1799,&l_1799,&l_1799,&l_1799,&l_1799},{&l_1799,&l_1799,(void*)0,&l_1799,&l_1799,&l_1799}},{{&l_1799,&l_1799,&l_1799,&l_1799,&l_1799,&l_1799},{&l_1799,&l_1799,&l_1799,&l_1799,&l_1799,&l_1799},{&l_1799,&l_1799,(void*)0,&l_1799,&l_1799,&l_1799},{&l_1799,(void*)0,&l_1799,&l_1799,&l_1799,(void*)0},{&l_1799,&l_1799,&l_1799,&l_1799,&l_1799,&l_1799},{&l_1799,&l_1799,(void*)0,&l_1799,&l_1799,&l_1799}}};
                int32_t *l_1802[2];
                uint32_t ** const **l_1807 = &g_1135;
                struct S0 l_1820 = {0x1684L,-1L,7L};
                int32_t l_1837 = 0xE4AD9D4DL;
                uint32_t l_1853 = 0x2B8978DEL;
                int16_t ***l_1861 = &l_1860;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1802[i] = &l_1796;
                for (g_91 = 0; (g_91 <= 3); g_91 += 1)
                { 
                    uint16_t ***l_1785 = &l_1783;
                    (*l_1785) = l_1783;
                }
                l_1796 ^= (g_147 > (safe_div_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(((****g_811) == l_1790), (-4L))) ^ 1UL), (+((((+0x079BL) && (((((*g_798) , p_12) <= l_1795) == 0x7D550126L) < 0x98L)) , l_1795) <= p_12)))));
                l_1803 ^= (l_1797 , (1L & (l_1798[3][1][5] != (void*)0)));
                for (g_436 = 3; (g_436 >= 0); g_436 -= 1)
                { 
                    union U2 **l_1804[4][4] = {{&l_1749,&l_1749,&l_1749,&l_1749},{&l_1749,&l_1749,&l_1749,&l_1749},{&l_1749,&l_1749,&l_1749,&l_1749},{&l_1749,&l_1749,&l_1749,&l_1749}};
                    uint32_t ** const ***l_1806[1][2][6];
                    uint8_t *l_1835 = (void*)0;
                    uint8_t *l_1836 = &l_1579;
                    int32_t l_1841 = 1L;
                    int8_t l_1842 = 0xFDL;
                    int32_t l_1851 = 1L;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 6; k++)
                                l_1806[i][j][k] = &g_1134[6];
                        }
                    }
                    l_1805[1] = (void*)0;
                    l_1807 = &g_1135;
                    l_1602[0][1][3] = (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s(g_18[g_895][g_1666.f1][g_895], (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(g_801[(g_436 + 1)][(g_895 + 2)][g_436], 14)) < (safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((l_1820 , (safe_rshift_func_int16_t_s_s(0xA562L, ((safe_div_func_int64_t_s_s((g_18[g_895][g_1666.f1][g_895] && (((safe_div_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((((*l_1836) = (safe_mul_func_int8_t_s_s(l_1797.f0, p_12))) , l_1797.f0), p_12)), 11)), l_1837)), g_1666.f1)) , (*g_1137)) && p_12)), (*g_798))) && 0xC05EBBBAL)))), g_801[1][3][2])), l_1790))), 0xD47DD472L)))) <= 0xEA422DEA0EAA0E8BLL), 14));
                    (***g_1045) = &g_18[g_895][g_1666.f1][g_895];
                    --l_1853;
                }
                l_1838 = (safe_div_func_int16_t_s_s((l_1649 & ((safe_div_func_int32_t_s_s((((l_1845 &= (((((*l_1861) = l_1860) != l_1862) , l_1820) , ((l_1863 , &g_1203[0][1]) != (void*)0))) <= (-7L)) ^ l_1596), l_1863.f0)) || g_801[1][2][2])), (**g_1680)));
            }
            (*l_1875) = (safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s((**g_57), (+(l_1615 = (g_43 >= (safe_sub_func_uint16_t_u_u(((((*g_798) > (((*l_1874) = (l_1873 == (void*)0)) <= 0UL)) & 0xF6L) != 0L), g_174.f0))))))), p_12));
            (*l_1875) = l_1852;
            (*l_1875) ^= p_12;
            for (g_75 = 0; (g_75 <= 3); g_75 += 1)
            { 
                uint16_t l_1876 = 1UL;
                struct S0 ** const *l_1878 = (void*)0;
                if (l_1876)
                    break;
                for (l_1849 = 3; (l_1849 >= 0); l_1849 -= 1)
                { 
                    int32_t **l_1877 = &l_1875;
                    struct S0 l_1879 = {0x8ED3L,0L,-6L};
                    union U1 l_1880 = {3UL};
                    (*l_1877) = ((*g_1047) = &l_1840);
                    l_1839 = ((l_1878 = l_1878) != ((l_1879 , l_1880) , l_1881));
                    if ((**l_1877))
                        break;
                    (*l_1875) = l_1763;
                }
            }
        }
        (*l_1898) = ((l_1596 &= ((safe_add_func_uint8_t_u_u(l_1602[0][1][2], (l_1615 == (safe_lshift_func_int8_t_s_s(l_1602[0][1][3], 2))))) , (safe_div_func_int32_t_s_s((&l_1843 == (l_1896 = (((safe_mul_func_int16_t_s_s(p_12, (g_94 < (safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(0x46L, 6)), p_12)), p_12))))) < l_1850) , &l_1602[0][1][0]))), 5L)))) >= p_12);
    }
    (*l_1896) = (((l_1896 == l_1896) & (&g_564 != (void*)0)) != (g_1847 &= g_154.f0));
    return g_37;
}



static int8_t  func_15(uint16_t  p_16)
{ 
    int32_t *l_22 = &g_18[0][0][3];
    int32_t l_977[7] = {1L,1L,1L,1L,1L,1L,1L};
    uint32_t *l_1027[3];
    uint32_t **l_1026 = &l_1027[2];
    uint32_t ***l_1025[4] = {&l_1026,&l_1026,&l_1026,&l_1026};
    union U1 l_1053 = {0x65E0L};
    int8_t l_1082 = 0xDEL;
    int32_t **l_1103 = &l_22;
    int32_t ***l_1102 = &l_1103;
    int32_t *** const *l_1101 = &l_1102;
    int8_t l_1105 = (-3L);
    struct S0 * const l_1144 = &g_159;
    int16_t l_1155[7] = {0xEC21L,0xAFACL,0xEC21L,0xEC21L,0xAFACL,0xEC21L,0xEC21L};
    struct S0 *l_1159 = &g_157;
    int64_t l_1175[6][1][7] = {{{1L,1L,1L,1L,1L,1L,1L}},{{0x9B037D2D2F12EA22LL,0xE465886AFCD0D196LL,0x9B037D2D2F12EA22LL,0xE465886AFCD0D196LL,0x9B037D2D2F12EA22LL,0xE465886AFCD0D196LL,0x9B037D2D2F12EA22LL}},{{1L,1L,1L,1L,1L,1L,1L}},{{0x9B037D2D2F12EA22LL,0xE465886AFCD0D196LL,0x9B037D2D2F12EA22LL,0xE465886AFCD0D196LL,0x9B037D2D2F12EA22LL,0xE465886AFCD0D196LL,0x9B037D2D2F12EA22LL}},{{1L,1L,1L,1L,1L,1L,1L}},{{0x9B037D2D2F12EA22LL,0xE465886AFCD0D196LL,0x9B037D2D2F12EA22LL,0xE465886AFCD0D196LL,0x9B037D2D2F12EA22LL,0xE465886AFCD0D196LL,0x9B037D2D2F12EA22LL}}};
    int32_t l_1196 = 0x6101553BL;
    int32_t l_1201[3];
    uint64_t l_1221 = 18446744073709551612UL;
    int8_t l_1223 = 0x77L;
    int16_t l_1252 = (-1L);
    uint8_t *l_1328 = &g_81[1][3];
    int32_t ** const l_1340 = &g_1204;
    int8_t ***l_1388 = &g_57;
    int8_t ****l_1387 = &l_1388;
    union U2 *l_1413 = &g_1414;
    const union U1 * const **l_1501 = (void*)0;
    int16_t l_1544 = 0x638FL;
    int32_t l_1548[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint32_t ** const ***l_1552[3][2][5] = {{{&g_1134[2],&g_1134[2],&g_1134[2],&g_1134[2],&g_1134[2]},{&g_1134[2],&g_1134[3],&g_1134[3],&g_1134[2],&g_1134[2]}},{{&g_1134[2],&g_1134[2],&g_1134[2],&g_1134[2],&g_1134[2]},{&g_1134[2],&g_1134[2],&g_1134[3],&g_1134[3],&g_1134[2]}},{{&g_1134[2],&g_1134[2],&g_1134[2],&g_1134[2],&g_1134[2]},{&g_1134[2],&g_1134[3],&g_1134[3],&g_1134[2],&g_1134[2]}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1027[i] = &g_224.f2;
    for (i = 0; i < 3; i++)
        l_1201[i] = 0x69C2F3ACL;
    if (p_16)
    { 
        int32_t *l_17 = &g_18[0][2][0];
        int32_t l_25 = (-8L);
        int32_t l_978[4][4] = {{(-9L),0x7D4AC144L,(-9L),(-9L)},{0x7D4AC144L,0x7D4AC144L,0x966A4A3BL,0x7D4AC144L},{0x7D4AC144L,(-9L),(-9L),0x7D4AC144L},{(-9L),0x7D4AC144L,(-9L),(-9L)}};
        const struct S0 l_991 = {-5L,1L,0x4EL};
        int32_t ** const **l_1049 = &g_1046;
        uint32_t l_1065 = 4294967294UL;
        uint64_t l_1074 = 0x8740F4DD005DEE33LL;
        union U2 *l_1079 = (void*)0;
        uint32_t l_1128[7][6][1] = {{{1UL},{0x639421D9L},{4294967288UL},{0x639421D9L},{1UL},{4294967295UL}},{{1UL},{0x639421D9L},{4294967288UL},{0x639421D9L},{1UL},{4294967295UL}},{{1UL},{0x639421D9L},{4294967288UL},{0x639421D9L},{1UL},{4294967295UL}},{{1UL},{0x639421D9L},{4294967288UL},{0x639421D9L},{1UL},{4294967295UL}},{{1UL},{0x639421D9L},{4294967288UL},{0x639421D9L},{1UL},{4294967295UL}},{{1UL},{0x639421D9L},{4294967288UL},{0x639421D9L},{1UL},{4294967295UL}},{{1UL},{0x639421D9L},{4294967288UL},{0x639421D9L},{1UL},{4294967295UL}}};
        struct S0 **l_1145 = (void*)0;
        struct S0 **l_1146 = &g_156[2];
        int i, j, k;
        (*l_17) &= g_3;
lbl_1084:
        for (p_16 = 0; (p_16 <= 1); p_16 += 1)
        { 
            uint64_t l_26[3][3][6] = {{{18446744073709551615UL,0UL,0x2A12551AD04870E7LL,0UL,18446744073709551615UL,0UL},{0x99E855C71DA89A03LL,0UL,18446744073709551615UL,0x4CCF97A265D28285LL,0x7C83BE7680DD333FLL,0x9656D2926A093958LL},{0x2A12551AD04870E7LL,0UL,0UL,0UL,1UL,0x9656D2926A093958LL}},{{18446744073709551615UL,4UL,18446744073709551615UL,0x4AC961F9DA978833LL,0UL,0UL},{1UL,0x2A12551AD04870E7LL,0x2A12551AD04870E7LL,1UL,18446744073709551615UL,0UL},{0x4AC961F9DA978833LL,18446744073709551615UL,4UL,18446744073709551615UL,0x065D6F9C2329B61FLL,0x6FCB758C9E433C58LL}},{{0UL,0UL,0UL,0x2A12551AD04870E7LL,0x065D6F9C2329B61FLL,0x4AC961F9DA978833LL},{0x4CCF97A265D28285LL,18446744073709551615UL,0UL,0x99E855C71DA89A03LL,18446744073709551615UL,0x99E855C71DA89A03LL},{0UL,0x2A12551AD04870E7LL,0UL,18446744073709551615UL,0UL,0x065D6F9C2329B61FLL}}};
            int8_t *l_903 = &g_3;
            struct S0 l_904 = {1L,0x3CL,0x15L};
            int32_t l_980 = 0xCD1F2074L;
            int32_t l_982 = (-1L);
            int32_t l_986 = 0x59EDAA3EL;
            union U1 l_992 = {0xD521L};
            uint16_t l_1009 = 0x2DA1L;
            const struct S0 **l_1033 = (void*)0;
            int32_t *l_1036 = &g_18[0][2][0];
            int32_t **l_1037 = (void*)0;
            int32_t **l_1038 = (void*)0;
            int32_t **l_1039 = &l_22;
            union U2 * const l_1078 = &g_224;
            int i, j, k;
            for (g_3 = 0; (g_3 <= 1); g_3 += 1)
            { 
                int64_t *l_35 = &g_36;
                uint32_t *l_893 = (void*)0;
                uint32_t *l_894 = &g_895;
                uint16_t *l_902 = &g_161;
                uint8_t *l_962 = (void*)0;
                uint8_t **l_961 = &l_962;
                uint8_t ***l_960 = &l_961;
                int32_t l_979 = 0L;
                int32_t l_981 = 7L;
                int32_t l_983 = 1L;
                int32_t l_984 = 0xCF3CAB7EL;
                int32_t l_985 = 1L;
                l_25 |= (safe_add_func_uint64_t_u_u((((+(l_22 == (void*)0)) == (safe_mul_func_uint16_t_u_u((p_16 & g_3), (0x88CBL >= ((p_16 ^ ((g_18[0][2][0] <= g_18[0][2][0]) || 0xA7C3387DL)) & 0xB8909FF4L))))) != 0xF0CFADBAL), (*l_22)));
                if (l_26[1][2][3])
                    break;
            }
            (*l_1039) = l_1036;
            if ((*l_22))
                break;
            for (g_174.f1 = 0; (g_174.f1 <= 1); g_174.f1 += 1)
            { 
                int16_t l_1042 = 0x0E44L;
                int32_t l_1083 = 0xE88CC2DAL;
                l_1042 ^= (safe_mul_func_int8_t_s_s((p_16 >= g_116), (**l_1039)));
                if (((*l_1036) = p_16))
                { 
                    int32_t * const l_1043[4][4][5] = {{{(void*)0,(void*)0,&l_977[4],&l_25,&l_977[0]},{&l_25,&g_18[1][3][4],&l_978[2][0],(void*)0,(void*)0},{&g_18[0][2][0],(void*)0,&g_18[1][3][3],&l_978[0][1],&l_978[2][0]},{&l_982,&l_982,(void*)0,&l_982,&l_982}},{{&l_982,(void*)0,&l_982,&l_25,&l_978[0][1]},{(void*)0,&g_37,(void*)0,&l_982,&l_980},{&l_982,(void*)0,&g_37,(void*)0,&l_978[0][1]},{&l_25,&l_982,(void*)0,(void*)0,(void*)0}},{{&l_978[0][1],&l_980,&l_978[0][1],(void*)0,&l_977[4]},{&l_977[4],&l_978[2][0],&g_18[1][3][3],(void*)0,&l_25},{&l_980,&l_977[4],&l_25,&l_982,&l_980},{&l_25,&l_978[3][1],&g_18[1][3][3],&l_25,&g_37}},{{&l_982,&g_18[1][3][4],&l_978[0][1],&l_978[0][1],&g_18[1][3][4]},{&l_980,&g_18[1][3][4],(void*)0,&l_977[4],(void*)0},{(void*)0,&l_978[3][1],&g_37,&l_980,&g_18[0][2][0]},{&g_18[1][3][3],&l_977[4],(void*)0,&l_25,&l_977[0]}}};
                    int32_t **l_1044 = &g_169[2];
                    int i, j, k;
                    (*l_1044) = l_1043[3][0][2];
                    if (p_16)
                        goto lbl_1084;
                    (*l_1044) = (void*)0;
                    (*l_1044) = &g_37;
                }
                else
                { 
                    int32_t ** const ***l_1048 = (void*)0;
                    (*l_22) |= p_16;
                    l_1049 = g_1045;
                    if (l_1042)
                        continue;
                }
                for (g_3 = 0; (g_3 <= 1); g_3 += 1)
                { 
                    int32_t l_1064[4] = {0xD5B85F47L,0xD5B85F47L,0xD5B85F47L,0xD5B85F47L};
                    int i, j, k;
                    if (p_16)
                        break;
                    if (l_1042)
                        break;
                    l_1064[0] = (g_18[g_3][(p_16 + 1)][g_3] = ((~(safe_sub_func_uint8_t_u_u(((0xD422391A6F71EA24LL > (g_286.f0 || ((l_992 = ((**g_701) = l_1053)) , p_16))) , 0UL), ((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s(9L, 7)) >= (safe_rshift_func_int16_t_s_u(((safe_div_func_uint16_t_u_u(65528UL, l_1042)) | 0xEB47L), l_1042))) == p_16), g_987[0])), g_344)) , 0x33L)))) == p_16));
                    if (p_16)
                        break;
                }
                (*l_1036) = (l_1065 & (safe_mul_func_int8_t_s_s(((***g_812) = (safe_rshift_func_int16_t_s_s((p_16 , ((void*)0 != &l_1065)), (((0x0F37L || ((safe_mul_func_uint16_t_u_u(g_159.f2, (safe_div_func_int8_t_s_s(l_1042, 0xCBL)))) , (*l_22))) > p_16) | g_174.f2)))), 0x84L)));
                l_1083 ^= ((((*l_22) = l_1074) | (safe_sub_func_uint16_t_u_u(((!(p_16 || ((l_1078 == l_1079) && (safe_mod_func_int8_t_s_s((**g_813), 0xD0L))))) | ((l_978[0][1] = (l_1082 = p_16)) ^ 4294967289UL)), g_304[0][2][0]))) , 0x1A72EC85L);
            }
        }
        for (p_16 = (-10); (p_16 != 38); p_16 = safe_add_func_int16_t_s_s(p_16, 8))
        { 
            uint64_t l_1091 = 0x673498DA7FD70835LL;
            union U2 l_1099 = {0x34A1945B28AE51DDLL};
            const uint32_t *l_1108[2];
            int32_t l_1118[2][5][7] = {{{(-1L),0L,0xBB52163AL,(-2L),(-8L),0xB3B036F9L,(-8L)},{(-10L),0x213204E1L,0x213204E1L,(-10L),0xA763633CL,(-10L),0x213204E1L},{(-8L),3L,(-1L),(-2L),(-1L),3L,(-8L)},{(-8L),0x213204E1L,0L,0x213204E1L,(-8L),(-8L),0x213204E1L},{0xBCABBB83L,0L,0xBCABBB83L,0xB3B036F9L,(-1L),(-1L),(-8L)}},{{0x213204E1L,0xA763633CL,0L,0L,0xA763633CL,0x213204E1L,0xA763633CL},{0xBCABBB83L,0xB3B036F9L,(-1L),(-1L),(-8L),(-1L),(-1L)},{(-8L),(-8L),0x213204E1L,0L,0x213204E1L,(-8L),(-8L)},{(-8L),0xB3B036F9L,0xBB52163AL,0xB3B036F9L,(-8L),3L,(-1L)},{(-10L),0xA763633CL,(-10L),0x213204E1L,0x213204E1L,(-10L),0xA763633CL}}};
            int16_t l_1125 = 0xEEBAL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1108[i] = &g_94;
        }
        for (g_37 = 0; (g_37 < 10); g_37 = safe_add_func_int16_t_s_s(g_37, 8))
        { 
            (**g_1046) = (***l_1101);
            return p_16;
        }
        (*l_1146) = l_1144;
    }
    else
    { 
        uint8_t *l_1156 = &g_81[2][2];
        int32_t l_1173 = 0xEE297FB6L;
        int32_t l_1174 = (-2L);
        uint16_t *l_1176 = &l_1053.f0;
        int64_t l_1194 = 0xB67CE4940C5DFBDALL;
        const struct S0 *l_1206 = &g_159;
        int32_t l_1271 = 9L;
        int32_t l_1272 = 3L;
        int32_t l_1273 = (-2L);
        int32_t l_1276 = 0L;
        uint8_t l_1279 = 0xB3L;
        uint16_t l_1301 = 0UL;
        union U1 l_1318 = {0xE6B4L};
        int8_t l_1347 = 0xA9L;
        int16_t l_1378 = 0x9AE9L;
        int8_t **l_1402 = &g_58;
        int32_t *l_1403 = &l_1272;
        int16_t l_1422 = 0xF37EL;
        uint32_t l_1435 = 18446744073709551608UL;
        uint32_t l_1489 = 0UL;
        uint32_t l_1490[6] = {18446744073709551611UL,0x0803BA5DL,0x0803BA5DL,18446744073709551611UL,0x0803BA5DL,0x0803BA5DL};
        int i;
        if (((***g_1046) = (safe_rshift_func_int16_t_s_u(((g_113 = 0xE72CL) >= ((7UL <= ((((((*l_1176) = (safe_mul_func_uint8_t_u_u(p_16, (((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u(((*l_1156)++), ((l_1159 = l_1159) == (void*)0))) != (safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u((~((safe_div_func_uint8_t_u_u((l_1174 ^= ((safe_sub_func_uint32_t_u_u(p_16, (((safe_add_func_uint64_t_u_u(l_1173, l_1173)) ^ p_16) > l_1173))) != 0x2D98L)), 255UL)) > (*g_798))), (***g_1046))), 1UL)), (***l_1102)))), g_344)) > l_1175[3][0][3]) , l_1174)))) <= p_16) | g_286.f0) <= (-7L)) | 0x100E404553A808BCLL)) & g_174.f1)), p_16))))
        { 
            uint16_t *l_1181 = &g_987[3];
            int64_t *l_1182 = (void*)0;
            int64_t *l_1183[4][6][2] = {{{(void*)0,(void*)0},{&g_436,&g_436},{&g_344,&l_1175[3][0][0]},{(void*)0,(void*)0},{&g_436,(void*)0},{&l_1175[5][0][2],&l_1175[3][0][3]}},{{&g_36,&l_1175[3][0][3]},{&g_436,&g_36},{&l_1175[3][0][3],&g_436},{&l_1175[3][0][3],&g_36},{&g_436,&l_1175[3][0][3]},{&g_36,&l_1175[3][0][3]}},{{&l_1175[5][0][2],(void*)0},{&g_436,(void*)0},{(void*)0,&l_1175[3][0][0]},{&g_344,&g_436},{&g_436,(void*)0},{(void*)0,(void*)0}},{{&g_436,&g_436},{&g_344,&l_1175[3][0][0]},{(void*)0,(void*)0},{&g_436,(void*)0},{&l_1175[5][0][2],&l_1175[3][0][3]},{&g_36,&l_1175[3][0][3]}}};
            int32_t *l_1192 = &g_37;
            union U1 l_1193 = {0x5509L};
            struct S0 ***l_1198 = (void*)0;
            int8_t **l_1210 = &g_58;
            int32_t ***l_1251 = (void*)0;
            int32_t l_1269 = 0x242AAA83L;
            int32_t l_1270 = 0x30F76A46L;
            int32_t l_1274 = 0x53CF7A71L;
            int32_t l_1275 = 0x1FC64F69L;
            int32_t l_1277 = (-1L);
            int32_t l_1278[4];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_1278[i] = 0xBE43B2C7L;
            (***l_1102) = (((g_344 = (safe_mul_func_int16_t_s_s(0L, ((*l_1181) &= ((*l_1176)--))))) < ((*l_22) | ((safe_lshift_func_int16_t_s_s((l_1159 != (void*)0), (safe_rshift_func_uint8_t_u_s(((*l_1159) , ((safe_mod_func_int64_t_s_s(((l_1174 = ((*l_1192) = (safe_rshift_func_uint16_t_u_s(g_1117, 6)))) == ((l_1193 , l_1194) ^ p_16)), (*g_798))) == p_16)), 5)))) , p_16))) <= p_16);
            (*l_1103) = ((*l_1159) , ((*g_1047) = &l_1173));
            if (((l_1201[0] = ((l_1193 , ((~l_1196) , (safe_unary_minus_func_uint32_t_u(((((void*)0 == l_1198) & p_16) > (((safe_lshift_func_int8_t_s_u((-7L), 2)) || p_16) || (*g_798))))))) ^ g_224.f2)) ^ (*g_798)))
            { 
                int8_t **l_1211 = &g_58;
                int32_t l_1222[7][5] = {{1L,0xC5DA1C51L,1L,1L,0x5505A659L},{(-10L),(-10L),1L,0xC5DA1C51L,1L},{0x80D9C2F1L,1L,0x5505A659L,0x5505A659L,1L},{1L,1L,0x80D9C2F1L,1L,0x5505A659L},{0xC5DA1C51L,1L,1L,1L,0xC5DA1C51L},{0x80D9C2F1L,(-10L),1L,0x5505A659L,(-10L)},{0xC5DA1C51L,1L,1L,0xC5DA1C51L,0x5505A659L}};
                int32_t ***l_1250[4][4][6] = {{{&l_1103,(void*)0,(void*)0,&l_1103,&l_1103,&l_1103},{&l_1103,&l_1103,&l_1103,&l_1103,&l_1103,&l_1103},{&l_1103,&l_1103,&l_1103,&l_1103,&l_1103,&l_1103},{&l_1103,&l_1103,&l_1103,&l_1103,&l_1103,&l_1103}},{{&l_1103,&l_1103,&l_1103,(void*)0,&l_1103,&l_1103},{&l_1103,(void*)0,&l_1103,&l_1103,(void*)0,&l_1103},{&l_1103,(void*)0,&l_1103,&l_1103,&l_1103,&l_1103},{&l_1103,&l_1103,(void*)0,&l_1103,&l_1103,&l_1103}},{{&l_1103,&l_1103,(void*)0,&l_1103,&l_1103,&l_1103},{&l_1103,&l_1103,&l_1103,&l_1103,&l_1103,&l_1103},{&l_1103,&l_1103,(void*)0,(void*)0,&l_1103,&l_1103},{&l_1103,(void*)0,(void*)0,&l_1103,&l_1103,&l_1103}},{{&l_1103,&l_1103,&l_1103,&l_1103,&l_1103,&l_1103},{&l_1103,&l_1103,&l_1103,&l_1103,&l_1103,&l_1103},{&l_1103,&l_1103,&l_1103,&l_1103,&l_1103,&l_1103},{&l_1103,&l_1103,&l_1103,(void*)0,&l_1103,&l_1103}}};
                uint8_t l_1253[5][3] = {{9UL,0UL,9UL},{9UL,0UL,0UL},{0UL,9UL,9UL},{0UL,9UL,0UL},{7UL,0UL,0x9BL}};
                int16_t **l_1267[3][2];
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1267[i][j] = (void*)0;
                }
                if (((*l_1159) , (+l_1173)))
                { 
                    int32_t * const **l_1205 = &g_1203[0][3];
                    const struct S0 **l_1207[7] = {&g_100[1],&g_100[1],&l_1206,&g_100[1],&g_100[1],&l_1206,&g_100[1]};
                    int32_t *l_1208 = (void*)0;
                    int8_t ***l_1209[1][2];
                    int32_t **** const *l_1214 = (void*)0;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1209[i][j] = (void*)0;
                    }
                    (*l_1205) = g_1203[0][3];
                    g_100[1] = l_1206;
                    (***l_1101) = l_1208;
                    (**g_1047) = (((((l_1210 = (void*)0) == l_1211) == (safe_mod_func_int16_t_s_s(p_16, ((l_1214 != (((((safe_add_func_int8_t_s_s((**g_57), (g_154.f1 = ((-1L) < (safe_mod_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(1L, l_1221)) < g_224.f0), 0x0CL)))))) , l_1222[4][4]) && p_16) <= l_1223) , (void*)0)) || p_16)))) || 1L) || (*g_798));
                    l_1174 = ((safe_mod_func_int16_t_s_s(((!p_16) > ((**g_813) &= ((safe_mul_func_uint16_t_u_u(g_36, (safe_mod_func_uint64_t_u_u((((((***g_1046) = (p_16 != (((safe_rshift_func_int8_t_s_s(((((*l_1176) = ((safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s(g_895, (safe_div_func_uint32_t_u_u((((+((((safe_sub_func_uint32_t_u_u((((safe_mod_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(p_16, (safe_div_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((void*)0 != l_1159), p_16)) && 0x96A9L), g_304[0][1][0])))) >= 0xBE7DL), 6UL)) , l_1250[2][1][3]) == l_1251), 0x73BD8CE6L)) || l_1173) >= 9UL) , 65529UL)) != l_1252) & l_1253[0][0]), p_16)))), p_16)) , p_16)) , (*l_1159)) , 0x98L), 0)) , &g_1204) != (void*)0))) <= 4294967295UL) ^ p_16) && 255UL), l_1194)))) <= (*g_798)))), 65534UL)) > p_16);
                }
                else
                { 
                    int32_t l_1268 = (-2L);
                    l_1268 ^= ((l_1053 , ((safe_sub_func_int8_t_s_s((**g_813), (safe_unary_minus_func_uint32_t_u((safe_sub_func_uint64_t_u_u((p_16 , ((***l_1102) != (safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(18446744073709551615UL, (*g_798))), (((((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((l_1267[0][1] == (void*)0), 0x281A24CEL)), (**g_1047))) ^ 0xCA846022L) & 0x6AL) , (*g_798)) >= 18446744073709551615UL))))), (*g_798))))))) && 0UL)) <= g_36);
                }
                --l_1279;
            }
            else
            { 
                (***g_1045) = g_1282;
            }
            for (g_1117 = 0; (g_1117 == 21); g_1117 = safe_add_func_int8_t_s_s(g_1117, 8))
            { 
                uint32_t l_1288 = 1UL;
                for (g_91 = 6; (g_91 < 53); g_91 = safe_add_func_uint16_t_u_u(g_91, 1))
                { 
                    uint64_t l_1287 = 0x38A510E939F25998LL;
                    const uint32_t l_1295[1][5] = {{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL}};
                    uint16_t l_1300 = 0x3BDFL;
                    int16_t l_1302[3][1];
                    int32_t *l_1306 = &g_18[0][1][4];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1302[i][j] = 1L;
                    }
                    l_1288 = (p_16 <= l_1287);
                    l_1302[2][0] &= (safe_add_func_uint16_t_u_u(g_277, ((safe_mod_func_int16_t_s_s((((((safe_mul_func_uint16_t_u_u((((*l_1192) <= (*l_1192)) < l_1295[0][4]), 0x9430L)) || ((safe_add_func_uint64_t_u_u(l_1288, (((**l_1026) ^= (((((safe_div_func_uint64_t_u_u(18446744073709551615UL, (*g_798))) , g_94) , p_16) || l_1300) > p_16)) || 0x7B68064AL))) < 0xE0L)) & p_16) ^ p_16) < l_1301), 0x3993L)) ^ (**g_1136))));
                    (*l_1306) ^= ((p_16 > ((+(safe_lshift_func_int8_t_s_s((*l_1192), 7))) | 1UL)) ^ 0x298F7EE1L);
                }
                for (l_1252 = 1; (l_1252 > 27); l_1252 = safe_add_func_int8_t_s_s(l_1252, 3))
                { 
                    return p_16;
                }
                (***l_1101) = (***g_1045);
            }
        }
        else
        { 
            uint64_t l_1338 = 18446744073709551615UL;
            int32_t l_1377[2];
            uint16_t l_1379 = 0x3D6FL;
            int8_t ***l_1385 = &g_57;
            int8_t ****l_1384 = &l_1385;
            uint32_t ****l_1419 = &l_1025[3];
            int i;
            for (i = 0; i < 2; i++)
                l_1377[i] = 0x77A9C8F8L;
lbl_1325:
            (****g_1045) ^= (safe_div_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s(((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((l_1318 , (((-10L) && 0UL) != l_1271)), (safe_mod_func_uint64_t_u_u((*g_798), p_16)))), ((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((**g_813) = 0L), g_116)), l_1174)) == p_16))), p_16)) , 0xA4L))) < l_1173), g_157.f0));
lbl_1411:
            if (((**g_1047) = (**g_1047)))
            { 
                int16_t l_1339 = 9L;
                if (((*l_22) &= 1L))
                { 
                    int32_t l_1326 = 0x25DDFC1CL;
lbl_1327:
                    if (g_174.f2)
                        goto lbl_1325;
                    l_1326 |= (****l_1101);
                    if (p_16)
                        goto lbl_1327;
                }
                else
                { 
                    (**g_1047) = ((((l_1328 == l_1328) <= (~(safe_div_func_int32_t_s_s((((((g_91 | ((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((0xB5L ^ (+(((*g_58) = (((!(p_16 ^ (l_1279 && (p_16 || 0x3CD6L)))) , g_94) == 255UL)) & 0UL))), 0UL)) <= 0x87L), g_663)) > 0xF2BC4B08L)) < 0xD7448232L) & l_1338) | l_1276) > l_1339), (****l_1101))))) , &l_1026) != (void*)0);
                }
            }
            else
            { 
                uint8_t l_1344 = 254UL;
                struct S0 *l_1353 = &g_154;
                int32_t l_1369 = 0x05EAF6AAL;
                int8_t *****l_1386[6] = {&l_1384,&l_1384,&l_1384,&l_1384,&l_1384,&l_1384};
                int i;
                if (((l_1340 == (void*)0) > ((*l_1156) = (safe_mul_func_int16_t_s_s(((+(l_1344 & 0x3BL)) == l_1338), (safe_sub_func_int16_t_s_s(l_1347, p_16)))))))
                { 
                    int32_t l_1350[1][4][3];
                    uint64_t *l_1351 = &l_1338;
                    int16_t *l_1352 = &l_1252;
                    struct S0 **l_1354 = &l_1159;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_1350[i][j][k] = 0x1F043B71L;
                        }
                    }
                    (***g_1045) = (***l_1101);
                    (****g_1045) |= (0x42F8L == ((*l_1352) = (((g_147 <= ((**g_57) |= (p_16 > (p_16 > ((l_1350[0][2][1] >= ((*g_798) , (((*l_1351) = ((*g_798) = (l_1338 == 1L))) >= g_157.f2))) < 2L))))) || 1UL) && 0x3FL)));
                    if (g_895)
                        goto lbl_1355;
lbl_1355:
                    (*l_1354) = l_1353;
                    if (g_147)
                        goto lbl_1325;
                }
                else
                { 
                    union U1 *l_1356 = &l_1318;
                    int32_t *l_1357 = &l_977[4];
                    int32_t *l_1358 = (void*)0;
                    int32_t *l_1359 = &l_1174;
                    int32_t *l_1360 = &g_37;
                    int32_t *l_1361 = &l_1272;
                    int32_t *l_1362 = (void*)0;
                    int32_t *l_1363 = &l_1272;
                    int32_t *l_1364 = &l_1272;
                    int32_t *l_1365 = &l_1272;
                    int32_t *l_1366 = &l_1271;
                    int32_t *l_1367 = &l_1174;
                    int32_t *l_1368 = &g_37;
                    int32_t *l_1370 = (void*)0;
                    int32_t *l_1371 = &l_1173;
                    int32_t *l_1372 = &l_1276;
                    int32_t *l_1373 = (void*)0;
                    int32_t *l_1374 = &g_18[0][2][0];
                    int32_t l_1375[6] = {0x70331B3BL,0x70331B3BL,0x70331B3BL,0x70331B3BL,0x70331B3BL,0x70331B3BL};
                    int32_t *l_1376[3][7][7] = {{{&l_1276,&l_1375[2],&l_1272,&g_37,&g_37,&l_1272,&l_1375[2]},{&l_1276,&l_977[4],&l_1174,&l_1273,(void*)0,&l_1273,&l_1273},{&l_1173,&g_37,&l_1273,&l_1273,&l_1375[2],&l_977[4],&g_37},{&l_1375[2],&l_1276,&l_1272,&l_1273,&g_37,&g_37,&l_1273},{&l_1273,&l_977[4],&l_1375[0],&l_1174,&l_1375[0],&l_977[4],&l_1273},{&l_1173,&l_1173,(void*)0,&l_1375[0],&l_1273,&l_1272,&l_977[4]},{&l_1173,&l_1174,&g_37,&l_977[4],(void*)0,&l_1174,&l_1273}},{{&g_37,&l_977[4],(void*)0,&g_37,(void*)0,(void*)0,&l_1375[0]},{(void*)0,&g_18[0][2][0],&l_1375[0],&l_1375[0],&g_18[0][2][0],(void*)0,&l_1272},{&l_1273,&l_977[4],&l_1174,&l_1273,&l_1173,&l_1174,&g_37},{&g_18[0][2][0],&l_1272,&l_977[4],(void*)0,&l_1375[0],&l_1272,(void*)0},{(void*)0,&l_977[4],&l_1173,(void*)0,&l_1375[0],&l_977[4],&l_977[4]},{&l_1375[0],&g_18[0][2][0],&l_1174,&g_18[0][2][0],&l_1375[0],&g_37,&l_1173},{&l_1174,&l_977[4],(void*)0,&l_1173,&l_1375[0],&l_1272,&l_1174}},{{&l_1173,&l_1174,&l_1272,&l_1375[0],&l_1173,(void*)0,&l_977[4]},{&l_1174,&l_1173,&g_37,&l_1375[0],&g_18[0][2][0],&l_1174,&g_18[0][2][0]},{&l_1375[0],&l_977[4],&l_977[4],&l_1375[0],(void*)0,&l_1173,&l_977[4]},{(void*)0,(void*)0,&l_1272,&l_1375[0],(void*)0,&l_977[4],&l_1272},{&g_18[0][2][0],&g_37,&l_1174,&l_1173,&l_1273,&l_1174,&l_977[4]},{&l_1273,&l_1272,(void*)0,&g_18[0][2][0],&l_1375[0],&l_1375[0],&g_18[0][2][0]},{(void*)0,&l_1375[0],(void*)0,(void*)0,&g_37,(void*)0,&l_977[4]}}};
                    int i, j, k;
                    if (g_116)
                        goto lbl_1325;
                    (*g_314) = l_1356;
                    l_1379++;
                    (**g_1046) = ((*l_1159) , (***g_1045));
                }
                (***l_1101) = &l_1173;
                (****g_1045) = (safe_mod_func_int16_t_s_s(((l_1387 = l_1384) == &l_1388), ((((safe_div_func_uint16_t_u_u(p_16, (safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((p_16 != (((!(safe_div_func_int64_t_s_s((safe_mod_func_int64_t_s_s((0L != (g_161 & (((safe_mod_func_uint32_t_u_u(((void*)0 == l_1402), (***g_1046))) | p_16) & 0x7EC5424EL))), p_16)), g_224.f0))) & p_16) | 6UL)), g_224.f0)), 1UL)))) && l_1344) , 1UL) || l_1369)));
                (**l_1102) = l_1403;
            }
            for (g_3 = 5; (g_3 >= 0); g_3 -= 1)
            { 
                int16_t l_1409 = 1L;
                if ((((**g_1047) > (((safe_mul_func_uint16_t_u_u((((l_1403 != &g_89) != (65530UL == ((~(safe_mul_func_uint16_t_u_u((p_16 == (((-8L) != (***g_1046)) != p_16)), g_43))) < (*g_1137)))) , p_16), (*l_1403))) > p_16) , l_1409)) & p_16))
                { 
                    union U2 *l_1412 = &g_224;
                    (*l_22) |= (safe_unary_minus_func_int16_t_s(3L));
                    if (l_1053.f0)
                        goto lbl_1411;
                    (**g_1047) |= (-10L);
                    l_1413 = l_1412;
                }
                else
                { 
                    (*l_1103) = ((**g_1046) = (*g_1047));
                }
                l_1377[1] ^= (((safe_mod_func_int16_t_s_s((-9L), (((safe_rshift_func_int8_t_s_u(1L, ((*l_1328) |= ((((void*)0 != l_1419) || 0x84F16E61L) , (p_16 && ((*l_1403) & l_1338)))))) , (***l_1102)) & p_16))) < (*g_1137)) , p_16);
                (***g_1046) = ((safe_rshift_func_int8_t_s_u(l_1422, 3)) & 0x41CAEE88AEC9E89CLL);
                if (g_277)
                    goto lbl_1325;
            }
            (****g_1045) = 1L;
        }
        for (g_895 = 9; (g_895 == 19); g_895 = safe_add_func_int8_t_s_s(g_895, 2))
        { 
            int32_t *l_1425 = &l_1173;
            int32_t l_1443 = 1L;
            uint32_t l_1445[5][6] = {{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL}};
            uint64_t l_1448 = 0UL;
            int32_t ****l_1466 = &l_1102;
            uint16_t l_1472[6][2][5] = {{{0x23DAL,65530UL,0UL,65535UL,0x7930L},{0UL,65535UL,0UL,0x0FB9L,0UL}},{{0x2957L,0x2957L,0x7930L,65535UL,0UL},{0x9553L,65531UL,65535UL,5UL,0UL}},{{5UL,0x7930L,4UL,0x7930L,5UL},{0x0D2DL,65531UL,1UL,0xC506L,0x0FB9L}},{{65535UL,0x2957L,0xEDB6L,65530UL,65530UL},{0xC506L,65535UL,0xC506L,0xD8E0L,65535UL}},{{5UL,0xEDB6L,0x7930L,65529UL,65530UL},{65535UL,5UL,0UL,0UL,5UL}},{{65527UL,0UL,0x7930L,65530UL,4UL},{0x0D2DL,1UL,0x99C6L,65535UL,0x9553L}}};
            uint32_t l_1507 = 0x177E8D73L;
            int i, j, k;
            l_1425 = ((*g_1047) = (*l_1103));
            if ((p_16 <= ((*l_1403) || (safe_div_func_int32_t_s_s(p_16, ((safe_rshift_func_uint16_t_u_u((~0xE7L), ((*l_1403) > (safe_rshift_func_uint16_t_u_u(((*l_1176) = g_43), 12))))) , (safe_add_func_uint8_t_u_u(((*l_1403) = g_987[3]), l_1435))))))))
            { 
                int32_t * const * const l_1438 = (void*)0;
                int32_t * const * const *l_1437 = &l_1438;
                int32_t * const * const * const *l_1436 = &l_1437;
                int32_t l_1444 = 0L;
                (**g_1046) = (((void*)0 == l_1436) , l_1425);
                for (g_94 = (-6); (g_94 < 8); ++g_94)
                { 
                    int32_t *l_1441 = &l_1276;
                    int32_t *l_1442[6][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_18[0][2][0],&l_1173,&g_37,&l_1196,&l_1173},{(void*)0,&g_37,&g_37,(void*)0,&l_1196},{(void*)0,(void*)0,(void*)0,&l_1173,&l_1173},{&g_18[0][2][0],(void*)0,&g_18[0][2][0],&l_1196,(void*)0},{&l_1173,&g_37,&l_1196,&l_1173,&l_1196}};
                    int i, j;
                    ++l_1445[3][3];
                    --l_1448;
                }
                if (p_16)
                    break;
            }
            else
            { 
                int32_t *****l_1467 = &l_1466;
                (*l_1403) &= 0x30ACB57CL;
                if ((*l_1403))
                    continue;
                l_1276 = (((++g_81[2][1]) & 0xFCL) , (((--(*g_798)) >= (safe_lshift_func_int8_t_s_s(p_16, 7))) ^ (safe_mul_func_int16_t_s_s(((p_16 == (safe_add_func_int32_t_s_s(((*l_1403) &= (~(p_16 > (safe_lshift_func_int8_t_s_u(p_16, (safe_sub_func_int8_t_s_s(0L, (((*l_1467) = l_1466) != (void*)0)))))))), (**g_1136)))) , 1L), 2UL))));
            }
            for (l_1448 = 15; (l_1448 != 57); l_1448 = safe_add_func_int8_t_s_s(l_1448, 7))
            { 
                int32_t l_1479 = 0x11C88ABAL;
                int8_t * const l_1488 = &g_174.f1;
                int32_t *l_1491 = &g_18[0][2][1];
                int32_t l_1493 = 0xDEFA5117L;
                int32_t l_1494 = 9L;
                int32_t l_1495[6][1][3] = {{{1L,1L,0xEE110628L}},{{0x0ED487BFL,0x0ED487BFL,0x6BA5648FL}},{{1L,1L,0xEE110628L}},{{0x0ED487BFL,0x0ED487BFL,0x6BA5648FL}},{{1L,1L,0xEE110628L}},{{0x0ED487BFL,0x0ED487BFL,0x6BA5648FL}}};
                uint16_t l_1496 = 0xF49FL;
                int i, j, k;
                (*l_1491) |= (safe_mul_func_int16_t_s_s(((l_1472[2][1][1] | (safe_lshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(l_1479, ((**l_1402) = (((0UL && (safe_div_func_int32_t_s_s((safe_div_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((l_1488 != (void*)0), (18446744073709551612UL <= g_154.f0))) >= l_1479), l_1489)), 0xA1DC4A0D04E6F2F8LL)), (*g_1137)))) , 1L) <= (***g_812))))) > l_1490[0]), (*l_1403))) <= (*l_1403)), p_16))) , (-3L)), 0UL));
                for (g_159.f1 = 4; (g_159.f1 >= 0); g_159.f1 -= 1)
                { 
                    int32_t *l_1492[1][6][5] = {{{&l_1272,(void*)0,&l_1196,&l_1272,&l_1272},{&g_18[1][3][3],&g_18[1][1][1],&g_18[1][3][3],&l_1273,(void*)0},{(void*)0,&l_1272,(void*)0,&l_1273,&g_18[1][3][3]},{(void*)0,&l_1196,&l_1272,&l_1272,&l_1196},{&l_1196,&l_1443,(void*)0,&g_18[1][3][3],&l_977[5]},{&g_18[1][1][1],&l_1443,&g_18[1][3][3],&g_18[0][2][0],&l_1174}}};
                    union U1 ***l_1503 = (void*)0;
                    union U1 ****l_1502 = &l_1503;
                    uint64_t *l_1506 = &g_1117;
                    int i, j, k;
                    (*g_1047) = l_1492[0][2][0];
                    ++l_1496;
                    (*l_1491) = l_1490[g_159.f1];
                    (*l_1403) |= 0L;
                    (*l_1491) = (safe_rshift_func_uint16_t_u_s((l_1501 == ((*l_1502) = &g_701)), (safe_add_func_int32_t_s_s(((l_1506 != (((**g_701) = (**g_701)) , &g_1117)) < l_1490[g_159.f1]), l_1507))));
                }
                (*l_1103) = &l_1271;
                (***l_1102) &= (safe_mul_func_int8_t_s_s(p_16, 0L));
                for (l_1273 = 0; (l_1273 <= 14); l_1273 = safe_add_func_uint16_t_u_u(l_1273, 1))
                { 
                    int32_t *l_1529 = &l_1201[0];
                    uint64_t *l_1530 = (void*)0;
                    uint64_t *l_1531[4][6] = {{&l_1448,&l_1448,&l_1448,&l_1448,(void*)0,(void*)0},{&g_116,(void*)0,&g_1117,&g_116,&g_1117,&g_116},{(void*)0,&l_1448,(void*)0,(void*)0,&g_1117,(void*)0},{&g_1117,(void*)0,&g_116,(void*)0,(void*)0,&g_116}};
                    int32_t l_1532 = 0x3B039DFCL;
                    int i, j;
                    l_1532 ^= (((*l_1328) = ((safe_lshift_func_int16_t_s_s(((*l_22) = 0x8BC1L), 7)) == ((g_224.f2 && ((+((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((*g_798), (g_1117 = (((p_16 || (safe_sub_func_uint64_t_u_u((safe_add_func_int64_t_s_s(((p_16 & ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((*l_1176) = (safe_div_func_uint32_t_u_u((((g_174.f2 , l_1529) == (void*)0) | p_16), p_16))), 8)), 254UL)) != p_16)) != (-1L)), 0xEE4990F96572EE5DLL)), (*l_1403)))) , p_16) | 1UL)))) , 0x79L), (****g_811))) < 255UL)) == (*g_798))) > (*l_1403)))) | (*l_1491));
                }
            }
            (*g_314) = ((*g_701) = &l_1318);
        }
    }
    for (l_1252 = 0; (l_1252 == (-10)); --l_1252)
    { 
        int8_t l_1543 = 4L;
        int32_t l_1545 = (-5L);
        int32_t l_1546 = 5L;
        int32_t l_1547[3][3][7] = {{{2L,2L,(-1L),(-5L),0x78DC92F4L,8L,(-4L)},{1L,0xD6E49436L,(-1L),(-1L),0xD6E49436L,1L,0xD435860CL},{0L,(-1L),(-7L),(-5L),0x78DC92F4L,0x78DC92F4L,(-5L)}},{{0xE25CE741L,(-1L),0xE25CE741L,0xD50F1A47L,0xD435860CL,1L,1L},{(-7L),(-1L),0L,8L,0L,(-1L),(-7L)},{(-1L),0xD6E49436L,1L,0xD435860CL,1L,1L,1L}},{{(-1L),2L,2L,(-1L),(-5L),0x78DC92F4L,8L},{0xE6864222L,0xF88EB1EBL,1L,0xE25CE741L,0xE25CE741L,1L,0xF88EB1EBL},{(-5L),(-7L),0L,0x35172296L,2L,8L,8L}}};
        int i, j, k;
        for (l_1223 = (-17); (l_1223 == 29); l_1223++)
        { 
            int32_t *l_1537 = &l_977[5];
            int32_t *l_1538 = &g_18[0][2][0];
            int32_t *l_1539 = &l_977[4];
            int32_t *l_1540 = &l_977[5];
            int32_t *l_1541 = (void*)0;
            int32_t *l_1542[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1542[i] = &g_37;
            g_1549++;
        }
    }
    l_1552[1][0][4] = &g_1134[2];
    (***l_1101) = ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(1L, g_116)), 3)) , (l_1053 , &l_1548[3]));
    (**l_1103) = (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((0xDA6D0E0FL <= ((safe_rshift_func_int16_t_s_s((**l_1103), 15)) , (***l_1102))), (p_16 < (0x539C7826L == ((safe_mul_func_uint8_t_u_u(((+(((((void*)0 != &g_564) , p_16) && p_16) & 1L)) ^ 7L), 0UL)) | (-1L)))))), 4)), (****l_1101)));
    return (**g_57);
}



static int32_t  func_27(uint32_t  p_28, uint32_t  p_29, int8_t * p_30, uint64_t  p_31, struct S0  p_32)
{ 
    int32_t *l_905 = (void*)0;
    int32_t *l_906 = (void*)0;
    int32_t *l_907 = (void*)0;
    int32_t *l_908 = &g_37;
    int32_t *l_909 = &g_18[0][3][3];
    int32_t *l_910 = &g_18[1][2][5];
    int32_t *l_911 = &g_18[0][2][0];
    int32_t *l_912 = &g_18[0][1][1];
    int32_t *l_913 = &g_18[0][4][1];
    int32_t *l_914 = &g_18[0][4][4];
    int32_t *l_915 = &g_18[0][2][0];
    int32_t *l_916 = &g_18[0][4][5];
    int32_t l_917 = 0L;
    int32_t *l_918 = &g_37;
    int32_t *l_919 = &g_18[0][1][0];
    int32_t l_920 = 0x947600CCL;
    int32_t *l_921 = &l_920;
    int32_t *l_922 = &l_917;
    int32_t *l_923[5][3][6] = {{{&g_18[0][2][0],&g_18[0][2][0],(void*)0,&l_917,&l_920,&g_18[0][2][0]},{&l_917,&l_920,&g_18[0][2][0],&l_920,&l_917,&g_18[0][2][0]},{&l_920,&l_917,&g_18[0][2][0],&l_920,&l_920,&g_18[0][2][0]}},{{&l_920,&l_920,&g_18[0][2][0],&l_917,&l_920,&g_18[0][2][0]},{&l_917,&l_920,&g_18[0][2][0],&l_920,&l_917,&g_18[0][2][0]},{&l_920,&l_917,&g_18[0][2][0],&l_920,&l_920,&g_18[0][2][0]}},{{&l_920,&l_920,&g_18[0][2][0],&l_917,&l_920,&g_18[0][2][0]},{&l_917,&l_920,&g_18[0][2][0],&l_920,&l_917,&g_18[0][2][0]},{&l_920,&l_917,&g_18[0][2][0],&l_920,&l_920,&g_18[0][2][0]}},{{&l_920,&l_920,&g_18[0][2][0],&l_917,&l_920,&g_18[0][2][0]},{&l_917,&l_920,&g_18[0][2][0],&l_920,&l_917,&g_18[0][2][0]},{&l_920,&l_917,&g_18[0][2][0],&l_920,&l_920,&g_18[0][2][0]}},{{&l_920,&l_920,&g_18[0][2][0],&l_917,&l_920,&g_18[0][2][0]},{&l_917,&l_920,&g_18[0][2][0],&l_920,&l_917,&g_18[0][2][0]},{&l_920,&l_917,&g_18[0][2][0],&l_920,&l_920,&g_18[0][2][0]}}};
    uint16_t l_924[3][1][1];
    uint16_t l_934 = 7UL;
    int16_t l_942 = 0x3409L;
    union U2 * const l_947 = &g_224;
    int8_t ***l_957 = &g_57;
    int8_t ****l_958 = &l_957;
    uint32_t l_959[2];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_924[i][j][k] = 65532UL;
        }
    }
    for (i = 0; i < 2; i++)
        l_959[i] = 0xFBC3E482L;
    l_924[2][0][0]++;
    if (p_31)
    { 
        int32_t l_927 = 0L;
        int32_t l_928 = 0L;
        int32_t l_929 = (-6L);
        int32_t l_930 = 4L;
        int32_t l_931 = 1L;
        int32_t l_932 = (-2L);
        int32_t l_933[4][6] = {{(-1L),0x221E67A7L,1L,0x221E67A7L,(-1L),(-1L)},{0xCEE765C7L,0x221E67A7L,0x221E67A7L,0xCEE765C7L,(-2L),0xCEE765C7L},{0xCEE765C7L,(-2L),0xCEE765C7L,0x221E67A7L,0x221E67A7L,0xCEE765C7L},{(-1L),(-1L),0x221E67A7L,1L,0x221E67A7L,(-1L)}};
        union U2 *l_944 = &g_224;
        int i, j;
        --l_934;
        for (p_32.f1 = (-3); (p_32.f1 == 14); p_32.f1 = safe_add_func_uint64_t_u_u(p_32.f1, 1))
        { 
            uint8_t l_941 = 0x79L;
            union U2 **l_945[2];
            int i;
            for (i = 0; i < 2; i++)
                l_945[i] = &g_564;
            for (g_277 = 1; (g_277 >= 0); g_277 -= 1)
            { 
                if ((safe_mod_func_uint32_t_u_u(((((-9L) != 65526UL) == g_18[1][1][3]) || (l_941 < ((((g_94 || 1UL) != l_942) , 0UL) & g_286.f0))), g_161)))
                { 
                    if (l_927)
                        break;
                    return p_31;
                }
                else
                { 
                    uint32_t l_943 = 4294967292UL;
                    return l_943;
                }
            }
            g_564 = l_944;
        }
    }
    else
    { 
        int32_t l_946[5][7][4] = {{{1L,0x32713F05L,1L,0xDC93C078L},{9L,0x96E50AFCL,0x18145706L,0xD877D211L},{0x62423FCBL,9L,0x7089B35AL,(-6L)},{1L,0xE5A008AEL,0x0E644484L,0xDC93C078L},{0x5D903035L,0xACF87437L,(-3L),1L},{0x0F51344AL,0xD877D211L,0x0F51344AL,0x25710CF2L},{0xAF125DF1L,1L,0x10335B55L,9L}},{{0x32713F05L,0x18145706L,0L,1L},{(-10L),1L,0L,0x206E5F35L},{0x32713F05L,(-1L),0x10335B55L,0x5D903035L},{0xAF125DF1L,(-3L),0x0F51344AL,0x20D2D618L},{0x0F51344AL,0x20D2D618L,(-3L),8L},{0x5D903035L,(-1L),0x0E644484L,0x32713F05L},{1L,0L,0x7089B35AL,(-1L)}},{{0x62423FCBL,9L,0x18145706L,0xACF87437L},{9L,(-1L),1L,0xAF125DF1L},{1L,0x0F51344AL,(-6L),0x20D2D618L},{0x02635C95L,0x8DBC7981L,0xACF87437L,0x626FC674L},{0xDC93C078L,(-1L),0x04650868L,1L},{0xD877D211L,0x7089B35AL,(-5L),1L},{(-6L),8L,0x696DEC0DL,0x55D3C58BL}},{{0x62423FCBL,0x25710CF2L,0xD877D211L,(-10L)},{0x2D340A64L,7L,7L,0x2D340A64L},{0x0E644484L,(-6L),4L,1L},{1L,0L,0xAF125DF1L,0x8B78F5AEL},{0x25710CF2L,0x751E30F9L,0xDD4FF31AL,0x8B78F5AEL},{0L,0L,0x10335B55L,1L},{0x96E50AFCL,(-6L),9L,0x2D340A64L}},{{0xF395B2EAL,7L,(-8L),(-10L)},{0x097E2A54L,0x25710CF2L,0x158754FDL,0x55D3C58BL},{(-6L),8L,0xDC93C078L,0x25710CF2L},{(-5L),0xDD4FF31AL,0x55D3C58BL,0x820D0D98L},{0x089FB1A5L,(-5L),0x158754FDL,0x04650868L},{0x0F51344AL,(-5L),0L,0xF395B2EAL},{0xF395B2EAL,(-8L),(-3L),0x0F51344AL}}};
        union U2 **l_948[7] = {&g_564,&g_564,&g_564,&g_564,&g_564,&g_564,&g_564};
        union U2 **l_949[1][4] = {{&g_564,&g_564,&g_564,&g_564}};
        int i, j, k;
lbl_950:
        (*l_922) = l_946[3][4][1];
        g_564 = l_947;
        if (g_94)
            goto lbl_950;
    }
    (*l_922) &= ((safe_mod_func_int8_t_s_s((l_959[1] &= (((-1L) ^ ((*l_921) = (safe_sub_func_uint32_t_u_u(((((*l_915) , &g_564) == (void*)0) >= ((((*l_958) = l_957) != (void*)0) > 0x09F26CBFL)), p_32.f1)))) <= (*g_798))), (*l_908))) == 0xF38A86A7BCD3382BLL);
    return p_31;
}



static int8_t  func_33(uint8_t  p_34)
{ 
    int8_t *l_42 = &g_43;
    union U1 l_53 = {0xA98DL};
    int32_t *l_54 = &g_37;
    int32_t **l_892 = &l_54;
    int32_t ***l_891 = &l_892;
    for (p_34 = 0; p_34 < 2; p_34 += 1)
    {
        for (g_36 = 0; g_36 < 5; g_36 += 1)
        {
            for (g_37 = 0; g_37 < 7; g_37 += 1)
            {
                g_18[p_34][g_36][g_37] = 0x0B09DE24L;
            }
        }
    }
    (*l_891) = func_38(((*l_42) = p_34), g_18[0][1][4], (p_34 , (((p_34 | (safe_mul_func_int16_t_s_s(g_18[1][2][2], (~((safe_add_func_uint16_t_u_u(func_49(l_42, (((l_42 == l_42) && 0x4DF9633FL) , l_53), l_54), p_34)) != (-1L)))))) , p_34) && 0x4C008D75L)));
    return p_34;
}



static int32_t ** func_38(int8_t  p_39, int64_t  p_40, uint32_t  p_41)
{ 
    int64_t l_652 = 0xA4306EE22D94C575LL;
    int32_t l_653 = (-1L);
    int32_t l_654 = 0L;
    int32_t l_655 = 0L;
    int32_t l_656 = 0xCD13142FL;
    int32_t l_657 = 0x3CA840E3L;
    uint32_t l_658 = 0x3F5FD48EL;
    int32_t l_661 = 0x86375C34L;
    int32_t l_662 = 1L;
    int16_t l_695 = 1L;
    union U1 *l_699 = &g_286;
    union U1 **l_698 = &l_699;
    union U2 l_704 = {0xB40271F17D4FC8A8LL};
    int32_t **l_708[4][6] = {{&g_169[2],(void*)0,&g_169[2],(void*)0,&g_169[2],&g_169[2]},{(void*)0,(void*)0,(void*)0,(void*)0,&g_169[3],(void*)0},{(void*)0,&g_169[3],(void*)0,(void*)0,(void*)0,(void*)0},{&g_169[2],&g_169[2],(void*)0,&g_169[2],(void*)0,&g_169[2]}};
    union U2 **l_759 = (void*)0;
    const uint16_t l_780 = 0x8536L;
    const int8_t *l_783 = &g_157.f2;
    const int8_t **l_782[1][6] = {{&l_783,&l_783,&l_783,&l_783,&l_783,&l_783}};
    const int8_t ***l_781 = &l_782[0][0];
    int8_t *l_791 = &g_3;
    int64_t l_799 = (-1L);
    int8_t * const ***l_814 = (void*)0;
    int8_t *l_835 = &g_154.f1;
    int8_t l_861 = 1L;
    uint32_t l_890 = 4294967287UL;
    int i, j;
    for (g_344 = 1; (g_344 >= 0); g_344 -= 1)
    { 
        int32_t *l_647 = &g_37;
        int32_t *l_648 = &g_18[0][2][0];
        int32_t *l_649 = &g_18[1][3][5];
        int32_t *l_650 = &g_18[0][3][3];
        int32_t *l_651[3];
        int8_t **l_666 = &g_58;
        int32_t **l_667 = &l_651[2];
        uint8_t *l_689 = &g_81[4][3];
        uint8_t **l_688 = &l_689;
        union U1 **l_703 = &l_699;
        int8_t l_752 = 0L;
        uint64_t *l_794 = &g_116;
        uint64_t **l_795 = (void*)0;
        uint64_t *l_797 = (void*)0;
        uint64_t **l_796[6];
        uint32_t l_802 = 18446744073709551615UL;
        uint32_t l_862 = 0x20CCB4A9L;
        int16_t *l_873 = &l_695;
        int i;
        for (i = 0; i < 3; i++)
            l_651[i] = &g_37;
        for (i = 0; i < 6; i++)
            l_796[i] = &l_797;
        --l_658;
        ++g_663;
        if ((((void*)0 != l_666) && (((*l_667) = &g_18[0][2][0]) != &g_18[0][2][0])))
        { 
            int32_t l_693 = 0xA5B0488BL;
            uint16_t l_694 = 1UL;
            union U1 **l_700[5];
            int i;
            for (i = 0; i < 5; i++)
                l_700[i] = &l_699;
            for (g_116 = 0; (g_116 <= 1); g_116 += 1)
            { 
                union U2 **l_690 = (void*)0;
                int8_t **l_705 = (void*)0;
                int32_t l_706 = 0x96972602L;
                for (g_147 = 0; (g_147 <= 1); g_147 += 1)
                { 
                    uint32_t *l_668[5][7][4] = {{{&g_91,&g_224.f2,&g_91,(void*)0},{&g_91,&g_224.f2,&l_658,(void*)0},{&g_91,(void*)0,(void*)0,&g_224.f2},{&l_658,&g_224.f2,(void*)0,&l_658},{&g_91,&l_658,&l_658,&g_224.f2},{&g_91,(void*)0,&g_91,&g_91},{&g_91,&g_91,(void*)0,&g_91}},{{&g_224.f2,&l_658,&l_658,&g_91},{&l_658,(void*)0,&g_224.f2,&l_658},{&g_224.f2,(void*)0,(void*)0,&g_91},{(void*)0,&l_658,&g_224.f2,&g_91},{(void*)0,&g_91,&g_224.f2,&g_91},{(void*)0,(void*)0,&g_91,&g_224.f2},{&g_224.f2,&l_658,&l_658,&l_658}},{{&g_224.f2,&g_224.f2,(void*)0,&g_224.f2},{&g_224.f2,(void*)0,&l_658,(void*)0},{&g_224.f2,&g_224.f2,&g_91,(void*)0},{(void*)0,&g_224.f2,&g_224.f2,(void*)0},{(void*)0,&g_91,&g_224.f2,&g_224.f2},{(void*)0,&l_658,(void*)0,&g_224.f2},{&g_224.f2,(void*)0,&g_224.f2,&g_224.f2}},{{&l_658,&l_658,&l_658,&g_224.f2},{&g_224.f2,&g_91,(void*)0,&l_658},{(void*)0,&g_224.f2,(void*)0,&l_658},{&g_91,(void*)0,&g_224.f2,&g_224.f2},{&g_224.f2,&g_91,&g_224.f2,(void*)0},{&l_658,(void*)0,&g_224.f2,&g_91},{&g_224.f2,&l_658,&g_224.f2,&l_658}},{{&g_91,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_91},{&l_658,&g_224.f2,&l_658,&g_224.f2},{&g_91,&g_224.f2,(void*)0,&l_658},{(void*)0,&g_224.f2,&g_91,&g_224.f2},{&g_224.f2,&g_224.f2,(void*)0,&g_91},{&l_658,(void*)0,&g_224.f2,(void*)0}}};
                    uint8_t *l_679 = (void*)0;
                    uint8_t *l_680 = &g_663;
                    uint8_t *l_681 = (void*)0;
                    int i, j, k;
                    (*l_667) = (((((g_91--) != (safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((((((((((safe_div_func_uint8_t_u_u(((*l_647) = ((*l_680) |= g_81[(g_344 + 2)][g_116])), (safe_add_func_uint64_t_u_u(((((safe_add_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(((void*)0 == l_688), 0x0BB6B368L)) && ((l_690 != &g_564) , ((p_41 = (safe_add_func_uint64_t_u_u(g_81[3][1], p_41))) >= l_693))), 0UL)) | g_89) & g_94) , g_81[(g_344 + 2)][g_116]), l_694)))) || 0xCE88D1E1L) ^ 0x7B46L) <= p_40) , g_18[0][2][0]) ^ p_40) | l_695) < l_694) == g_436) < 0L), 5)) > 0x86E7L), 4L)), g_304[0][2][0]))) , 7L) >= 3UL) , l_668[0][5][0]);
                    return &g_169[2];
                }
                for (g_174.f1 = 0; (g_174.f1 <= 4); g_174.f1 += 1)
                { 
                    int32_t l_707[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_707[i] = 0L;
                    (**l_667) = (((-1L) | 0x98A85472L) , (safe_add_func_int16_t_s_s((((g_344 , (l_700[0] = l_698)) != (l_703 = g_701)) & (((l_704 , (((0xB97AAF151D8A290DLL > 18446744073709551606UL) , (void*)0) == l_705)) == l_706) > p_40)), g_159.f0)));
                    if (l_707[0])
                        break;
                }
            }
        }
        else
        { 
            int8_t * const *l_710 = &g_58;
            int8_t * const **l_709[6][3] = {{(void*)0,&l_710,&l_710},{&l_710,(void*)0,&l_710},{&l_710,&l_710,&l_710},{(void*)0,&l_710,&l_710},{&l_710,(void*)0,&l_710},{&l_710,&l_710,&l_710}};
            const int32_t l_766[1][6] = {{(-1L),(-1L),0xC8F087A3L,(-1L),(-1L),0xC8F087A3L}};
            union U1 *l_774[5] = {&g_286,&g_286,&g_286,&g_286,&g_286};
            int16_t *l_779 = &g_113;
            int32_t l_784 = 0L;
            int i, j;
            for (g_89 = 0; (g_89 <= 4); g_89 += 1)
            { 
                struct S0 l_714 = {0xF58CL,-1L,0x9FL};
                uint32_t l_729[2][3][1] = {{{0xA274F8CCL},{2UL},{0xA274F8CCL}},{{2UL},{0xA274F8CCL},{2UL}}};
                int i, j, k;
                for (l_656 = 0; (l_656 <= 1); l_656 += 1)
                { 
                    return l_708[3][4];
                }
                if ((*l_648))
                    continue;
                for (g_159.f1 = 4; (g_159.f1 >= 0); g_159.f1 -= 1)
                { 
                    int8_t * const ***l_711 = (void*)0;
                    int8_t * const ***l_712 = (void*)0;
                    int8_t * const ***l_713 = &l_709[5][2];
                    uint32_t *l_727 = &l_658;
                    int32_t l_728 = (-6L);
                    int16_t *l_751 = &l_695;
                    uint32_t *l_753 = &l_729[1][1][0];
                    uint64_t *l_767 = &g_116;
                    int i, j, k;
                    (*l_713) = l_709[5][2];
                    (*l_647) = ((((l_714 , (0x649A3715L | ((*l_650) = p_40))) <= p_41) ^ (safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(0x22L, (((*l_727) = (g_174.f1 , 4294967288UL)) && l_728))), l_729[1][1][0])), 2)), (-8L))) , g_174.f1), g_157.f1)), p_40))) | 0xF401L);
                    l_728 = ((p_40 , (((*l_753) = ((((safe_div_func_int32_t_s_s(((**l_667) = ((safe_mul_func_int8_t_s_s((!0x9BC32231EBE6FC84LL), (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(p_41, 9)) < ((*l_751) |= (safe_rshift_func_int16_t_s_u(((((g_157.f0 , g_154.f1) , (safe_mul_func_uint8_t_u_u((0x106CB13BE252138ALL || ((++(*l_727)) , (((0xEEB9L < g_154.f2) || p_41) , (-1L)))), 0xC1L))) , p_40) == p_41), 13)))), p_41)), p_39)), l_728)), l_728)))) & l_752)), 9UL)) && (**g_57)) ^ g_81[0][3]) >= 4294967295UL)) ^ 0UL)) == 0UL);
                    (*l_647) ^= (((((*l_767) |= (safe_mul_func_uint16_t_u_u(((((+((*l_650) = ((-1L) || (safe_sub_func_int16_t_s_s((p_39 && ((void*)0 == l_759)), ((*l_751) = (safe_lshift_func_uint8_t_u_s((p_41 && ((safe_mod_func_int8_t_s_s(p_40, (safe_lshift_func_uint8_t_u_s(l_766[0][3], 7)))) , 0x5E54L)), p_41)))))))) ^ p_40) && 0x4FL) | p_40), l_714.f2))) , (**g_57)) , g_81[1][0]) | g_211.f0);
                }
            }
            l_784 ^= (((safe_add_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((void*)0 == l_774[4]), (((*l_647) = p_39) <= ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(0xA7L, 6)), ((*l_779) |= (((*g_701) = ((*l_703) = (*g_701))) == l_774[2])))) > (0x4972B378252D0B0ALL <= l_766[0][3]))))), (*l_650))), l_780)) , l_781) != (void*)0);
            for (l_658 = 0; (l_658 <= 58); l_658 = safe_add_func_uint16_t_u_u(l_658, 5))
            { 
                return &g_169[2];
            }
        }
        if ((safe_mod_func_int16_t_s_s((((((((*l_666) = l_791) == (**l_781)) != (safe_mul_func_uint16_t_u_u((((l_794 == (g_798 = &g_116)) == g_277) || g_157.f2), l_799))) | p_39) , (*g_798)) != 0UL), p_39)))
        { 
            int16_t l_800 = (-5L);
            --l_802;
            if (p_39)
                continue;
            for (g_147 = 0; (g_147 > 30); g_147++)
            { 
                (*l_667) = (void*)0;
            }
        }
        else
        { 
            int32_t l_830 = 0L;
            int32_t l_831 = (-1L);
            const uint8_t ***l_832 = (void*)0;
            int16_t *l_859[2];
            int i;
            for (i = 0; i < 2; i++)
                l_859[i] = &g_113;
            for (l_695 = (-14); (l_695 != 6); l_695 = safe_add_func_uint8_t_u_u(l_695, 4))
            { 
                int8_t * const ****l_815 = (void*)0;
                int8_t * const ****l_816[4];
                int8_t * const ***l_817 = &g_812;
                int32_t l_826 = (-1L);
                int8_t **l_836 = (void*)0;
                int16_t *l_857 = (void*)0;
                int32_t **l_863 = (void*)0;
                uint8_t ***l_878 = (void*)0;
                int i;
                for (i = 0; i < 4; i++)
                    l_816[i] = &g_811;
                for (l_662 = 0; (l_662 < (-6)); l_662--)
                { 
                    if (p_41)
                        break;
                }
                l_817 = (l_814 = g_811);
                if ((safe_mul_func_uint8_t_u_u(0xF2L, (***g_812))))
                { 
                    int8_t ***l_829[7] = {&g_57,(void*)0,&g_57,&g_57,(void*)0,&g_57,&g_57};
                    int16_t **l_858[6] = {&l_857,&l_857,&l_857,&l_857,&l_857,&l_857};
                    union U2 l_860 = {2UL};
                    int i;
                    l_831 |= ((safe_div_func_uint32_t_u_u(3UL, 1L)) == (((((safe_mod_func_int8_t_s_s((4L || (p_39 = (((l_826 >= p_40) <= (((**g_701) = (*l_699)) , (safe_add_func_uint16_t_u_u((((((*g_811) = (*l_814)) != l_829[1]) != (*l_648)) & p_41), g_37)))) >= (*g_798)))), p_41)) || (*g_58)) & 65527UL) == l_830) <= 1UL));
                    (*l_647) = ((((*l_650) |= (g_157.f0 < (l_826 &= p_39))) != ((void*)0 != l_832)) | ((*g_812) != (l_836 = ((safe_lshift_func_uint8_t_u_u((((&p_39 == l_835) ^ g_436) , g_154.f2), p_40)) , (void*)0))));
                    l_831 = ((**l_667) = (safe_div_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((*l_648) | (-3L)), (safe_mod_func_int8_t_s_s((0x33L | ((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_s((p_41 == ((((((l_859[1] = l_857) != (l_860 , &g_113)) | l_861) == p_40) != l_830) != p_40)), 8)) && l_831) && p_41) < p_41), p_40)), p_40)), p_39)), p_39)), p_41)), l_862)) && g_159.f2)), (*g_58))))), p_41)));
                    return l_863;
                }
                else
                { 
                    int64_t l_864 = (-4L);
                    const int16_t *l_875 = (void*)0;
                    const int16_t **l_874 = &l_875;
                    uint32_t *l_879 = &l_658;
                    l_831 |= ((l_864 ^ (l_857 != (void*)0)) || ((*l_648) &= (safe_rshift_func_int16_t_s_u(((l_830 != 0xC9E0EFC0L) <= (safe_mod_func_uint32_t_u_u(g_94, (safe_add_func_uint8_t_u_u(((((l_830 ^ (*g_798)) < p_39) , 0x131D03EAL) < p_39), 0x6DL))))), p_41))));
                    (*l_648) |= ((safe_mul_func_uint8_t_u_u((((0x3CD7L && g_91) , l_873) != ((*l_874) = &g_113)), ((*l_835) = p_41))) != ((*l_879) = (safe_sub_func_uint8_t_u_u((((void*)0 == l_878) >= p_40), p_40))));
                    if (p_39)
                        break;
                    (*l_647) &= (-2L);
                    (**l_667) |= 0xD05A4388L;
                }
                if (p_40)
                    break;
                l_826 |= ((g_157.f2 > 65535UL) , (((safe_lshift_func_uint8_t_u_u(0xC6L, (safe_lshift_func_int8_t_s_u(((*l_835) = ((safe_rshift_func_uint16_t_u_u(0x0DBEL, 12)) || ((0L == ((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((&g_315 == &g_315) == g_37) , (*l_649)), (-1L))), g_81[1][3])) & 248UL)) | g_174.f1))), p_40)))) == (-1L)) == g_157.f1));
            }
            (*l_667) = (*l_667);
            if (l_890)
                continue;
            return l_708[0][1];
        }
    }
    return l_708[2][5];
}



static uint16_t  func_49(int8_t * p_50, union U1  p_51, int32_t * p_52)
{ 
    int8_t *l_56 = &g_3;
    int8_t **l_55 = &l_56;
    uint16_t l_66 = 0x7882L;
    int32_t *l_79 = &g_18[0][2][0];
    int32_t l_160 = 0x49AF3359L;
    int32_t l_193 = 1L;
    int32_t l_194 = 0x16105567L;
    uint64_t l_195 = 18446744073709551615UL;
    struct S0 l_208 = {-10L,-2L,0x6DL};
    int32_t l_232 = 0x954B233CL;
    int32_t l_233 = 0xA0F1875FL;
    int16_t *l_270 = &g_113;
    uint16_t l_296 = 0x1848L;
    union U1 l_337 = {0x8131L};
    int32_t l_343 = (-4L);
    int32_t l_345 = (-2L);
    int32_t l_347 = 0L;
    int32_t l_349 = 0xD0C0530DL;
    int32_t l_350[1][1][7] = {{{0x0B9837F0L,0x0B9837F0L,0x986A9B86L,0x0B9837F0L,0x0B9837F0L,0x986A9B86L,0x0B9837F0L}}};
    uint8_t l_377 = 1UL;
    const int16_t l_410 = 0xD724L;
    const uint32_t l_455 = 0x507B2AE9L;
    int64_t l_479 = (-7L);
    uint8_t l_536 = 0x8EL;
    uint16_t l_551[2][7] = {{0x78C1L,0UL,0UL,0x78C1L,0UL,0UL,0x78C1L},{65535UL,0x5075L,65535UL,65535UL,0x5075L,65535UL,65535UL}};
    int8_t l_605 = 0x5BL;
    int8_t l_634 = 0xD1L;
    int i, j, k;
    (*p_52) |= (l_55 == g_57);
    if (((safe_sub_func_uint16_t_u_u((~0x55L), ((safe_add_func_int32_t_s_s(1L, 0xC168B3ADL)) , (safe_sub_func_int32_t_s_s(l_66, (*p_52)))))) , ((safe_mul_func_uint8_t_u_u(((g_75 = ((safe_div_func_int16_t_s_s(l_66, (safe_mul_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u(p_51.f0, g_18[0][2][0])) == 1UL) > (-9L)), (*g_58))))) , l_66)) ^ 0L), 0UL)) ^ g_37)))
    { 
        uint8_t *l_80 = &g_81[4][3];
        int64_t *l_82 = &g_36;
        int32_t l_83 = 0x5DEB7CA3L;
        int8_t * const *l_86 = &l_56;
        int32_t l_117 = 0x1112FB1CL;
        struct S0 *l_158 = &g_159;
        int32_t l_191 = 0x0DE7F7E7L;
        int32_t l_192[7];
        uint16_t l_228 = 65534UL;
        const int16_t l_237 = 1L;
        union U2 *l_239 = (void*)0;
        uint64_t l_340 = 18446744073709551615UL;
        int32_t l_341 = 0x2110F49CL;
        uint8_t l_352 = 0UL;
        uint64_t l_366[5];
        int32_t **l_372 = &g_169[6];
        union U2 **l_373 = (void*)0;
        uint64_t l_389 = 9UL;
        struct S0 ***l_426 = &g_376[3][1][5];
        uint16_t l_458 = 1UL;
        int32_t *l_539 = &l_233;
        union U1 **l_566 = (void*)0;
        uint64_t l_598 = 18446744073709551609UL;
        uint16_t l_606 = 65530UL;
        uint8_t *l_637 = &l_352;
        uint16_t l_638[1][4] = {{4UL,4UL,4UL,4UL}};
        int i, j;
        for (i = 0; i < 7; i++)
            l_192[i] = 0xC0B3F9B2L;
        for (i = 0; i < 5; i++)
            l_366[i] = 0x48B76258BA6A2A6BLL;
        if ((((+(l_66 || (safe_sub_func_uint32_t_u_u((((*l_80) = (l_79 == &g_37)) == (*l_79)), 5UL)))) >= p_51.f0) < ((((*l_82) = (g_3 , (*l_79))) , p_51.f0) , l_83)))
        { 
            int8_t **l_88 = &l_56;
            for (l_66 = (-5); (l_66 <= 45); l_66 = safe_add_func_uint16_t_u_u(l_66, 4))
            { 
                int8_t ***l_87[7][5] = {{&l_55,&g_57,&l_55,&g_57,&l_55},{&l_55,&l_55,&l_55,&l_55,&l_55},{&l_55,&g_57,&l_55,&g_57,&l_55},{&l_55,&l_55,&l_55,&l_55,&l_55},{&l_55,&g_57,&l_55,&g_57,&l_55},{&l_55,&l_55,&l_55,&l_55,&l_55},{&l_55,&g_57,&l_55,&g_57,&l_55}};
                uint32_t *l_90 = &g_91;
                uint32_t *l_92 = (void*)0;
                uint32_t *l_93 = &g_94;
                int32_t l_95 = 2L;
                int i, j;
                g_37 ^= (0x9272L & ((((*l_93) = (((*l_90) = (((g_3 <= ((0xA0B0D0ED264C9D3CLL > 0xF62356A21748C737LL) , (g_89 = (l_86 != (g_57 = (l_88 = &g_58)))))) , &g_37) == &g_37)) | 0x498DD06FL)) , g_75) > g_18[0][2][0]));
                l_95 = (-8L);
                return p_51.f0;
            }
            return g_3;
        }
        else
        { 
            uint32_t l_114 = 4294967295UL;
            struct S0 *l_153 = &g_154;
            struct S0 ** const l_152[3] = {&l_153,&l_153,&l_153};
            int32_t l_190[3][2] = {{(-8L),(-8L)},{0L,(-8L)},{(-8L),0L}};
            int32_t l_231 = (-3L);
            uint16_t l_244[7] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
            int64_t l_255 = 0L;
            union U1 *l_288 = &g_286;
            int32_t l_351[4];
            int32_t l_370 = 0xDE28FBBCL;
            int32_t **l_371 = &g_169[2];
            int i, j;
            for (i = 0; i < 4; i++)
                l_351[i] = 1L;
        }
        (*l_372) = (void*)0;
        l_373 = &l_239;
        for (l_349 = 0; (l_349 >= (-26)); l_349 = safe_sub_func_uint32_t_u_u(l_349, 2))
        { 
            int32_t l_378[2][2];
            uint32_t *l_381[1][6] = {{&g_224.f2,&g_224.f2,&g_224.f2,&g_224.f2,&g_224.f2,&g_224.f2}};
            int32_t l_382 = 0L;
            int32_t *l_383 = (void*)0;
            int32_t *l_384 = &l_191;
            int32_t *l_385 = &l_347;
            int32_t *l_386 = (void*)0;
            int32_t *l_387[5] = {&l_192[4],&l_192[4],&l_192[4],&l_192[4],&l_192[4]};
            int64_t l_388 = 0x7184DA739933130ALL;
            const uint32_t l_435 = 0x2E04A297L;
            uint32_t l_450 = 5UL;
            union U1 l_473 = {0x541CL};
            union U2 **l_565[5][2][3] = {{{&l_239,&l_239,&g_564},{&l_239,&l_239,&g_564}},{{&g_564,&g_564,&l_239},{&g_564,&g_564,&l_239}},{{&g_564,&g_564,&l_239},{&g_564,&g_564,&l_239}},{{&g_564,&g_564,&l_239},{&g_564,&g_564,&l_239}},{{&g_564,&g_564,&l_239},{&g_564,&g_564,&l_239}}};
            const struct S0 l_621 = {-3L,1L,0L};
            uint8_t l_622 = 255UL;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_378[i][j] = 0x46E57411L;
            }
            l_382 ^= ((*p_52) = (((g_376[1][3][4] = &l_158) != &l_158) | (p_51.f0 ^ ((l_192[6] &= (l_377 , ((l_378[0][0] , ((*l_270) |= (safe_mod_func_int16_t_s_s((((((*l_79) >= l_378[1][0]) > l_378[0][0]) <= p_51.f0) & (*g_58)), p_51.f0)))) || 0xE33DL))) || (*l_79)))));
            --l_389;
            for (l_233 = (-10); (l_233 >= 27); l_233 = safe_add_func_int16_t_s_s(l_233, 1))
            { 
                uint64_t l_401 = 0x7FED7EC30F2D94ABLL;
                int32_t l_404 = 0x0E615F6EL;
                int32_t l_464 = 9L;
                int32_t l_466 = 0x8DAED605L;
                int32_t l_467[4];
                uint8_t l_468 = 0x96L;
                int i;
                for (i = 0; i < 4; i++)
                    l_467[i] = 0xCED3FC1FL;
                for (g_91 = 3; (g_91 > 4); ++g_91)
                { 
                    uint16_t l_396 = 0x7A24L;
                    uint64_t *l_409 = &g_116;
                    l_396--;
                    (*l_372) = &g_37;
                    (*l_385) |= ((g_174.f2 , (((safe_mul_func_int16_t_s_s((l_401 >= ((safe_rshift_func_uint16_t_u_u(((l_404 = 0x4322BBD3L) >= l_401), l_401)) , ((((p_51.f0 ^ (safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((((*l_409) = ((0UL > l_396) > 0xF699L)) >= l_401) >= (*l_79)), 0x0EE9L)), p_51.f0))) <= l_401) <= l_396) > g_224.f0))), g_174.f2)) , g_174.f0) , 5UL)) , l_410);
                    return p_51.f0;
                }
                (*l_385) ^= (((safe_add_func_uint16_t_u_u((*l_384), (safe_mul_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(255UL, ((*l_80) = 1UL))) ^ (((safe_mul_func_uint8_t_u_u((*l_79), (l_404 = ((safe_div_func_uint64_t_u_u((g_36 > (safe_unary_minus_func_int64_t_s(((&g_376[1][3][4] == (p_51.f0 , (void*)0)) & (*p_52))))), p_51.f0)) >= 0xE8L)))) != 0UL) || p_51.f0)) | g_304[0][0][0]), 6UL)))) , 0UL) || 0x0A01C8FF984AD1D1LL);
                if ((((((safe_sub_func_uint32_t_u_u(g_18[0][2][0], (safe_add_func_int16_t_s_s(((l_426 == &g_376[1][3][4]) | (((p_51 , (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((((-2L) && ((safe_sub_func_int8_t_s_s(((void*)0 == p_50), p_51.f0)) < l_404)) , g_147), l_435)), g_436)), p_51.f0))) == 4L) <= (-1L))), p_51.f0)))) ^ 0x105BL) & (-5L)) ^ 0x32L) <= g_18[0][2][0]))
                { 
                    uint8_t l_437 = 0xDAL;
                    int32_t l_459 = 0x1B7AED08L;
                    --l_437;
                    (*p_52) = 0x654DC8DDL;
                    l_459 = (((safe_sub_func_uint8_t_u_u(((p_51.f0 == (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((*l_79), (0UL & (safe_mod_func_uint16_t_u_u((((*p_52) = ((safe_add_func_uint8_t_u_u(l_450, (safe_rshift_func_int8_t_s_u(0x5EL, (safe_mul_func_int8_t_s_s(l_455, (safe_mod_func_uint32_t_u_u(p_51.f0, (-10L))))))))) <= l_437)) >= l_458), 1UL))))), p_51.f0))) && 0x48E457E5L), p_51.f0)) || p_51.f0) && p_51.f0);
                    (*l_385) |= (*l_79);
                }
                else
                { 
                    uint32_t l_460 = 0x4F648BA4L;
                    int32_t l_463 = 1L;
                    int32_t l_465[2];
                    int8_t *l_476[2][7] = {{(void*)0,&l_208.f1,(void*)0,&l_208.f1,(void*)0,&l_208.f1,(void*)0},{&g_174.f1,&g_174.f1,&g_174.f1,&g_174.f1,&g_174.f1,&g_174.f1,&g_174.f1}};
                    int32_t l_477 = 0xB928ACADL;
                    uint16_t *l_478[5][4][1] = {{{&g_304[0][1][0]},{&l_337.f0},{&l_296},{&l_337.f0}},{{(void*)0},{(void*)0},{(void*)0},{&l_337.f0}},{{&l_296},{&l_337.f0},{&g_304[0][1][0]},{&l_337.f0}},{{&l_296},{&l_337.f0},{(void*)0},{(void*)0}},{{(void*)0},{&l_337.f0},{&l_296},{&l_337.f0}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_465[i] = 0x5FD2902EL;
                    l_460++;
                    (*l_384) = (*p_52);
                    l_468--;
                    (*l_385) &= ((safe_add_func_uint16_t_u_u((l_473 , (safe_mul_func_int8_t_s_s((*l_384), (l_477 &= (*l_79))))), (g_75 ^= p_51.f0))) <= g_157.f2);
                    if (l_479)
                        continue;
                }
            }
            if (((*l_385) = 0x04C585D8L))
            { 
                uint8_t l_492[4][1];
                union U1 *l_525 = &l_473;
                uint64_t *l_542 = &l_366[4];
                int32_t l_548[6][4] = {{0x56371C4FL,0L,1L,0L},{1L,0L,1L,0L},{0x56371C4FL,0L,0x413353FCL,0L},{0x56371C4FL,0L,1L,0L},{1L,0L,1L,0L},{0x56371C4FL,0L,0x413353FCL,0L}};
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_492[i][j] = 0x40L;
                }
                if ((safe_rshift_func_uint8_t_u_s(((*l_80) &= ((safe_sub_func_int16_t_s_s((((&p_52 != &p_52) != ((*l_385) |= (safe_add_func_int64_t_s_s(0x7B9591519310811ALL, (safe_sub_func_int16_t_s_s((safe_mul_func_uint32_t_u_u(g_94, 0L)), ((*l_270) = ((((p_51.f0 < ((safe_mul_func_uint16_t_u_u(g_159.f0, 8UL)) ^ 65530UL)) , 8UL) >= 0x0EL) , p_51.f0)))))))) > g_174.f2), l_389)) && p_51.f0)), 2)))
                { 
                    int32_t l_518 = 3L;
                    uint64_t *l_519 = &l_340;
                    uint8_t **l_521 = &l_80;
                    uint8_t *** const l_520 = &l_521;
                    uint64_t *l_522 = &l_389;
                    int32_t *l_523 = &l_341;
                    int32_t l_524 = 0x4EC4463AL;
                    l_350[0][0][0] = (*p_52);
                    l_492[2][0]++;
                    l_524 &= (~((l_492[1][0] < (((l_492[2][0] == ((((*l_523) ^= (p_51.f0 < (safe_lshift_func_int16_t_s_u((((safe_add_func_int64_t_s_s((g_224 , (((safe_rshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u(((*l_522) = (l_518 = ((((safe_lshift_func_int16_t_s_s((((safe_mul_func_int8_t_s_s((g_154.f1 = (safe_mod_func_uint64_t_u_u(((((*l_79) & ((safe_sub_func_uint64_t_u_u(((*l_519) = (safe_add_func_uint8_t_u_u(((-7L) == ((safe_sub_func_int8_t_s_s((&p_50 != &g_58), (**g_57))) >= l_518)), (*g_58)))), 2L)) ^ l_518)) & 0x08C83ECA7CFC120FLL) < p_51.f0), p_51.f0))), g_211.f0)) | p_51.f0) <= g_304[0][2][0]), g_89)) , (void*)0) == l_520) && l_518))), p_51.f0)), 12)) ^ 1UL) != p_51.f0)), l_492[2][0])) | g_159.f0) || p_51.f0), g_147)))) , (void*)0) != &g_57)) == 6L) == p_51.f0)) < p_51.f0));
                }
                else
                { 
                    int8_t *l_537 = &g_174.f1;
                    uint32_t l_538 = 0x3B0BEAC7L;
                    (*g_314) = l_525;
                    (*l_384) ^= ((((safe_sub_func_uint16_t_u_u(4UL, 65531UL)) | (safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_u(g_36, 12)) > g_304[0][1][0]) >= (safe_rshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s((l_536 <= ((((*l_537) = (**g_57)) && p_51.f0) > 0x20L)), p_51.f0)) , p_51.f0), 6))), (*l_79)))) > 0x6A87L) > l_538);
                }
                (*l_372) = l_539;
                if (((*l_539) && (l_208 , (safe_mul_func_int16_t_s_s((0xFDE97112L & ((*p_52) = (((*l_542) = p_51.f0) ^ ((l_548[1][2] = ((safe_add_func_int16_t_s_s((0x1786AA2D01DE58FDLL < ((!(safe_rshift_func_int16_t_s_u((1L < ((((*l_373) = (void*)0) != &g_224) & g_157.f2)), 1))) >= 1L)), (-1L))) ^ p_51.f0)) >= p_51.f0)))), p_51.f0)))))
                { 
                    (*p_52) &= ((void*)0 == &l_237);
                    if ((*p_52))
                        break;
                    if ((*p_52))
                        continue;
                    (*l_372) = &g_18[0][2][0];
                    if ((*p_52))
                        continue;
                }
                else
                { 
                    uint32_t l_560 = 0xFDF1D603L;
                    (*p_52) ^= ((safe_mul_func_uint8_t_u_u((((((l_492[2][0] == ((l_551[0][1] , g_3) ^ ((safe_rshift_func_int8_t_s_u(((*l_525) , (g_159.f1 = (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(1UL, ((safe_rshift_func_uint8_t_u_u(((*g_58) == (**g_57)), 1)) , (*l_79)))), 3UL)))), 5)) , 0UL))) , (*l_79)) , g_224.f2) & (*l_539)) >= 0x46774A5BB8BBE3EDLL), l_560)) , 0x178CF943L);
                    return p_51.f0;
                }
            }
            else
            { 
                uint64_t *l_578 = &g_116;
                const int32_t l_584 = (-5L);
                int32_t l_600 = 2L;
                int32_t l_601 = 0xF9A613B7L;
                int32_t l_602 = 1L;
                int32_t l_604 = 0xEE35C9AFL;
                for (l_377 = 0; (l_377 <= 7); l_377 = safe_add_func_int32_t_s_s(l_377, 1))
                { 
                    union U1 ***l_567 = &l_566;
                    (*l_384) |= ((&l_458 == ((g_563 == l_565[4][1][1]) , (void*)0)) , (*p_52));
                    (*l_567) = l_566;
                }
                if (((safe_rshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((safe_div_func_uint64_t_u_u(((g_37 > p_51.f0) , (safe_lshift_func_int8_t_s_s(0x2CL, 7))), (0x5BL && (~(safe_unary_minus_func_uint64_t_u((--(*l_578)))))))) != (--(*l_80))), (!((l_584 , (&g_156[3] != &g_100[0])) < 7L)))), (*l_79))) && p_51.f0))
                { 
                    int32_t ***l_591 = &l_372;
                    int8_t *l_592[7];
                    int32_t l_599 = 0x4623908CL;
                    int32_t l_603[7][5][7] = {{{0xCF1777BFL,0xC0FB51F4L,0xE0436393L,6L,0x4FB41EDCL,0xB86658F8L,0xD0434D79L},{2L,0xC9F82D43L,0xE45B4DA3L,0xE0436393L,0xEB62E286L,0xE0436393L,0xE45B4DA3L},{(-1L),(-1L),(-2L),(-6L),0xD0434D79L,0x2D81B39DL,6L},{0xEF4D9896L,(-1L),0xCF322514L,0L,0xFEB64B9CL,(-1L),0xCF1777BFL},{0x3CB52B5FL,1L,(-5L),0L,0xD0434D79L,0xFEB64B9CL,9L}},{{5L,0L,0xAD285829L,0xD0434D79L,0xEB62E286L,1L,(-6L)},{0xB002E5AAL,(-10L),(-1L),0xD4C2BEB7L,0x4FB41EDCL,9L,(-1L)},{0x4AE1AB64L,6L,(-5L),0x40F27801L,0xD8AA41A1L,8L,(-1L)},{0xC9F82D43L,0x22D463B8L,0x7DC82A3BL,0xEF4D9896L,(-8L),0xA9D5B4CCL,1L},{0L,0x40F27801L,0x6ADFDD05L,(-1L),0xB81E7DC8L,0xE45B4DA3L,0x1ADF65B4L}},{{0x4FB41EDCL,0L,0xE45B4DA3L,0xCF322514L,0x0167081EL,0xE45B4DA3L,0xB86658F8L},{5L,(-6L),0x702B2D7FL,(-1L),0L,0xA9D5B4CCL,0x0167081EL},{(-6L),9L,2L,5L,(-10L),8L,0xB002E5AAL},{0xBB972B8AL,0x1ADF65B4L,0x4AE1AB64L,9L,0xCF1777BFL,9L,0xC0FB51F4L},{(-1L),0xB002E5AAL,0x861826F5L,0x0167081EL,0x5C3922D3L,1L,0x5C3922D3L}},{{(-1L),0x4FB41EDCL,0x4FB41EDCL,(-1L),4L,0x17460BB0L,0xE0436393L},{(-2L),0xD3E95A86L,(-2L),(-7L),0xFEB64B9CL,(-10L),0x185D281EL},{0x017C58A9L,0xE45B4DA3L,0L,0xEADB7DA5L,(-1L),0xC2019ED6L,0xE0436393L},{0xB86658F8L,(-1L),(-10L),0xB81E7DC8L,2L,7L,(-5L)},{0xE8C1814DL,9L,2L,0x7DC82A3BL,0xEADB7DA5L,(-2L),0xE8C1814DL}},{{0xE0436393L,0xEADB7DA5L,(-7L),0xC0FB51F4L,(-1L),0xEB62E286L,0xC5787BAEL},{0xB81E7DC8L,4L,1L,(-10L),(-9L),0x2D81B39DL,(-1L)},{1L,7L,0x861826F5L,(-1L),0x4AE1AB64L,0xE8C1814DL,(-2L)},{0xBB972B8AL,0xB81E7DC8L,(-8L),0xD3E95A86L,(-5L),5L,0xD3E95A86L},{0xBB972B8AL,0xDE115762L,(-10L),7L,(-2L),0x702B2D7FL,(-1L)}},{{1L,(-1L),4L,2L,0xB81E7DC8L,0x185D281EL,(-10L)},{0xB81E7DC8L,0xA273A35BL,(-1L),0x017C58A9L,(-10L),0x1ADF65B4L,(-1L)},{0xE0436393L,0x5330631DL,0x2D81B39DL,0x40F27801L,0x76BD81AEL,2L,8L},{0xE8C1814DL,0x6B35339AL,0L,0L,0x6B35339AL,0xE8C1814DL,(-10L)},{0xB86658F8L,(-10L),(-1L),0x017C58A9L,0xE0436393L,1L,0x6ADFDD05L}},{{0x017C58A9L,0x7DC82A3BL,0x078D11FEL,(-5L),0x9AA3AF16L,0x76BD81AEL,7L},{(-2L),(-10L),7L,0x2306959EL,0xC5787BAEL,(-2L),0x7DC82A3BL},{0x4FB41EDCL,0x6B35339AL,0x0167081EL,0xD3E95A86L,0x3CB52B5FL,0x5C3922D3L,0xCF322514L},{(-1L),0x5330631DL,0x185D281EL,8L,0x7DC82A3BL,0xAD285829L,7L},{(-7L),0xA273A35BL,0x76BD81AEL,0xE8C1814DL,(-1L),(-10L),(-2L)}}};
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_592[i] = &l_208.f1;
                    (*p_52) = (p_51.f0 < (safe_div_func_int16_t_s_s((0x32L != (((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((&l_79 != ((*l_591) = &p_52)) , (g_154.f1 |= (*g_58))), l_584)), (safe_mod_func_uint64_t_u_u((~((safe_add_func_int16_t_s_s((-4L), (-6L))) & l_598)), 1UL)))) && (*l_79)) > p_51.f0)), 0x361CL)));
                    l_606++;
                    return g_154.f1;
                }
                else
                { 
                    (*l_539) = (((**g_57) ^ (!(safe_mod_func_int64_t_s_s((safe_div_func_int16_t_s_s((g_224 , (((safe_div_func_int64_t_s_s(((~(safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((g_224.f2 = (255UL < (**g_57))), (l_602 = 2UL))), (l_621 , 0UL)))) && 0L), 0xF759297ACD494DBCLL)) & g_116) || (-1L))), p_51.f0)), 18446744073709551615UL)))) >= (*l_385));
                    return g_91;
                }
            }
            --l_622;
        }
        (*p_52) = (&l_56 == (((safe_lshift_func_int16_t_s_s(((*l_270) = (((*l_79) >= ((g_89 > ((((((*l_637) ^= (safe_sub_func_int16_t_s_s(g_94, (((p_51.f0 >= (safe_add_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((~l_634), ((safe_add_func_uint16_t_u_u(((g_75 , (-3L)) | (*l_79)), 65530UL)) < g_154.f0))) , (*p_52)), 8UL))) , g_81[4][3]) == 0L)))) && 0x25L) , p_51.f0) <= g_304[0][1][0]) <= g_224.f0)) & g_37)) > (*l_539))), 1)) <= l_638[0][0]) , &g_58));
    }
    else
    { 
        int32_t *l_639 = &l_194;
        int32_t *l_640[6][7][2] = {{{&l_350[0][0][2],&l_160},{&l_160,&l_350[0][0][2]},{&g_18[0][2][0],&l_350[0][0][6]},{&g_18[0][2][0],&l_350[0][0][2]},{&l_160,&l_160},{&l_350[0][0][2],&g_18[0][2][0]},{&l_350[0][0][6],&g_18[0][2][0]}},{{&l_350[0][0][2],&l_160},{&l_160,&l_350[0][0][2]},{&g_18[0][2][0],&l_350[0][0][6]},{&g_18[0][2][0],&l_350[0][0][2]},{&l_160,&l_160},{&l_350[0][0][2],&g_18[0][2][0]},{&l_350[0][0][6],&g_18[0][2][0]}},{{&l_350[0][0][2],&l_160},{&l_160,&l_350[0][0][2]},{&g_18[0][2][0],&l_350[0][0][6]},{&g_18[0][2][0],&l_350[0][0][2]},{&l_160,&l_160},{&l_350[0][0][2],&g_18[0][2][0]},{&l_350[0][0][6],&g_18[0][2][0]}},{{&l_350[0][0][2],&l_160},{&l_160,&l_350[0][0][2]},{&g_18[0][2][0],&l_350[0][0][6]},{&g_18[0][2][0],&l_350[0][0][2]},{&l_160,&l_160},{&l_350[0][0][2],&g_18[0][2][0]},{&l_350[0][0][6],&l_350[0][0][2]}},{{&l_350[0][0][6],&l_160},{&l_160,&l_350[0][0][6]},{&l_350[0][0][2],(void*)0},{&l_350[0][0][2],&l_350[0][0][6]},{&l_160,&l_160},{&l_350[0][0][6],&l_350[0][0][2]},{(void*)0,&l_350[0][0][2]}},{{&l_350[0][0][6],&l_160},{&l_160,&l_350[0][0][6]},{&l_350[0][0][2],(void*)0},{&l_350[0][0][2],&l_350[0][0][6]},{&l_160,&l_160},{&l_350[0][0][6],&l_350[0][0][2]},{(void*)0,&l_350[0][0][2]}}};
        int64_t l_641 = (-1L);
        uint64_t l_642 = 18446744073709551606UL;
        int i, j, k;
        g_169[2] = l_639;
        l_642++;
        for (l_642 = 0; (l_642 <= 26); l_642++)
        { 
            return p_51.f0;
        }
    }
    return (*l_79);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_18[i][j][k], "g_18[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_81[i][j], "g_81[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_154.f0, "g_154.f0", print_hash_value);
    transparent_crc(g_154.f1, "g_154.f1", print_hash_value);
    transparent_crc(g_154.f2, "g_154.f2", print_hash_value);
    transparent_crc(g_157.f0, "g_157.f0", print_hash_value);
    transparent_crc(g_157.f1, "g_157.f1", print_hash_value);
    transparent_crc(g_157.f2, "g_157.f2", print_hash_value);
    transparent_crc(g_159.f0, "g_159.f0", print_hash_value);
    transparent_crc(g_159.f1, "g_159.f1", print_hash_value);
    transparent_crc(g_159.f2, "g_159.f2", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_174.f0, "g_174.f0", print_hash_value);
    transparent_crc(g_174.f1, "g_174.f1", print_hash_value);
    transparent_crc(g_174.f2, "g_174.f2", print_hash_value);
    transparent_crc(g_211.f0, "g_211.f0", print_hash_value);
    transparent_crc(g_224.f2, "g_224.f2", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_286.f0, "g_286.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_304[i][j][k], "g_304[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_436, "g_436", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_801[i][j][k], "g_801[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_895, "g_895", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_987[i], "g_987[i]", print_hash_value);

    }
    transparent_crc(g_1117, "g_1117", print_hash_value);
    transparent_crc(g_1414.f0, "g_1414.f0", print_hash_value);
    transparent_crc(g_1414.f2, "g_1414.f2", print_hash_value);
    transparent_crc(g_1549, "g_1549", print_hash_value);
    transparent_crc(g_1666.f0, "g_1666.f0", print_hash_value);
    transparent_crc(g_1666.f1, "g_1666.f1", print_hash_value);
    transparent_crc(g_1666.f2, "g_1666.f2", print_hash_value);
    transparent_crc(g_1682, "g_1682", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1702[i], "g_1702[i]", print_hash_value);

    }
    transparent_crc(g_1847, "g_1847", print_hash_value);
    transparent_crc(g_1917, "g_1917", print_hash_value);
    transparent_crc(g_1944, "g_1944", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2030[i], "g_2030[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2045[i], "g_2045[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2085[i].f0, "g_2085[i].f0", print_hash_value);
        transparent_crc(g_2085[i].f1, "g_2085[i].f1", print_hash_value);
        transparent_crc(g_2085[i].f2, "g_2085[i].f2", print_hash_value);

    }
    transparent_crc(g_2106, "g_2106", print_hash_value);
    transparent_crc(g_2159, "g_2159", print_hash_value);
    transparent_crc(g_2226, "g_2226", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
