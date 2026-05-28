// SPDX-License-Identifier: MIT
// cctest_csmith_080f305d.c --- cctest case csmith_080f305d (csmith seed 135213149)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe3c91f1d */
/* @exp_ticks 0x47ad */

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

// Options:   -s 135213149 -o /tmp/csmith_gen_g8973lg6/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   int32_t  f1;
   int32_t  f2;
   uint16_t  f3;
   int16_t  f4;
   int32_t  f5;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   const uint64_t  f1;
   int16_t  f2;
   uint16_t  f3;
};

union U2 {
   uint32_t  f0;
   uint16_t  f1;
   const uint8_t  f2;
   int8_t  f3;
};


static uint32_t g_19 = 18446744073709551615UL;
static uint16_t g_23 = 65535UL;
static int32_t g_29 = 0x25A95506L;
static uint32_t g_30 = 0UL;
static int16_t g_33 = 0xFDB8L;
static int8_t g_34 = 0L;
static int8_t g_35 = 0x17L;
static uint16_t g_63 = 0x73B0L;
static union U2 g_106 = {0xBEC191E6L};
static uint16_t g_109 = 0UL;
static int32_t g_146 = (-9L);
static struct S0 g_163 = {0x981B57B996F1E1A5LL,2L,-1L,65530UL,0x2EC4L,0L};
static int32_t g_172[2] = {(-4L),(-4L)};
static int64_t g_176 = 1L;
static uint32_t g_222 = 0x66F9EC22L;



static uint64_t  func_1(void);
static int64_t  func_4(union U1  p_5, union U1  p_6, const uint16_t  p_7);
static union U1  func_8(uint16_t  p_9, struct S0  p_10, int32_t  p_11, uint64_t  p_12, int64_t  p_13);
static struct S0  func_15(uint16_t  p_16, const int8_t  p_17, uint8_t  p_18);




static uint64_t  func_1(void)
{ 
    uint64_t l_14 = 18446744073709551613UL;
    union U1 l_116 = {{0xF511B60CE2261CAELL,2L,0x559FCE93L,1UL,0x7DC9L,3L}};
    union U2 l_130[5][1] = {{{4294967295UL}},{{0UL}},{{4294967295UL}},{{0UL}},{{4294967295UL}}};
    int32_t l_145[1][1];
    int16_t l_166 = 0xFB49L;
    int64_t l_168 = 0L;
    int16_t l_177 = (-1L);
    uint32_t l_178 = 18446744073709551615UL;
    int32_t l_227 = 0xEED3F469L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_145[i][j] = 1L;
    }
    if ((safe_add_func_int64_t_s_s(func_4(func_8(l_14, func_15(g_19, l_14, g_19), l_14, g_34, g_19), l_116, g_34), g_19)))
    { 
        int32_t l_139 = (-7L);
        int32_t l_162 = 5L;
        int32_t l_169 = 8L;
        int32_t l_170 = 0x0A8A3E14L;
        int32_t l_171 = 1L;
        int32_t l_173 = 0x49A0BCAFL;
        int32_t l_174 = 0x2C582E53L;
        int32_t l_175[1];
        int i;
        for (i = 0; i < 1; i++)
            l_175[i] = 0x222E9D9AL;
        if ((l_130[2][0] , (0x596E128EL < (g_106.f0 = ((((g_29 = (safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s(((0x84L && l_130[2][0].f0) <= 1UL), l_139)), 0x3178L)), (-1L))), 1UL))) && l_116.f0.f0) == l_14) && 18446744073709551615UL)))))
        { 
            int32_t l_142 = 0xDBFA8D9AL;
            for (l_14 = 0; (l_14 == 35); l_14++)
            { 
                l_142 ^= 1L;
            }
            g_29 &= g_106.f1;
        }
        else
        { 
            uint32_t l_147 = 0x61DBC530L;
            for (l_116.f2 = 17; (l_116.f2 != (-26)); l_116.f2 = safe_sub_func_uint32_t_u_u(l_116.f2, 1))
            { 
                int32_t l_164 = 0x6A7480A4L;
                uint64_t l_165 = 0x7B429FF7D8875C3FLL;
                int32_t l_167 = 1L;
                l_147++;
                l_162 = ((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((((-9L) < (l_167 = (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((l_165 = (safe_div_func_int16_t_s_s((safe_unary_minus_func_int64_t_s((g_29 < (func_8(l_162, g_163, l_164, g_163.f4, g_19) , 1L)))), 4UL))) | g_146), l_130[2][0].f0)), l_166)), g_106.f3)))) , 18446744073709551607UL) ^ 0x50BD7AEA954584B1LL))), l_130[2][0].f2)) ^ l_162);
            }
            return g_29;
        }
        l_178++;
    }
    else
    { 
        uint32_t l_183 = 0x5E2DEF93L;
        uint8_t l_185 = 0x2FL;
        uint64_t l_190 = 18446744073709551615UL;
        int32_t l_193[5][1];
        uint16_t l_202 = 65533UL;
        const uint64_t l_203 = 0x33A3002C6F77066ELL;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_193[i][j] = 0x9EEDE39AL;
        }
        for (g_163.f0 = 0; (g_163.f0 <= 12); g_163.f0 = safe_add_func_int32_t_s_s(g_163.f0, 9))
        { 
            union U1 l_184 = {{0x6080F64FDBAA0382LL,0x3169C204L,0x4707D701L,0xD8CDL,-1L,1L}};
            g_172[1] = (g_109 , ((l_183 , l_184) , (g_146 |= g_106.f1)));
        }
        l_193[3][0] = ((l_185 == g_176) & (((safe_rshift_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_s((l_190 = 4L), 4)) >= (safe_rshift_func_uint16_t_u_s((g_163.f2 | 0x4FB355C915C06DEDLL), g_35))) >= l_116.f0.f3) != 1UL), 4)) || g_176) && l_185));
        if ((((l_177 > ((safe_unary_minus_func_int32_t_s((safe_mod_func_int64_t_s_s((((l_116.f0.f4 && 0xF96E852C7D00A8C6LL) >= (safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(0x455BE697L)), l_202)), l_202))) < l_130[2][0].f1), g_106.f1)))) <= 1UL)) != 0x8E059B89L) <= l_203))
        { 
            int64_t l_223[5] = {0x06D4C3360A1AB052LL,0x06D4C3360A1AB052LL,0x06D4C3360A1AB052LL,0x06D4C3360A1AB052LL,0x06D4C3360A1AB052LL};
            int i;
            for (l_183 = (-28); (l_183 < 56); l_183 = safe_add_func_uint8_t_u_u(l_183, 6))
            { 
                int8_t l_224[2][5] = {{0x41L,0x41L,0x41L,0x41L,0x41L},{0L,1L,0L,1L,0L}};
                int i, j;
                g_29 = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s(((safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((0xB3A8L <= l_130[2][0].f0) == (safe_mul_func_uint8_t_u_u((l_223[2] ^= g_222), ((g_163.f0 = ((0x019AL <= g_63) , g_19)) || l_224[0][0])))), l_190)) == l_190), g_35)) & l_116.f0.f4), l_193[3][0])), g_19)) == 0xF88FL), l_178)), l_224[0][4])), 5));
            }
            g_163.f2 = (g_172[1] = (safe_mod_func_uint64_t_u_u(l_203, ((l_145[0][0] , (l_130[2][0].f3 != (g_176 ^= ((l_227 , l_223[2]) || 4UL)))) || 0L))));
        }
        else
        { 
            g_146 = 6L;
        }
    }
    return g_33;
}



static int64_t  func_4(union U1  p_5, union U1  p_6, const uint16_t  p_7)
{ 
    int32_t l_128 = 0x0896F4A5L;
    uint32_t l_129 = 0xCE33710AL;
    for (g_106.f1 = (-4); (g_106.f1 < 28); g_106.f1 = safe_add_func_uint32_t_u_u(g_106.f1, 8))
    { 
        uint32_t l_124 = 0x64DAF6BEL;
        int32_t l_127 = 0xA5A11BA0L;
        l_128 = ((((g_29 , ((safe_unary_minus_func_int16_t_s((((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u((((l_124 = 0x4EB138F2L) , 0x7B94L) <= (safe_add_func_uint8_t_u_u(l_127, (-9L)))), 1)) | l_127) & 6L), l_128)) || l_128) < p_7))) && l_127)) & p_5.f3) < p_5.f0.f1) & l_129);
    }
    return g_23;
}



static union U1  func_8(uint16_t  p_9, struct S0  p_10, int32_t  p_11, uint64_t  p_12, int64_t  p_13)
{ 
    uint32_t l_112 = 0UL;
    union U1 l_115 = {{0x8D5250F4D7AA0E73LL,1L,8L,0x5A86L,4L,1L}};
    ++l_112;
    return l_115;
}



static struct S0  func_15(uint16_t  p_16, const int8_t  p_17, uint8_t  p_18)
{ 
    uint64_t l_20[4] = {6UL,6UL,6UL,6UL};
    struct S0 l_26 = {0x151C8B9BA5E0B2F6LL,0L,0xCE1A812CL,0x05D9L,0x7279L,0x90E69CD1L};
    int32_t l_27 = 5L;
    int32_t l_28 = 0xB83DE37DL;
    int i;
    l_28 &= (l_20[3] != (safe_lshift_func_uint8_t_u_s(9UL, (((l_26.f5 = ((l_27 |= (((g_23 |= g_19) , (safe_add_func_int8_t_s_s(((((l_26 , 0L) & p_18) == g_19) > 0L), g_23))) & 1UL)) != 0xD8L)) , p_18) || l_20[3]))));
    if (g_23)
    { 
        uint16_t l_36 = 0x9462L;
        g_30--;
        l_36--;
    }
    else
    { 
        int32_t l_47 = (-2L);
        int32_t l_49[3];
        int i;
        for (i = 0; i < 3; i++)
            l_49[i] = 0xD639B6AFL;
        for (l_26.f4 = 0; (l_26.f4 > (-29)); l_26.f4 = safe_sub_func_uint32_t_u_u(l_26.f4, 8))
        { 
            const uint64_t l_48 = 0x8211ABD849EDE151LL;
            g_29 = (safe_mul_func_int16_t_s_s(1L, ((g_33 || (safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((g_19 , g_35), p_17)), g_35))) , p_16)));
            g_29 = (-10L);
            l_49[0] |= (l_47 , ((p_18 != (((p_17 && (g_33 = p_18)) & l_47) < l_48)) ^ 65535UL));
        }
    }
    if (((l_28 |= ((g_29 = g_35) , (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(g_23, l_26.f2)), ((p_18 , p_18) == l_26.f5))))) == l_27))
    { 
        const int16_t l_62 = 0L;
        int32_t l_64[4][5][3] = {{{1L,0xCA6AFE10L,1L},{1L,1L,0xCA6AFE10L},{(-6L),0xCA6AFE10L,0xCA6AFE10L},{0xCA6AFE10L,5L,1L},{(-6L),5L,(-6L)}},{{1L,0xCA6AFE10L,1L},{1L,1L,(-6L)},{1L,(-6L),(-6L)},{(-6L),1L,5L},{1L,1L,1L}},{{0xCA6AFE10L,(-6L),5L},{0xCA6AFE10L,0xCA6AFE10L,(-6L)},{1L,(-6L),(-6L)},{(-6L),1L,5L},{1L,1L,1L}},{{0xCA6AFE10L,(-6L),5L},{0xCA6AFE10L,0xCA6AFE10L,(-6L)},{1L,(-6L),(-6L)},{(-6L),1L,5L},{1L,1L,1L}}};
        int i, j, k;
        l_64[3][1][0] = (((safe_rshift_func_uint16_t_u_s((p_16 ^= p_18), ((((g_63 &= ((g_35 = g_34) < (safe_lshift_func_uint8_t_u_s(g_23, (safe_div_func_int64_t_s_s(l_62, l_62)))))) != l_62) || 0xD985L) | g_29))) == 0UL) > g_23);
        l_26 = ((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(((((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(0x98L, g_19)), (safe_mul_func_int8_t_s_s((g_30 >= ((8UL == 0xC7506514L) > g_19)), p_18)))) && 0L), l_64[3][1][0])) ^ g_34), l_28)), 0UL)) < g_19) == g_19) != 0L), g_29)), 0x8B1B829F48D0B90ELL)), l_26.f4)), l_62)), 4UL)) , l_26);
    }
    else
    { 
        uint32_t l_98 = 1UL;
        int32_t l_107[5][2][2] = {{{(-1L),1L},{7L,0xA1EE4EC2L}},{{1L,7L},{0xA1EE4EC2L,1L}},{{0xA1EE4EC2L,7L},{1L,0xA1EE4EC2L}},{{7L,1L},{(-1L),(-1L)}},{{1L,(-1L)},{(-1L),1L}}};
        int i, j, k;
        for (l_26.f5 = 0; (l_26.f5 <= 3); l_26.f5 += 1)
        { 
            int32_t l_108 = (-7L);
            int i;
            l_108 |= (l_26.f2 ^= (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((g_106.f1 = ((safe_lshift_func_int8_t_s_s(((((+(l_20[l_26.f5] >= ((safe_div_func_int64_t_s_s(((l_107[0][0][0] = (((safe_mul_func_uint16_t_u_u(((l_98 = p_17) <= (safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s((p_17 == (safe_sub_func_int32_t_s_s((!(g_106 , l_20[l_26.f5])), p_17))), l_20[l_26.f5])), 0UL))), p_18)) || g_63) && p_18)) & 255UL), g_29)) | g_19))) == 0x6DL) | 0x39A8L) ^ 18446744073709551608UL), l_20[l_26.f5])) >= l_20[l_26.f5])) , g_34) , g_106.f3), g_34)), g_63)));
        }
        g_109--;
    }
    return l_26;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_106.f1, "g_106.f1", print_hash_value);
    transparent_crc(g_106.f2, "g_106.f2", print_hash_value);
    transparent_crc(g_106.f3, "g_106.f3", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_163.f0, "g_163.f0", print_hash_value);
    transparent_crc(g_163.f1, "g_163.f1", print_hash_value);
    transparent_crc(g_163.f2, "g_163.f2", print_hash_value);
    transparent_crc(g_163.f3, "g_163.f3", print_hash_value);
    transparent_crc(g_163.f4, "g_163.f4", print_hash_value);
    transparent_crc(g_163.f5, "g_163.f5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_172[i], "g_172[i]", print_hash_value);

    }
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
