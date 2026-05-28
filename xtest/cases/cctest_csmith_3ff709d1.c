// SPDX-License-Identifier: MIT
// cctest_csmith_3ff709d1.c --- cctest case csmith_3ff709d1 (csmith seed 1073154513)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xcbe9f7ba */
/* @exp_ticks 0x748a */

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

// Options:   -s 1073154513 -o /tmp/csmith_gen_u3gtgtej/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int64_t  f1;
   int64_t  f2;
   uint32_t  f3;
   uint16_t  f4;
   uint16_t  f5;
};
#pragma pack(pop)

union U1 {
   int8_t * f0;
   int16_t  f1;
   struct S0  f2;
};


static uint8_t g_20[6] = {0x5CL,0x5CL,0x5CL,0x5CL,0x5CL,0x5CL};
static const int8_t *g_34 = (void*)0;
static int8_t g_52 = 0xDAL;
static int32_t g_54 = 0xA755584EL;
static struct S0 g_55 = {0xD81C9193L,0xE88FEFD6E511AFD2LL,7L,3UL,0UL,0x8C76L};
static uint32_t g_68[3][1][6] = {{{0xEC2CFCCFL,0xEC2CFCCFL,0xEC2CFCCFL,0xEC2CFCCFL,0xEC2CFCCFL,0xEC2CFCCFL}},{{0xEC2CFCCFL,0xEC2CFCCFL,0xEC2CFCCFL,0xEC2CFCCFL,0xEC2CFCCFL,0xEC2CFCCFL}},{{0xEC2CFCCFL,0xEC2CFCCFL,0xEC2CFCCFL,0xEC2CFCCFL,0xEC2CFCCFL,0xEC2CFCCFL}}};
static uint16_t g_82 = 0x2CFBL;
static struct S0 g_99 = {0x7EA5CA43L,-8L,-9L,0UL,0UL,0xAF31L};
static int8_t g_102 = 0x34L;
static uint64_t g_108 = 0UL;
static union U1 g_116 = {0};
static uint64_t g_136 = 0xD2A6E1962FF4F296LL;
static int64_t g_142 = (-5L);
static int32_t g_143[1][2] = {{(-9L),(-9L)}};
static int32_t *g_157 = &g_143[0][0];
static int32_t **g_156[6][1] = {{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157}};
static int32_t ***g_155 = &g_156[5][0];
static int32_t ****g_154 = &g_155;
static int64_t g_183 = 0x2C580385B491DCC6LL;
static int32_t *g_194 = &g_54;
static int32_t ** const g_193 = &g_194;
static int32_t ** const *g_192 = &g_193;
static int16_t * const g_225 = (void*)0;
static struct S0 *g_238 = &g_99;
static struct S0 **g_237 = &g_238;
static int16_t g_324[7][6][3] = {{{(-3L),(-7L),(-7L)},{1L,0xD58CL,0x08FCL},{(-3L),(-7L),(-7L)},{1L,0xD58CL,0x08FCL},{(-3L),(-7L),0xC46EL},{0x08FCL,0x3F23L,0xF52CL}},{{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL},{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL},{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL}},{{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL},{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL},{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL}},{{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL},{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL},{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL}},{{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL},{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL},{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL}},{{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL},{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL},{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL}},{{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL},{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL},{(-7L),0xC46EL,0xC46EL},{0x08FCL,0x3F23L,0xF52CL}}};
static int16_t g_396 = 0x96A0L;
static uint32_t * const *g_398 = (void*)0;
static uint32_t * const **g_397 = &g_398;
static struct S0 g_436 = {0x270545C5L,7L,0L,7UL,0xEF9DL,5UL};
static uint8_t g_443 = 0x53L;
static uint64_t *g_465[1][2] = {{&g_136,&g_136}};
static uint64_t **g_464 = &g_465[0][0];
static int16_t * const *g_476 = &g_225;
static int16_t * const **g_475 = &g_476;
static int16_t * const ***g_474 = &g_475;
static struct S0 ****g_570 = (void*)0;
static uint16_t g_589 = 0x0B0CL;
static const uint16_t g_617 = 0UL;
static struct S0 ***g_654 = &g_237;
static int8_t *g_769 = &g_52;
static int8_t **g_768 = &g_769;
static uint8_t g_822 = 1UL;
static int16_t *g_842 = &g_324[6][5][2];
static int16_t **g_841 = &g_842;
static uint32_t g_875 = 0x693B7F9FL;
static int32_t g_965 = 1L;
static int64_t g_1013 = 0L;
static uint32_t g_1042 = 0x9F1D369BL;
static struct S0 g_1060 = {0x8CE6FD99L,-6L,2L,0x2FA55531L,0x5127L,65535UL};
static union U1 *g_1070 = &g_116;
static int64_t *g_1128 = (void*)0;
static int64_t **g_1127[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
static uint16_t g_1131 = 0xFBBBL;
static int16_t *g_1140 = &g_396;
static int8_t g_1184 = 1L;
static const uint32_t g_1257 = 0UL;
static uint32_t g_1289 = 0x7A9990E9L;
static int8_t * const *g_1351 = &g_769;
static int8_t * const **g_1350 = &g_1351;
static int8_t * const **g_1420 = &g_1351;
static int16_t ***g_1555 = &g_841;
static union U1 *g_1690 = &g_116;
static uint32_t **** const *g_1701 = (void*)0;
static struct S0 g_1739 = {0x85BABFE4L,1L,2L,0x82442876L,0x1DF3L,0x2ED0L};
static uint16_t g_1830 = 0x0404L;
static int32_t g_1895 = 1L;
static uint16_t g_1932 = 65529UL;
static uint8_t g_1978 = 0x66L;
static uint64_t g_1998[1] = {18446744073709551615UL};
static struct S0 *****g_2087 = &g_570;



static uint16_t  func_1(void);
static int16_t  func_11(int8_t * p_12, struct S0  p_13, const int64_t  p_14, int8_t * p_15);
static struct S0  func_17(uint8_t  p_18, struct S0  p_19);
static struct S0  func_21(union U1  p_22, uint8_t  p_23, uint32_t  p_24, int8_t * p_25);
static union U1  func_26(uint32_t  p_27, const int8_t * const  p_28, union U1  p_29, const int8_t * p_30, int32_t  p_31);
static struct S0 * func_39(const int64_t  p_40);
static int16_t  func_43(union U1  p_44, struct S0 * p_45, uint8_t  p_46, int32_t  p_47, uint32_t  p_48);
static union U1  func_49(int8_t * const  p_50);




static uint16_t  func_1(void)
{ 
    uint32_t l_2 = 4294967295UL;
    int8_t l_6 = 0xDEL;
    int8_t *l_16 = (void*)0;
    uint64_t l_32 = 7UL;
    union U1 l_33 = {0};
    int8_t l_1887 = 0xF0L;
    int32_t *l_1888 = &g_965;
    int32_t *l_1893 = (void*)0;
    int32_t *l_1894 = &g_1895;
    int32_t l_1921 = (-3L);
    int32_t l_1922 = 1L;
    int32_t l_1924 = (-1L);
    int32_t l_1925 = 0xF108F5A5L;
    int32_t l_1926 = 0xE9689B3AL;
    int32_t l_1928 = (-1L);
    int32_t l_1930 = 1L;
    int64_t *l_1957[7] = {&g_1739.f1,&g_1739.f1,&g_1739.f1,&g_1739.f1,&g_1739.f1,&g_1739.f1,&g_1739.f1};
    const int64_t *l_1959 = &g_1060.f1;
    int8_t *l_2022 = &g_102;
    int32_t l_2032 = 0xA9443A1EL;
    int32_t ***l_2045 = &g_156[0][0];
    int i;
    (*l_1888) = ((((++l_2) < ((+l_6) != (safe_div_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(0x028EL, ((((l_6 > func_11(l_16, func_17(g_20[2], func_21(func_26(l_32, &l_6, l_33, g_34, l_32), l_32, l_32, &l_6)), l_32, (*g_768))) == 0x52272B52L) < l_6) < l_32))) != g_436.f1), l_32)))) ^ l_1887) < l_1887);
    (*l_1894) &= ((safe_add_func_int8_t_s_s((*l_1888), (g_99.f2 , ((**g_768) = (*l_1888))))) > (safe_add_func_uint64_t_u_u(((func_26(g_55.f2, &l_1887, (*g_1690), &l_6, (*l_1888)) , (*l_1888)) || (*l_1888)), 0UL)));
    for (g_108 = (-27); (g_108 >= 9); ++g_108)
    { 
        int32_t l_1898 = 0xC3AC3615L;
        int32_t l_1919 = (-1L);
        int32_t l_1923 = 0x43952734L;
        int32_t l_1927 = (-1L);
        int32_t l_1929 = 1L;
        int32_t l_1931 = 6L;
        const uint32_t l_1944 = 0x93C0E67CL;
        uint16_t l_1999 = 0xCD0DL;
        uint64_t *l_2001 = &l_32;
        int16_t *l_2014 = &g_324[2][4][1];
        int8_t * const l_2023 = (void*)0;
        struct S0 l_2033 = {1L,-1L,0x4DAA5DCB05A8B52BLL,0xCF6F3FFDL,0xF8C2L,0xA853L};
        struct S0 *****l_2088[6][4][6] = {{{(void*)0,&g_570,(void*)0,(void*)0,&g_570,(void*)0},{&g_570,&g_570,&g_570,&g_570,&g_570,&g_570},{&g_570,&g_570,&g_570,&g_570,&g_570,&g_570},{&g_570,&g_570,&g_570,&g_570,&g_570,&g_570}},{{&g_570,&g_570,(void*)0,(void*)0,&g_570,(void*)0},{(void*)0,(void*)0,&g_570,&g_570,&g_570,(void*)0},{&g_570,&g_570,&g_570,&g_570,(void*)0,&g_570},{&g_570,&g_570,&g_570,(void*)0,&g_570,&g_570}},{{&g_570,&g_570,(void*)0,&g_570,(void*)0,&g_570},{&g_570,&g_570,&g_570,&g_570,&g_570,(void*)0},{&g_570,&g_570,&g_570,&g_570,&g_570,&g_570},{(void*)0,(void*)0,&g_570,&g_570,&g_570,&g_570}},{{&g_570,&g_570,&g_570,&g_570,&g_570,&g_570},{&g_570,&g_570,&g_570,&g_570,(void*)0,&g_570},{&g_570,&g_570,&g_570,(void*)0,(void*)0,&g_570},{(void*)0,(void*)0,&g_570,(void*)0,&g_570,(void*)0}},{{&g_570,&g_570,&g_570,(void*)0,&g_570,&g_570},{&g_570,(void*)0,&g_570,&g_570,&g_570,(void*)0},{(void*)0,&g_570,&g_570,&g_570,&g_570,(void*)0},{&g_570,&g_570,(void*)0,(void*)0,&g_570,&g_570}},{{&g_570,&g_570,&g_570,(void*)0,&g_570,&g_570},{(void*)0,&g_570,&g_570,(void*)0,&g_570,&g_570},{&g_570,(void*)0,&g_570,&g_570,(void*)0,&g_570},{&g_570,&g_570,(void*)0,&g_570,(void*)0,&g_570}}};
        int i, j, k;
    }
    return (*l_1894);
}



static int16_t  func_11(int8_t * p_12, struct S0  p_13, const int64_t  p_14, int8_t * p_15)
{ 
    int16_t l_1740 = 0xE002L;
    int32_t l_1741 = (-8L);
    int32_t *l_1742[2];
    uint64_t l_1743 = 0x29CB0B474FDE6109LL;
    int64_t ***l_1758 = (void*)0;
    int32_t l_1763 = 0x16E067C7L;
    uint32_t *l_1778 = &g_1042;
    uint32_t **l_1777 = &l_1778;
    int8_t ***l_1848 = &g_768;
    int8_t *** const *l_1847 = &l_1848;
    uint32_t l_1862 = 18446744073709551608UL;
    uint64_t l_1868[5][7][7] = {{{18446744073709551615UL,0x6F8EFF9CA9A45E74LL,3UL,0x5C5C19591883F4B1LL,18446744073709551607UL,1UL,18446744073709551615UL},{0UL,18446744073709551615UL,3UL,0x316466DDF2D540F2LL,18446744073709551612UL,0x6F8EFF9CA9A45E74LL,0xC04B3EBAA07437EBLL},{18446744073709551615UL,0xAE75473A921D2184LL,1UL,0x5C5C19591883F4B1LL,18446744073709551612UL,0x691D6722FF4454B7LL,7UL},{7UL,0x6F8EFF9CA9A45E74LL,18446744073709551607UL,0xA14A42F1806DEA42LL,18446744073709551607UL,0x6F8EFF9CA9A45E74LL,7UL},{0UL,0xAE428ED6FAC59644LL,18446744073709551609UL,0x316466DDF2D540F2LL,0UL,1UL,0xC04B3EBAA07437EBLL},{7UL,0xAE428ED6FAC59644LL,1UL,0xBF4D21CBD8584463LL,0x292D6163FB0ABD26LL,0x691D6722FF4454B7LL,18446744073709551615UL},{18446744073709551615UL,0x6F8EFF9CA9A45E74LL,18446744073709551609UL,0xBF4D21CBD8584463LL,18446744073709551607UL,0x91104FFC35676FE1LL,18446744073709551615UL}},{{0UL,0xAE75473A921D2184LL,18446744073709551607UL,0x316466DDF2D540F2LL,0x292D6163FB0ABD26LL,0x91104FFC35676FE1LL,0xC04B3EBAA07437EBLL},{18446744073709551615UL,18446744073709551615UL,1UL,0xA14A42F1806DEA42LL,0UL,0x691D6722FF4454B7LL,18446744073709551615UL},{18446744073709551615UL,0x6F8EFF9CA9A45E74LL,3UL,0x5C5C19591883F4B1LL,18446744073709551607UL,1UL,18446744073709551615UL},{0UL,18446744073709551615UL,3UL,0x316466DDF2D540F2LL,18446744073709551612UL,0x6F8EFF9CA9A45E74LL,0xC04B3EBAA07437EBLL},{18446744073709551615UL,0xAE75473A921D2184LL,1UL,0x5C5C19591883F4B1LL,18446744073709551612UL,0x691D6722FF4454B7LL,7UL},{7UL,0x6F8EFF9CA9A45E74LL,18446744073709551607UL,0xA14A42F1806DEA42LL,18446744073709551607UL,0x6F8EFF9CA9A45E74LL,7UL},{0UL,0xAE428ED6FAC59644LL,18446744073709551609UL,0x316466DDF2D540F2LL,0UL,1UL,0xC04B3EBAA07437EBLL}},{{7UL,0xAE428ED6FAC59644LL,1UL,0x000024536839D1F2LL,0xE9DBC17808743E4ELL,7UL,0x316466DDF2D540F2LL},{1UL,5UL,0x5CE0CFB911E05BB3LL,0x000024536839D1F2LL,1UL,1UL,1UL},{18446744073709551615UL,18446744073709551614UL,1UL,0UL,0xE9DBC17808743E4ELL,1UL,18446744073709551615UL},{0x316466DDF2D540F2LL,0xC04B3EBAA07437EBLL,18446744073709551611UL,18446744073709551614UL,5UL,7UL,1UL},{0x316466DDF2D540F2LL,5UL,1UL,0x682DA2B6F140621CLL,1UL,18446744073709551615UL,0x316466DDF2D540F2LL},{18446744073709551615UL,0xC04B3EBAA07437EBLL,1UL,0UL,0x4A9677141B6945E2LL,5UL,18446744073709551615UL},{1UL,18446744073709551614UL,18446744073709551611UL,0x682DA2B6F140621CLL,0x4A9677141B6945E2LL,7UL,18446744073709551615UL}},{{18446744073709551615UL,5UL,1UL,18446744073709551614UL,1UL,5UL,18446744073709551615UL},{18446744073709551615UL,0UL,0x5CE0CFB911E05BB3LL,0UL,5UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0UL,18446744073709551611UL,0x000024536839D1F2LL,0xE9DBC17808743E4ELL,7UL,0x316466DDF2D540F2LL},{1UL,5UL,0x5CE0CFB911E05BB3LL,0x000024536839D1F2LL,1UL,1UL,1UL},{18446744073709551615UL,18446744073709551614UL,1UL,0UL,0xE9DBC17808743E4ELL,1UL,18446744073709551615UL},{0x316466DDF2D540F2LL,0xC04B3EBAA07437EBLL,18446744073709551611UL,18446744073709551614UL,5UL,7UL,1UL},{0x316466DDF2D540F2LL,5UL,1UL,0x682DA2B6F140621CLL,1UL,18446744073709551615UL,0x316466DDF2D540F2LL}},{{18446744073709551615UL,0xC04B3EBAA07437EBLL,1UL,0UL,0x4A9677141B6945E2LL,5UL,18446744073709551615UL},{1UL,18446744073709551614UL,18446744073709551611UL,0x682DA2B6F140621CLL,0x4A9677141B6945E2LL,7UL,18446744073709551615UL},{18446744073709551615UL,5UL,1UL,18446744073709551614UL,1UL,5UL,18446744073709551615UL},{18446744073709551615UL,0UL,0x5CE0CFB911E05BB3LL,0UL,5UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0UL,18446744073709551611UL,0x000024536839D1F2LL,0xE9DBC17808743E4ELL,7UL,0x316466DDF2D540F2LL},{1UL,5UL,0x5CE0CFB911E05BB3LL,0x000024536839D1F2LL,1UL,1UL,1UL},{18446744073709551615UL,18446744073709551614UL,1UL,0UL,0xE9DBC17808743E4ELL,1UL,18446744073709551615UL}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1742[i] = &g_143[0][0];
lbl_1834:
    l_1743--;
    for (l_1741 = 0; l_1741 < 7; l_1741 += 1)
    {
        for (g_822 = 0; g_822 < 2; g_822 += 1)
        {
            g_1127[l_1741][g_822] = &g_1128;
        }
    }
lbl_1835:
    for (g_436.f0 = 0; (g_436.f0 > 17); g_436.f0++)
    { 
        int64_t l_1748 = (-1L);
        int64_t ** const *l_1757 = &g_1127[6][1];
        int32_t l_1759 = (-1L);
        uint16_t *l_1760 = &g_1739.f5;
        int32_t l_1764 = 0x83FC4524L;
        l_1748 = 0xE1A98FECL;
        l_1764 ^= (safe_sub_func_int64_t_s_s(l_1748, (((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((*l_1760) = (safe_mod_func_uint8_t_u_u((l_1757 == l_1758), (l_1759 = g_965)))), 0x8FBCL)), ((((safe_sub_func_uint64_t_u_u(((p_14 , p_13.f4) , 18446744073709551609UL), p_13.f1)) && p_14) , l_1763) & 1UL))) != p_13.f2) ^ p_14)));
        (****g_154) = (safe_mul_func_int16_t_s_s(((void*)0 == &l_1742[1]), (&l_1764 != (void*)0)));
    }
    for (g_1739.f3 = 0; (g_1739.f3 >= 58); g_1739.f3 = safe_add_func_int8_t_s_s(g_1739.f3, 3))
    { 
        uint32_t l_1769[5] = {0x7CFE301CL,0x7CFE301CL,0x7CFE301CL,0x7CFE301CL,0x7CFE301CL};
        const int32_t *l_1780 = &l_1763;
        union U1 *l_1796[1][3][2] = {{{&g_116,&g_116},{&g_116,&g_116},{&g_116,&g_116}}};
        int32_t l_1802 = 0xB69439DEL;
        union U1 l_1818 = {0};
        int32_t l_1828 = 0x0EDE1224L;
        uint64_t ****l_1846 = (void*)0;
        int32_t l_1849 = (-1L);
        int32_t l_1856 = 0L;
        int32_t l_1861 = 0x0C3421FFL;
        int32_t *l_1886 = &l_1802;
        int i, j, k;
        if (l_1769[2])
        { 
            int8_t **l_1772 = &g_769;
            int8_t *l_1774 = &g_52;
            int8_t **l_1773 = &l_1774;
            union U1 l_1775[6][3] = {{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}};
            uint32_t ***l_1779 = &l_1777;
            const int32_t **l_1781 = &l_1780;
            int32_t l_1782 = 0x196650D6L;
            int i, j;
            for (g_1042 = (-17); (g_1042 != 44); g_1042++)
            { 
                return (*g_842);
            }
            (****g_154) ^= ((l_1775[0][1] , (0x90AF3ABBL != 0x21A5267EL)) || (!(((*l_1779) = l_1777) != (void*)0)));
            (*l_1781) = l_1780;
            l_1782 &= ((*g_157) = (***g_192));
        }
        else
        { 
            const union U1 l_1786 = {0};
            uint16_t *l_1787 = &g_436.f5;
            uint8_t *l_1795 = &g_20[3];
            union U1 **l_1797 = (void*)0;
            union U1 **l_1798 = (void*)0;
            union U1 **l_1799 = &g_1690;
            int32_t l_1805 = 0xA7D489CCL;
            int16_t l_1827 = 0x702DL;
            int32_t l_1858[7][2][6] = {{{0x30F3E9D8L,6L,0L,0L,6L,0x30F3E9D8L},{0x30F3E9D8L,0L,0x54A98874L,0L,0L,0L}},{{0x30F3E9D8L,2L,0x30F3E9D8L,0L,2L,0x54A98874L},{0xF7A7E55CL,0L,0xEC1C5422L,0xEC1C5422L,0L,0xF7A7E55CL}},{{0xF7A7E55CL,0x30F3E9D8L,0L,0xEC1C5422L,0x30F3E9D8L,0xEC1C5422L},{0xF7A7E55CL,0x54A98874L,0xF7A7E55CL,0xEC1C5422L,0x54A98874L,0L}},{{0xF7A7E55CL,0L,0xEC1C5422L,0xEC1C5422L,0L,0xF7A7E55CL},{0xF7A7E55CL,0x30F3E9D8L,0L,0xEC1C5422L,0x30F3E9D8L,0xEC1C5422L}},{{0xF7A7E55CL,0x54A98874L,0xF7A7E55CL,0xEC1C5422L,0x54A98874L,0L},{0xF7A7E55CL,0L,0xEC1C5422L,0xEC1C5422L,0L,0xF7A7E55CL}},{{0xF7A7E55CL,0x30F3E9D8L,0L,0xEC1C5422L,0x30F3E9D8L,0xEC1C5422L},{0xF7A7E55CL,0x54A98874L,0xF7A7E55CL,0xEC1C5422L,0x54A98874L,0L}},{{0xF7A7E55CL,0L,0xEC1C5422L,0xEC1C5422L,0L,0xF7A7E55CL},{0xF7A7E55CL,0x30F3E9D8L,0L,0xEC1C5422L,0x30F3E9D8L,0xEC1C5422L}}};
            const uint16_t l_1878[3][5][2] = {{{0xA69AL,5UL},{5UL,0xA69AL},{5UL,5UL},{0xA69AL,5UL},{5UL,0xA69AL}},{{5UL,5UL},{0xA69AL,5UL},{5UL,0xA69AL},{5UL,5UL},{0xA69AL,5UL}},{{5UL,0xA69AL},{5UL,5UL},{0xA69AL,5UL},{5UL,0xA69AL},{5UL,5UL}}};
            int16_t l_1885 = (-4L);
            int i, j, k;
            (**g_193) = (~((*l_1787) = ((safe_lshift_func_uint8_t_u_u(7UL, 3)) || (l_1786 , p_13.f1))));
            if ((!(4294967293UL | (safe_add_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((p_13.f3 >= (safe_mul_func_uint8_t_u_u(((*l_1795) ^= 0x4BL), 0x45L))) , ((l_1796[0][0][0] != ((*l_1799) = &g_116)) | (l_1802 = ((((*l_1787) = (safe_rshift_func_int8_t_s_s((**g_768), (*l_1780)))) < (***g_1555)) , (*g_769))))), g_1739.f0)) && p_13.f3), 0L)))))
            { 
                for (g_436.f5 = (-22); (g_436.f5 == 30); ++g_436.f5)
                { 
                    return l_1805;
                }
            }
            else
            { 
                int8_t l_1829 = 0x87L;
                int32_t l_1831 = (-1L);
                l_1831 ^= (safe_div_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((((((safe_lshift_func_uint8_t_u_u((((1UL & (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((p_13.f4 = 0xAB68L), 10)), (safe_sub_func_uint8_t_u_u((((**g_768) , (((((func_21(l_1818, (g_55.f1 , ((safe_div_func_int32_t_s_s((((**g_464) = (safe_rshift_func_uint8_t_u_s((((***g_1555) = ((safe_add_func_uint32_t_u_u(((**l_1777) |= (safe_rshift_func_uint8_t_u_u((0xD2ADL <= l_1827), 6))), p_13.f3)) > 1L)) ^ 0UL), l_1828))) & 0UL), 1UL)) , 255UL)), l_1829, (*g_768)) , (*l_1780)) , l_1829) ^ l_1829) , (*l_1780)) ^ 0x256B10C2L)) >= l_1829), 0xE8L))))) > (*l_1780)) && g_1830), g_1013)) > p_13.f0) & (*l_1780)) > l_1805) , 0L), 13)) != (*l_1780)), g_55.f0));
                if ((***g_192))
                    continue;
                for (g_142 = 0; (g_142 > (-4)); g_142 = safe_sub_func_uint8_t_u_u(g_142, 8))
                { 
                    const int32_t *l_1836 = &l_1763;
                    const int32_t **l_1837 = (void*)0;
                    if (g_436.f5)
                        goto lbl_1834;
                    (*g_157) = (*g_157);
                    if (g_99.f0)
                        goto lbl_1835;
                    l_1836 = l_1836;
                }
                (**g_192) = (**g_192);
                (*g_238) = p_13;
            }
            for (g_396 = 19; (g_396 >= 11); g_396--)
            { 
                int64_t l_1850 = 8L;
                uint16_t l_1852 = 0x1359L;
                int32_t l_1857 = 5L;
                int32_t l_1859 = 0xF60D2187L;
                int32_t l_1860[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1860[i] = 0x6F7D1C68L;
            }
            l_1780 = l_1886;
        }
    }
    l_1742[1] = ((***g_154) = (**g_192));
    return p_13.f3;
}



static struct S0  func_17(uint8_t  p_18, struct S0  p_19)
{ 
    uint64_t l_1557 = 18446744073709551615UL;
    const struct S0 **l_1583[1][3];
    const struct S0 ***l_1582[1][1][4] = {{{&l_1583[0][2],&l_1583[0][2],&l_1583[0][2],&l_1583[0][2]}}};
    const struct S0 ****l_1581[7] = {&l_1582[0][0][2],&l_1582[0][0][2],&l_1582[0][0][2],&l_1582[0][0][2],&l_1582[0][0][2],&l_1582[0][0][2],&l_1582[0][0][2]};
    const struct S0 *****l_1580 = &l_1581[6];
    int32_t l_1609[7][4][3] = {{{0x7FB6C622L,(-3L),0x160F7243L},{0xD86E1DA7L,0x7322A22EL,0x7322A22EL},{0xC931FE00L,5L,0L},{(-4L),0x9A7BE259L,(-9L)}},{{0xC931FE00L,0x160F7243L,0xECC62BA5L},{0xD86E1DA7L,0L,(-1L)},{0x7FB6C622L,0x160F7243L,5L},{1L,0x9A7BE259L,(-1L)}},{{0xF680C2D8L,5L,5L},{(-10L),0x7322A22EL,(-1L)},{0xC932AA8EL,(-3L),0xECC62BA5L},{(-10L),(-1L),(-9L)}},{{0xF680C2D8L,1L,0L},{1L,(-1L),0x7322A22EL},{0x7FB6C622L,(-3L),0x160F7243L},{0xD86E1DA7L,0x7322A22EL,0x7322A22EL}},{{0xC931FE00L,5L,0L},{(-4L),0x9A7BE259L,(-9L)},{0xC931FE00L,0x160F7243L,0xECC62BA5L},{0xD86E1DA7L,0L,(-1L)}},{{0x7FB6C622L,0x160F7243L,5L},{1L,0x9A7BE259L,(-1L)},{0xF680C2D8L,5L,5L},{(-10L),0x7322A22EL,(-1L)}},{{0xC932AA8EL,(-3L),0xECC62BA5L},{(-10L),(-1L),(-9L)},{0xF680C2D8L,1L,0L},{1L,(-1L),0x7322A22EL}}};
    const int32_t *l_1689 = &g_143[0][0];
    int32_t l_1713 = 1L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1583[i][j] = (void*)0;
    }
    for (g_1131 = 0; (g_1131 <= 0); g_1131 += 1)
    { 
        uint32_t l_1575 = 18446744073709551615UL;
        const int32_t l_1578 = 3L;
        int32_t l_1579[7] = {0L,0L,0L,0L,0L,0L,0L};
        struct S0 *****l_1585 = &g_570;
        const int8_t * const **l_1590 = (void*)0;
        const int8_t * const ***l_1589[1];
        uint32_t l_1622 = 0xCD9CCF85L;
        uint64_t l_1637 = 0UL;
        int16_t l_1651 = 0x00E7L;
        int32_t l_1652 = (-9L);
        uint32_t l_1653 = 0x84E93AF5L;
        int i;
        for (i = 0; i < 1; i++)
            l_1589[i] = &l_1590;
        for (g_136 = 1; (g_136 <= 5); g_136 += 1)
        { 
            int32_t ***l_1556 = &g_156[5][0];
            struct S0 *****l_1584 = &g_570;
            int i, j;
            (*l_1556) = (*g_192);
            l_1557--;
            l_1585 = ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((((***l_1556) = (safe_mul_func_uint16_t_u_u((((l_1579[2] = ((safe_mod_func_uint8_t_u_u(((((void*)0 == (*g_397)) | (safe_div_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((l_1575 = (safe_div_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((1L > g_143[g_1131][(g_1131 + 1)]))), g_1042))), ((safe_lshift_func_int16_t_s_s((p_18 , (((**g_768) = (p_18 <= l_1557)) == l_1578)), 3)) != (***l_1556)))), p_19.f0))) & (-6L)), (***l_1556))) < (-4L))) , p_18) || p_19.f1), g_1131))) , (void*)0) != l_1580) ^ (-4L)), 2)), 0xCA95L)) , l_1584);
        }
        for (g_55.f5 = 1; (g_55.f5 <= 5); g_55.f5 += 1)
        { 
            uint64_t **l_1588[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1588[i] = (void*)0;
            (****g_154) = (p_19.f3 < ((void*)0 != l_1588[1]));
        }
        for (g_436.f3 = 0; (g_436.f3 <= 5); g_436.f3 += 1)
        { 
            uint16_t *l_1591 = &g_55.f5;
            int32_t l_1606 = 0L;
            int32_t l_1613 = 0x06D04360L;
            int32_t l_1614[2][5][1] = {{{0xC58DE457L},{(-10L)},{(-10L)},{0xC58DE457L},{1L}},{{0xC58DE457L},{(-10L)},{(-10L)},{0xC58DE457L},{1L}}};
            int i, j, k;
            if ((l_1589[0] == &l_1590))
            { 
                int32_t l_1608 = (-1L);
                int32_t l_1612 = 0L;
                int32_t l_1615 = 7L;
                int32_t l_1616 = 0xBB4EF818L;
                int32_t l_1617 = 0x855AF671L;
                int32_t l_1618 = (-9L);
                int32_t l_1619 = 0x179496C0L;
                int32_t l_1620 = 0xC5D2C5BBL;
                int32_t l_1621 = 0x4F45520AL;
                if (((*g_194) = (&g_617 == l_1591)))
                { 
                    if (p_19.f0)
                        break;
                    if (p_19.f1)
                        break;
                }
                else
                { 
                    uint32_t l_1607 = 0UL;
                    int32_t l_1610 = 0x47031A91L;
                    int32_t *l_1611[7][1][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int i, j, k;
                    (****g_154) = (safe_div_func_uint16_t_u_u((+(safe_rshift_func_uint8_t_u_s(l_1579[5], 0))), ((*g_842) |= p_19.f0)));
                    if (p_19.f2)
                        break;
                    l_1609[6][2][2] = (safe_add_func_uint32_t_u_u(((p_19.f5 | ((((((void*)0 != &g_464) > (((~((***g_192) = ((safe_div_func_int16_t_s_s((g_1060.f4 & (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(p_19.f1, 3)), 2))), l_1575)) != l_1606))) | p_18) != l_1607)) ^ p_18) | l_1608) >= l_1607)) && p_19.f5), 4294967295UL));
                    ++l_1622;
                    return p_19;
                }
            }
            else
            { 
                uint32_t l_1634 = 0xF2FDACB2L;
                struct S0 ** const *l_1639 = &g_237;
                struct S0 ** const **l_1638 = &l_1639;
                int32_t l_1644 = 6L;
                int32_t l_1645 = (-7L);
                int32_t *l_1646 = &l_1579[5];
                int32_t *l_1647 = (void*)0;
                int32_t *l_1648 = &l_1644;
                int32_t *l_1649 = (void*)0;
                int32_t *l_1650[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1650[i] = (void*)0;
                for (l_1622 = 0; (l_1622 <= 5); l_1622 += 1)
                { 
                    int32_t *l_1625 = (void*)0;
                    int32_t *l_1626 = (void*)0;
                    int32_t *l_1627 = (void*)0;
                    int32_t *l_1628 = &g_143[0][0];
                    int32_t *l_1629 = &g_54;
                    int32_t *l_1630 = &l_1613;
                    int32_t *l_1631 = &l_1579[2];
                    int32_t l_1632 = (-6L);
                    int32_t *l_1633[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1633[i] = &l_1613;
                    ++l_1634;
                    return (***g_654);
                }
                if (l_1634)
                    break;
                l_1637 ^= 3L;
                (*g_157) ^= (((l_1638 != (void*)0) < (9L && ((safe_rshift_func_uint8_t_u_s(((l_1644 &= (((((safe_lshift_func_int16_t_s_s((((void*)0 == &l_1634) >= ((***g_192) ^ 0x4AE29EC9L)), p_19.f0)) < p_19.f1) != l_1606) <= l_1579[5]) > (-9L))) && 0x40EDFD5BFB22EE8BLL), p_19.f0)) , 18446744073709551607UL))) <= l_1645);
                l_1653--;
            }
        }
        return (***g_654);
    }
    if (p_18)
    { 
        const int8_t * const l_1671 = &g_102;
        int64_t l_1673 = 2L;
        const int32_t *l_1688 = &l_1609[6][2][2];
        int32_t l_1705 = 0L;
        uint64_t ***l_1712 = &g_464;
        int32_t l_1722 = (-9L);
        int32_t l_1723 = (-6L);
        int32_t l_1724 = 1L;
        int32_t l_1725 = 4L;
        int32_t l_1726 = 5L;
        int32_t l_1727 = 0xC453495AL;
        int32_t l_1728 = 0xD67D815CL;
        int32_t l_1729 = 0x39739EBFL;
        int32_t l_1730[2];
        uint16_t l_1732 = 1UL;
        struct S0 l_1737 = {0L,0xA4C524D08ED4DA4DLL,0x5F1CE615DC7D38F1LL,0xB3B2DECCL,0x2831L,0xD5F5L};
        int i;
        for (i = 0; i < 2; i++)
            l_1730[i] = 0xB649D1AEL;
        if ((&g_398 != (void*)0))
        { 
            int8_t l_1666 = 0xF8L;
            union U1 l_1672 = {0};
            union U1 *l_1691 = &l_1672;
            uint32_t *l_1700[1][1];
            uint32_t **l_1699 = &l_1700[0][0];
            uint32_t ***l_1698[3];
            uint32_t ****l_1697[6][3][2] = {{{&l_1698[0],&l_1698[2]},{&l_1698[0],&l_1698[2]},{&l_1698[2],&l_1698[0]}},{{&l_1698[2],&l_1698[2]},{&l_1698[1],&l_1698[1]},{&l_1698[2],&l_1698[1]}},{{&l_1698[1],&l_1698[2]},{&l_1698[2],&l_1698[0]},{&l_1698[2],&l_1698[2]}},{{&l_1698[0],&l_1698[2]},{&l_1698[0],&l_1698[2]},{&l_1698[2],&l_1698[0]}},{{&l_1698[2],&l_1698[2]},{&l_1698[1],&l_1698[1]},{&l_1698[2],&l_1698[1]}},{{&l_1698[1],&l_1698[2]},{&l_1698[2],&l_1698[0]},{&l_1698[2],&l_1698[2]}}};
            uint32_t **** const *l_1696 = &l_1697[1][1][1];
            int32_t *l_1716 = (void*)0;
            int32_t *l_1717 = &g_143[0][0];
            int32_t *l_1718 = &g_965;
            int32_t *l_1719 = &l_1713;
            int32_t *l_1720 = &l_1609[0][0][2];
            int32_t *l_1721[1];
            int64_t l_1731 = 0xF68C9486281ACFC4LL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1700[i][j] = &g_68[1][0][5];
            }
            for (i = 0; i < 3; i++)
                l_1698[i] = &l_1699;
            for (i = 0; i < 1; i++)
                l_1721[i] = &l_1713;
            for (g_102 = 0; (g_102 <= (-11)); g_102 = safe_sub_func_int32_t_s_s(g_102, 7))
            { 
                union U1 **l_1674[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint16_t *l_1680[3][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                int8_t ***l_1685 = &g_768;
                int8_t ****l_1686 = &l_1685;
                int32_t l_1687[5];
                struct S0 l_1692 = {0x931AA067L,0x9AF1182EA1613436LL,0xF7213A43DB6669F4LL,0xF91C7B0DL,0x22A8L,0UL};
                int i, j;
                for (i = 0; i < 5; i++)
                    l_1687[i] = 0L;
                g_1070 = ((((safe_mod_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u(0x0D47L, ((((safe_div_func_uint16_t_u_u(g_1131, p_18)) < (safe_mul_func_uint16_t_u_u(l_1666, l_1666))) , (~((((func_26(((safe_unary_minus_func_int8_t_s(((safe_lshift_func_uint16_t_u_u((0UL | (**g_768)), 6)) , 0x1EL))) < (-8L)), l_1671, l_1672, (*g_768), l_1673) , (****g_154)) , l_1673) | 0UL) <= 1L))) , p_19.f5))) < 0x8AB4L) , l_1666), 0x0DBDL)) || l_1609[6][0][1]) <= l_1609[6][2][2]) , (void*)0);
                if (((~(p_19.f5 = (0x05BB24553B5326B2LL | ((safe_add_func_int16_t_s_s((*g_1140), (((safe_add_func_int32_t_s_s(0x5910E468L, p_19.f5)) != ((-1L) < (((p_19.f4++) , ((((safe_div_func_int16_t_s_s((((*l_1686) = l_1685) != (void*)0), 65528UL)) | p_19.f0) , (-1L)) ^ 0x31L)) <= (**g_841)))) != l_1609[6][2][2]))) == l_1687[3])))) , p_19.f2))
                { 
                    l_1689 = l_1688;
                }
                else
                { 
                    l_1691 = g_1690;
                    return l_1692;
                }
                for (g_1131 = 0; (g_1131 <= 2); g_1131 += 1)
                { 
                    struct S0 l_1693 = {7L,0x02F202BF3BCC1524LL,-8L,0x6ADAE7F6L,65535UL,0UL};
                    uint32_t ****l_1695 = (void*)0;
                    uint32_t *****l_1694[7][2];
                    uint8_t *l_1706 = (void*)0;
                    uint8_t *l_1707 = &g_20[1];
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1694[i][j] = &l_1695;
                    }
                    l_1713 ^= (((*g_238) = l_1693) , ((l_1694[1][1] != (g_1701 = l_1696)) , ((safe_add_func_uint32_t_u_u(((0UL ^ (((((*l_1707) = (+l_1705)) && (safe_sub_func_int16_t_s_s(((((*g_157) = (safe_mul_func_int16_t_s_s((((void*)0 == l_1712) == 3UL), p_18))) || (*l_1688)) , l_1692.f4), p_19.f1))) , p_19.f1) , (***g_192))) != l_1666), (*****g_1701))) >= 0xFF36L)));
                    return p_19;
                }
                for (p_19.f5 = 0; (p_19.f5 != 45); p_19.f5 = safe_add_func_uint8_t_u_u(p_19.f5, 3))
                { 
                    return p_19;
                }
            }
            --l_1732;
        }
        else
        { 
            for (g_436.f2 = (-5); (g_436.f2 < (-26)); g_436.f2 = safe_sub_func_int32_t_s_s(g_436.f2, 1))
            { 
                return (*g_238);
            }
            return l_1737;
        }
    }
    else
    { 
        uint16_t l_1738 = 0xD8B9L;
        (*g_157) ^= l_1738;
        return g_1739;
    }
    return (***g_654);
}



static struct S0  func_21(union U1  p_22, uint8_t  p_23, uint32_t  p_24, int8_t * p_25)
{ 
    struct S0 l_1551 = {0x56026C7BL,0x37071D7D7ABD00CCLL,0x951B3E07C84A668DLL,1UL,0xFEE2L,0xA2F2L};
    const int16_t *l_1554 = &g_324[6][5][2];
    const int16_t **l_1553[1][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    const int16_t ***l_1552[3][7][7] = {{{(void*)0,&l_1553[0][4],&l_1553[0][5],&l_1553[0][3],&l_1553[0][3],&l_1553[0][3],(void*)0},{&l_1553[0][0],(void*)0,(void*)0,&l_1553[0][3],&l_1553[0][3],&l_1553[0][4],(void*)0},{&l_1553[0][3],(void*)0,&l_1553[0][3],(void*)0,(void*)0,&l_1553[0][3],&l_1553[0][0]},{&l_1553[0][3],(void*)0,&l_1553[0][0],&l_1553[0][3],&l_1553[0][3],&l_1553[0][3],&l_1553[0][3]},{&l_1553[0][3],&l_1553[0][3],(void*)0,&l_1553[0][3],&l_1553[0][3],&l_1553[0][4],&l_1553[0][4]},{&l_1553[0][2],&l_1553[0][3],&l_1553[0][3],(void*)0,&l_1553[0][0],&l_1553[0][3],&l_1553[0][3]},{&l_1553[0][3],(void*)0,(void*)0,&l_1553[0][3],&l_1553[0][3],&l_1553[0][6],(void*)0}},{{&l_1553[0][2],(void*)0,&l_1553[0][3],&l_1553[0][0],(void*)0,&l_1553[0][3],&l_1553[0][0]},{&l_1553[0][3],&l_1553[0][3],&l_1553[0][0],(void*)0,&l_1553[0][3],&l_1553[0][3],&l_1553[0][2]},{&l_1553[0][3],&l_1553[0][0],&l_1553[0][3],&l_1553[0][3],(void*)0,&l_1553[0][3],&l_1553[0][3]},{&l_1553[0][3],&l_1553[0][3],&l_1553[0][4],&l_1553[0][6],&l_1553[0][5],(void*)0,&l_1553[0][3]},{&l_1553[0][6],&l_1553[0][3],&l_1553[0][1],(void*)0,&l_1553[0][3],&l_1553[0][1],&l_1553[0][3]},{&l_1553[0][1],&l_1553[0][0],&l_1553[0][3],&l_1553[0][3],&l_1553[0][5],&l_1553[0][4],&l_1553[0][1]},{&l_1553[0][3],&l_1553[0][3],&l_1553[0][2],&l_1553[0][3],(void*)0,&l_1553[0][0],&l_1553[0][3]}},{{&l_1553[0][6],&l_1553[0][4],(void*)0,&l_1553[0][3],&l_1553[0][3],(void*)0,&l_1553[0][3]},{&l_1553[0][3],&l_1553[0][3],&l_1553[0][3],&l_1553[0][3],&l_1553[0][3],&l_1553[0][3],&l_1553[0][1]},{&l_1553[0][3],(void*)0,&l_1553[0][3],&l_1553[0][6],&l_1553[0][3],&l_1553[0][3],&l_1553[0][3]},{&l_1553[0][3],&l_1553[0][3],&l_1553[0][0],&l_1553[0][3],&l_1553[0][3],(void*)0,&l_1553[0][3]},{&l_1553[0][3],(void*)0,&l_1553[0][3],&l_1553[0][4],&l_1553[0][3],&l_1553[0][6],&l_1553[0][3]},{&l_1553[0][3],&l_1553[0][3],&l_1553[0][0],&l_1553[0][3],&l_1553[0][3],(void*)0,&l_1553[0][0]},{&l_1553[0][0],&l_1553[0][4],&l_1553[0][3],&l_1553[0][3],&l_1553[0][1],&l_1553[0][1],&l_1553[0][3]}}};
    int i, j, k;
    (****g_154) = (p_24 & ((l_1551 , l_1552[2][3][4]) == (g_1555 = &g_841)));
    return (***g_654);
}



static union U1  func_26(uint32_t  p_27, const int8_t * const  p_28, union U1  p_29, const int8_t * p_30, int32_t  p_31)
{ 
    struct S0 *l_435[4] = {&g_436,&g_436,&g_436,&g_436};
    int32_t l_1431[6][7] = {{0x23CA5608L,0L,0L,0x23CA5608L,0x10CE570AL,0x23CA5608L,0L},{0x319537CBL,0x319537CBL,0L,0x1DF16CB3L,0L,0x319537CBL,0x319537CBL},{0x319537CBL,0L,0x1DF16CB3L,0L,0x319537CBL,0x319537CBL,0L},{0x23CA5608L,0x10CE570AL,0x23CA5608L,0L,0L,0x23CA5608L,0x10CE570AL},{0L,0x10CE570AL,0x1DF16CB3L,0x1DF16CB3L,0x10CE570AL,0L,0x10CE570AL},{0x23CA5608L,0L,0L,0x23CA5608L,0x10CE570AL,0x23CA5608L,0L}};
    uint32_t *l_1440 = &g_1042;
    int32_t *** const *l_1447[7] = {&g_155,&g_155,&g_155,&g_155,&g_155,&g_155,&g_155};
    int32_t *** const **l_1446 = &l_1447[1];
    uint32_t * const **l_1549[4] = {&g_398,&g_398,&g_398,&g_398};
    union U1 l_1550 = {0};
    int i, j;
    for (p_31 = 12; (p_31 < 3); p_31--)
    { 
        int8_t * const l_51[7] = {&g_52,&g_52,&g_52,&g_52,&g_52,&g_52,&g_52};
        int32_t l_1069 = 1L;
        struct S0 *l_1422 = &g_116.f2;
        uint32_t *l_1441 = &g_68[1][0][2];
        int32_t *****l_1445 = (void*)0;
        int32_t l_1454 = 0x363730C3L;
        int32_t l_1455 = 8L;
        int32_t l_1458 = 1L;
        int32_t l_1460 = 0xED293FA1L;
        int32_t l_1463 = 9L;
        int32_t l_1467 = 0L;
        int32_t l_1469 = 0x041F33EFL;
        int32_t l_1477 = 0xBA7D2A0EL;
        int32_t l_1479 = 0xC13891B6L;
        int32_t l_1481 = (-1L);
        int32_t l_1482 = (-3L);
        int16_t l_1483 = 1L;
        int32_t l_1484 = 0x4776FE75L;
        int32_t l_1485[1];
        const int16_t *l_1502 = &g_396;
        const int16_t **l_1501[3][2][2] = {{{&l_1502,(void*)0},{&l_1502,(void*)0}},{{&l_1502,(void*)0},{&l_1502,(void*)0}},{{&l_1502,(void*)0},{&l_1502,(void*)0}}};
        const int16_t ***l_1500[6];
        int32_t l_1529[2];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1485[i] = 1L;
        for (i = 0; i < 6; i++)
            l_1500[i] = &l_1501[2][1][1];
        for (i = 0; i < 2; i++)
            l_1529[i] = 0x72154809L;
        for (p_27 = 27; (p_27 == 28); p_27 = safe_add_func_uint8_t_u_u(p_27, 2))
        { 
            struct S0 **l_1421[6][2][5];
            int32_t l_1452 = 0x4064CE7AL;
            int32_t l_1453 = 1L;
            int32_t l_1461 = 0L;
            int32_t l_1464 = 0xB847BCA5L;
            int32_t l_1470 = (-3L);
            int32_t l_1472 = 0x2E07DA22L;
            int32_t l_1473 = 8L;
            int8_t l_1474 = 8L;
            int32_t l_1475 = (-3L);
            int32_t l_1476 = (-9L);
            int32_t l_1478 = (-5L);
            int32_t l_1480[7][4][5] = {{{0L,0L,(-10L),0x6D95E4FCL,0x0F479782L},{0xCF2C5FE3L,0xC91FD65CL,0x144AF457L,0xF27EBEACL,0x0F479782L},{(-4L),0xB1C17B83L,0xB1C17B83L,(-4L),(-1L)},{0L,(-4L),0xDD5F82E6L,0x0F479782L,0xC91FD65CL}},{{0L,0xBF39F2F2L,(-1L),0x144AF457L,0L},{(-4L),0xF27EBEACL,0xCF2C5FE3L,0x0F479782L,0xB1C17B83L},{0x7E96543CL,0xAE205C5DL,(-8L),0xB1C17B83L,0xAE205C5DL},{0L,0x85EE6E17L,0x3B6DA95FL,0x3F366111L,0x557AE7B1L}},{{0x85EE6E17L,1L,0x3B6DA95FL,0x144AF457L,0x3B6DA95FL},{0x557AE7B1L,0x557AE7B1L,(-8L),0xF27EBEACL,0L},{0x2F88E7FCL,0L,(-10L),0L,0xF27EBEACL},{0xF27EBEACL,0L,0L,0x144AF457L,0x61455269L}},{{(-1L),0L,0L,0xAE205C5DL,1L},{1L,0x557AE7B1L,0x8C7B0BADL,1L,0xF27EBEACL},{0xCF2C5FE3L,1L,0x2F88E7FCL,1L,4L},{0xCF2C5FE3L,0x85EE6E17L,0x450216EAL,0x85EE6E17L,0xCF2C5FE3L}},{{1L,0xAE205C5DL,(-10L),0x61455269L,0x557AE7B1L},{(-1L),0x3F366111L,1L,0xB1C17B83L,0x3F366111L},{0xF27EBEACL,0x85EE6E17L,0x7E96543CL,0xAE205C5DL,0x557AE7B1L},{0x2F88E7FCL,0xB1C17B83L,0x3B6DA95FL,0xDD5F82E6L,0xCF2C5FE3L}},{{0x557AE7B1L,0x8C7B0BADL,1L,0xF27EBEACL,4L},{0x85EE6E17L,0L,0L,0xF27EBEACL,0xF27EBEACL},{0L,(-7L),0L,0xDD5F82E6L,1L},{(-1L),4L,0x2F88E7FCL,0xAE205C5DL,0x61455269L}},{{0xB1C17B83L,0x557AE7B1L,0x6D95E4FCL,0xB1C17B83L,0xF27EBEACL},{0x3B6DA95FL,0xB1C17B83L,0x2F88E7FCL,0x61455269L,0L},{0xCF2C5FE3L,0x2F88E7FCL,0L,0x85EE6E17L,0x3B6DA95FL},{0xB1C17B83L,0xAE205C5DL,0L,1L,0x557AE7B1L}}};
            int32_t l_1507 = 1L;
            uint32_t l_1508[5] = {0xAE422BD5L,0xAE422BD5L,0xAE422BD5L,0xAE422BD5L,0xAE422BD5L};
            uint16_t l_1541 = 1UL;
            uint8_t *l_1544 = (void*)0;
            uint8_t *l_1545 = &g_443;
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_1421[i][j][k] = &g_238;
                }
            }
        }
        for (g_99.f4 = 0; (g_99.f4 != 39); ++g_99.f4)
        { 
            uint32_t l_1548 = 0x329A9FC2L;
            l_1548 |= p_27;
        }
        if (p_31)
            break;
        (*l_1422) = (*g_238);
    }
    (**g_193) = (*g_157);
    l_1549[3] = &g_398;
    return l_1550;
}



static struct S0 * func_39(const int64_t  p_40)
{ 
    uint32_t l_1083 = 0x5EE272A4L;
    struct S0 *l_1111[5][3][2] = {{{&g_55,(void*)0},{&g_55,&g_55},{(void*)0,&g_55}},{{&g_55,(void*)0},{&g_55,&g_55},{(void*)0,&g_55}},{{&g_55,(void*)0},{&g_55,&g_55},{(void*)0,&g_55}},{{&g_55,(void*)0},{&g_55,&g_55},{(void*)0,&g_55}},{{&g_55,(void*)0},{&g_55,&g_55},{(void*)0,&g_55}}};
    int32_t *l_1132 = &g_143[0][0];
    const struct S0 *l_1172 = &g_1060;
    const struct S0 **l_1171 = &l_1172;
    int32_t l_1197 = (-1L);
    int32_t l_1201[3];
    uint16_t l_1228 = 4UL;
    int64_t **l_1303 = &g_1128;
    int32_t l_1383 = 0xDD7EB8C9L;
    int8_t * const ***l_1419[7] = {(void*)0,&g_1350,&g_1350,(void*)0,&g_1350,&g_1350,(void*)0};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1201[i] = 0L;
    for (g_436.f5 = 0; (g_436.f5 <= 0); g_436.f5 += 1)
    { 
        int8_t l_1082 = (-1L);
        struct S0 **l_1096 = (void*)0;
        int32_t l_1098 = 0x08633355L;
        struct S0 *l_1133 = &g_436;
        uint8_t *l_1134[7] = {&g_20[5],&g_20[5],&g_20[5],&g_20[5],&g_20[5],&g_20[5],&g_20[5]};
        const union U1 l_1165[7] = {{0},{0},{0},{0},{0},{0},{0}};
        int32_t l_1202 = (-1L);
        int32_t l_1206 = (-1L);
        int32_t l_1207 = 0xB8DFC032L;
        int32_t l_1209 = 1L;
        int32_t l_1211 = 0x061A8A77L;
        int32_t l_1212 = 0xDB21A887L;
        int32_t *l_1217 = &l_1197;
        uint32_t l_1259 = 0UL;
        uint8_t l_1274 = 0xBCL;
        uint64_t l_1298[4] = {1UL,1UL,1UL,1UL};
        int8_t * const **l_1352 = &g_1351;
        int i;
        for (g_99.f3 = 0; (g_99.f3 <= 0); g_99.f3 += 1)
        { 
            int16_t **l_1074 = &g_842;
            int32_t l_1087 = 0xF52CDC7CL;
            struct S0 **l_1092 = &g_238;
            uint32_t l_1104 = 1UL;
            int32_t l_1106 = 1L;
            uint64_t ***l_1124 = &g_464;
            uint64_t ****l_1123 = &l_1124;
            uint64_t *****l_1122 = &l_1123;
            int64_t *l_1126 = &g_142;
            int64_t * const *l_1125 = &l_1126;
            uint64_t l_1203 = 18446744073709551608UL;
            int32_t l_1208[6] = {(-2L),0xB466CE1BL,(-2L),(-2L),0xB466CE1BL,(-2L)};
            uint32_t l_1214 = 18446744073709551615UL;
            int i;
            for (g_965 = 0; (g_965 >= 0); g_965 -= 1)
            { 
                uint32_t **l_1071 = (void*)0;
                uint32_t *l_1073 = &g_1042;
                uint32_t ** const l_1072 = &l_1073;
                int32_t l_1080 = 5L;
                int32_t l_1081 = 0L;
                int64_t *l_1091 = &g_1060.f1;
                struct S0 ***l_1093 = (void*)0;
                struct S0 ***l_1094 = &g_237;
                struct S0 ***l_1095[5][2] = {{&l_1092,&g_237},{&g_237,&l_1092},{&g_237,&g_237},{&l_1092,&g_237},{&g_237,&l_1092}};
                int32_t *l_1099[6][2][3] = {{{&l_1087,&g_143[0][0],(void*)0},{&l_1081,&l_1081,&g_965}},{{&g_54,&l_1081,&g_54},{&l_1087,&g_965,&l_1081}},{{&g_143[0][0],&g_143[0][0],&g_54},{&g_965,&l_1087,&l_1081}},{{&l_1081,&g_54,&g_54},{&l_1087,&l_1087,&l_1081}},{{&g_54,&l_1081,&g_54},{&l_1087,&g_965,&l_1081}},{{&g_143[0][0],&g_143[0][0],&g_54},{&g_965,&l_1087,&l_1081}}};
                int i, j, k;
                for (g_436.f0 = 0; (g_436.f0 >= 0); g_436.f0 -= 1)
                { 
                    g_1070 = g_1070;
                }
                if ((l_1071 != l_1072))
                { 
                    int32_t *l_1075 = &g_143[0][1];
                    int32_t *l_1076 = &g_143[0][0];
                    int32_t *l_1077 = &g_54;
                    int32_t *l_1078 = &g_143[g_99.f3][(g_436.f5 + 1)];
                    int32_t *l_1079[2][4][4] = {{{(void*)0,(void*)0,&g_143[g_99.f3][(g_436.f5 + 1)],(void*)0},{(void*)0,&g_965,&g_143[g_99.f3][(g_436.f5 + 1)],&g_143[g_99.f3][(g_436.f5 + 1)]},{(void*)0,(void*)0,(void*)0,&g_143[g_99.f3][(g_436.f5 + 1)]},{&g_54,&g_965,&g_54,(void*)0}},{{&g_54,(void*)0,(void*)0,&g_54},{(void*)0,(void*)0,&g_143[g_99.f3][(g_436.f5 + 1)],(void*)0},{(void*)0,&g_965,&g_143[g_99.f3][(g_436.f5 + 1)],&g_143[g_99.f3][(g_436.f5 + 1)]},{(void*)0,(void*)0,(void*)0,&g_143[g_99.f3][(g_436.f5 + 1)]}}};
                    int i, j, k;
                    (*g_475) = l_1074;
                    ++l_1083;
                }
                else
                { 
                    int16_t ***l_1086 = &l_1074;
                    int32_t *l_1088 = (void*)0;
                    int32_t *l_1089 = (void*)0;
                    int32_t *l_1090 = &g_54;
                    int i, j;
                    l_1087 &= (1L < ((void*)0 == l_1086));
                    (*l_1090) = (1UL == 0x96L);
                    if (p_40)
                        continue;
                }
                l_1087 = (p_40 | (p_40 && ((l_1098 = (((((((*l_1091) = g_55.f0) | (((l_1096 = l_1092) != (void*)0) ^ (p_40 >= ((~g_99.f5) >= l_1087)))) , 4L) , g_108) ^ 5L) || p_40)) ^ p_40)));
                for (l_1087 = 0; (l_1087 >= 0); l_1087 -= 1)
                { 
                    uint8_t *l_1105[4] = {&g_20[2],&g_20[2],&g_20[2],&g_20[2]};
                    int32_t l_1109 = 0L;
                    int32_t l_1110[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1110[i] = 0xB3D7ACDAL;
                    l_1110[1] = ((safe_sub_func_uint64_t_u_u((p_40 | p_40), 0L)) & (safe_rshift_func_uint8_t_u_u((l_1106 = l_1104), (((safe_div_func_uint8_t_u_u((l_1109 = (l_1098 | (((void*)0 != (**g_154)) == (-6L)))), 1L)) , p_40) > p_40))));
                    if (l_1087)
                        continue;
                    return l_1111[4][2][1];
                }
            }
            for (g_1060.f2 = 0; (g_1060.f2 >= 0); g_1060.f2 -= 1)
            { 
                int64_t *l_1116 = &g_99.f1;
                int32_t l_1130 = 1L;
                int32_t l_1152 = 0L;
                uint64_t l_1168 = 0xD5CB1B172AD09CF8LL;
                struct S0 **l_1173 = &l_1111[4][2][1];
                struct S0 l_1174 = {1L,2L,0x88A00C0959D1340BLL,1UL,0xE819L,0xA923L};
                int32_t l_1210 = 0x8F7B0981L;
                int32_t l_1213[4] = {(-9L),(-9L),(-9L),(-9L)};
                int i;
                for (g_136 = 0; (g_136 <= 0); g_136 += 1)
                { 
                    int64_t *l_1115 = &g_1060.f1;
                    int64_t **l_1114 = &l_1115;
                    uint64_t ***l_1121 = &g_464;
                    uint64_t ****l_1120[7] = {&l_1121,&l_1121,&l_1121,&l_1121,&l_1121,&l_1121,&l_1121};
                    uint64_t *****l_1119 = &l_1120[4];
                    int64_t ***l_1129 = &g_1127[2][0];
                    int i, j;
                    (**g_192) = (void*)0;
                    (**g_192) = ((g_55.f0 |= (safe_add_func_uint16_t_u_u(((((((*l_1114) = g_465[g_99.f3][(g_436.f5 + 1)]) != l_1116) & ((safe_rshift_func_int8_t_s_u((((l_1119 == (l_1122 = &l_1120[1])) && (l_1125 == ((*l_1129) = g_1127[2][0]))) >= (((p_40 <= l_1130) || p_40) , l_1083)), 5)) , 5L)) ^ g_1013) ^ g_1131), p_40))) , l_1132);
                    return l_1133;
                }
                for (g_822 = 0; (g_822 <= 0); g_822 += 1)
                { 
                    int16_t *l_1139 = &g_324[3][2][0];
                    int16_t **l_1141 = &l_1139;
                    union U1 l_1144 = {0};
                    uint64_t *l_1151 = &g_108;
                    int i, j;
                    g_143[g_99.f3][(g_822 + 1)] &= (l_1134[6] != &g_822);
                    l_1152 |= ((g_143[g_99.f3][(g_99.f3 + 1)] & (((safe_mul_func_uint8_t_u_u(((((((p_40 , (safe_add_func_uint64_t_u_u(4UL, ((****l_1123) = (((*l_1074) = (*l_1074)) != ((*l_1141) = (g_1140 = l_1139))))))) < (safe_add_func_int32_t_s_s((l_1144 , (l_1087 &= (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((*l_1151) = p_40) & l_1098), p_40)), 0L)), 0)))), l_1130))) != p_40) , (void*)0) != (void*)0) , g_1060.f4), 255UL)) | l_1130) , 0xF271L)) > l_1082);
                    (*l_1132) = (safe_rshift_func_uint16_t_u_u((l_1144 , (safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(((l_1098 = (g_443--)) < 0x0DL), g_102)) < (l_1165[3] , ((*g_769) != ((*l_1074) != (void*)0)))) , g_589), 255UL)), 0xCEL)), g_143[g_99.f3][(g_822 + 1)]))), 11));
                }
                if ((safe_sub_func_int64_t_s_s(((*l_1116) |= p_40), (l_1168 , (((void*)0 == l_1092) , (((safe_add_func_int16_t_s_s((l_1098 = p_40), (l_1171 == l_1173))) ^ g_1013) >= (-10L)))))))
                { 
                    uint16_t l_1177 = 0x1E8DL;
                    int16_t ***l_1182 = &g_841;
                    int8_t *l_1183 = &g_52;
                    int i, j;
                    l_1174 = (*g_238);
                    g_143[g_436.f5][g_1060.f2] = (safe_rshift_func_int8_t_s_s(((((*l_1116) = (((void*)0 != &g_398) < l_1177)) | ((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((*l_1182) = &g_842) != (**g_474)), g_143[0][0])), (((((void*)0 != l_1183) != (-8L)) == 6L) < g_1184))) >= l_1177)) , (*g_769)), 0));
                }
                else
                { 
                    int32_t *l_1185 = &l_1130;
                    int32_t *l_1186 = &g_54;
                    int32_t l_1187 = 1L;
                    int32_t *l_1188 = &l_1106;
                    int32_t *l_1189 = (void*)0;
                    int32_t *l_1190 = &l_1106;
                    int32_t *l_1191 = &l_1106;
                    int32_t *l_1192 = (void*)0;
                    int32_t *l_1193 = &l_1098;
                    int32_t *l_1194 = &l_1187;
                    int32_t *l_1195 = &l_1152;
                    int32_t *l_1196 = &g_143[0][0];
                    int32_t *l_1198 = (void*)0;
                    int32_t *l_1199 = &g_143[0][0];
                    int32_t *l_1200[5][6] = {{&g_143[0][0],&l_1098,&g_143[0][0],&g_143[0][1],&g_143[0][1],&g_143[0][0]},{(void*)0,(void*)0,&g_143[0][1],&l_1130,&g_143[0][1],(void*)0},{&g_143[0][1],&l_1098,&l_1130,&l_1130,&l_1098,&g_143[0][1]},{(void*)0,&g_143[0][1],&l_1130,&g_143[0][1],(void*)0,(void*)0},{&g_143[0][0],&g_143[0][1],&g_143[0][1],&g_143[0][0],&l_1098,&g_143[0][0]}};
                    int i, j;
                    ++l_1203;
                    l_1106 ^= p_40;
                    l_1214++;
                }
                g_55 = l_1174;
            }
        }
        for (g_1060.f4 = 0; (g_1060.f4 <= 0); g_1060.f4 += 1)
        { 
            int i, j;
            (*l_1132) &= 0xDD47857CL;
            if (p_40)
                break;
            l_1217 = &l_1201[1];
            for (g_99.f0 = 0; (g_99.f0 >= 0); g_99.f0 -= 1)
            { 
                struct S0 *l_1218 = &g_55;
                return l_1218;
            }
        }
        for (l_1082 = 0; (l_1082 <= 0); l_1082 += 1)
        { 
            uint64_t *l_1227 = &g_108;
            uint64_t l_1260 = 0x02D8CC090CFC962ALL;
            int32_t l_1273[5][1] = {{9L},{0x6BE3A03AL},{9L},{0x6BE3A03AL},{9L}};
            int i, j;
            (*g_238) = (((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_143[l_1082][g_436.f5], p_40)), (safe_mul_func_uint8_t_u_u(((g_143[l_1082][g_436.f5] , (g_143[l_1082][g_436.f5] > ((-6L) && ((*l_1217) = (1L < ((*l_1227) &= (++(**g_464)))))))) || (l_1228 & 0xF24A323B1E3EDBFELL)), 0L)))) == g_436.f0) , (*l_1133));
            for (g_55.f2 = 0; (g_55.f2 >= 0); g_55.f2 -= 1)
            { 
                struct S0 *l_1250 = &g_116.f2;
                struct S0 *l_1251 = &g_55;
                uint64_t l_1258[2][7] = {{0UL,0UL,0xC1740A47D6BDE863LL,3UL,0x7131721DC1C6D399LL,3UL,0xC1740A47D6BDE863LL},{0UL,0UL,0xC1740A47D6BDE863LL,3UL,0x7131721DC1C6D399LL,3UL,0xC1740A47D6BDE863LL}};
                int i, j;
                for (g_55.f3 = 0; (g_55.f3 <= 2); g_55.f3 += 1)
                { 
                    uint16_t *l_1235 = (void*)0;
                    uint16_t *l_1236 = &g_99.f4;
                    struct S0 *l_1249[7][1][5] = {{{(void*)0,(void*)0,&g_1060,&g_1060,(void*)0}},{{&g_1060,(void*)0,(void*)0,&g_1060,(void*)0}},{{&g_1060,&g_1060,(void*)0,(void*)0,&g_1060}},{{(void*)0,(void*)0,(void*)0,&g_1060,&g_1060}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_1060}},{{&g_1060,&g_1060,&g_1060,&g_1060,&g_1060}},{{(void*)0,&g_1060,(void*)0,&g_1060,(void*)0}}};
                    int8_t l_1261 = (-1L);
                    int32_t l_1262[1][3];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1262[i][j] = 1L;
                    }
                    if ((*l_1217))
                        break;
                    if ((*l_1132))
                        continue;
                    l_1262[0][0] ^= (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((*l_1133) , ((((l_1261 |= ((safe_lshift_func_uint16_t_u_u(((*l_1236)--), (safe_mod_func_uint8_t_u_u((p_40 == ((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(((l_1250 = l_1249[0][0][1]) != (l_1111[4][1][0] = l_1251)), 0)), (((safe_div_func_int16_t_s_s((((~(((((p_40 , ((*g_1070) , (safe_rshift_func_uint8_t_u_s(g_1257, 6)))) < g_143[l_1082][g_436.f5]) ^ (*l_1132)) ^ l_1258[1][3]) >= 1L)) >= g_143[l_1082][g_436.f5]) == 0xFD98F81EL), 65535UL)) >= g_143[l_1082][g_436.f5]) | 0x6BF1L))) < l_1259), p_40)), (*l_1217))) || p_40)), p_40)))) == l_1260)) || g_143[l_1082][g_436.f5]) | p_40) && g_324[3][2][0])), p_40)) || (-4L)), 3));
                }
            }
            if (p_40)
                continue;
            for (g_1060.f5 = 0; (g_1060.f5 <= 2); g_1060.f5 += 1)
            { 
                struct S0 l_1263 = {0xD5BA0763L,0x7E8831886F0DBD25LL,0x9789505528AAA6FCLL,18446744073709551614UL,0xA851L,0UL};
                int32_t *l_1264 = &l_1197;
                int32_t *l_1265 = &g_965;
                int32_t *l_1266 = &l_1212;
                int32_t *l_1267 = &l_1209;
                int32_t *l_1268 = &g_143[l_1082][g_436.f5];
                int32_t *l_1269 = (void*)0;
                int32_t *l_1270 = &l_1098;
                int32_t *l_1271 = &l_1201[0];
                int32_t *l_1272[6][5] = {{(void*)0,(void*)0,&l_1211,&l_1206,&l_1202},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1206,&g_143[0][0],&g_143[0][0],&l_1206},{(void*)0,(void*)0,&g_143[0][0],&l_1211,&l_1211},{(void*)0,(void*)0,(void*)0,&g_143[0][0],&l_1211},{&l_1206,(void*)0,&l_1211,(void*)0,&l_1206}};
                int i, j;
                (*g_238) = l_1263;
                ++l_1274;
            }
        }
        for (g_875 = 0; (g_875 <= 0); g_875 += 1)
        { 
            int64_t l_1277 = 6L;
            struct S0 *l_1279 = (void*)0;
            int32_t l_1286 = 0x4F9E0E51L;
            int32_t l_1287 = 0x17E2852CL;
            int32_t l_1288 = 0x56E42AFCL;
            uint16_t l_1299 = 0x88FFL;
            const int32_t l_1307 = 1L;
            uint64_t ** const * const l_1355 = &g_464;
            struct S0 l_1359[2] = {{0L,-1L,0x92FF6EDDD6825784LL,0x81ADC13BL,6UL,9UL},{0L,-1L,0x92FF6EDDD6825784LL,0x81ADC13BL,6UL,9UL}};
            int i;
            for (g_55.f3 = 0; (g_55.f3 <= 0); g_55.f3 += 1)
            { 
                uint16_t l_1278 = 0UL;
                (**g_192) = &l_1197;
                l_1278 = ((1UL & p_40) | ((*l_1217) == l_1277));
                return l_1279;
            }
            for (g_1060.f2 = 0; (g_1060.f2 >= 0); g_1060.f2 -= 1)
            { 
                int32_t *l_1280 = &l_1212;
                int32_t *l_1281 = (void*)0;
                int32_t *l_1282 = &l_1206;
                int32_t *l_1283 = &l_1098;
                int32_t *l_1284 = (void*)0;
                int32_t *l_1285[5][3] = {{&l_1212,&l_1202,&g_143[0][0]},{&g_965,&g_965,&g_143[0][0]},{&l_1202,&l_1212,&l_1197},{&l_1212,&g_965,&l_1212},{&l_1212,&l_1202,&g_965}};
                uint16_t *l_1339 = &g_55.f4;
                int8_t ***l_1354 = &g_768;
                int8_t ****l_1353 = &l_1354;
                int64_t *l_1356 = &g_55.f1;
                struct S0 *l_1357 = &g_436;
                struct S0 l_1358 = {0xE9055B43L,1L,0x2B2B5F1B2FB3AD7ELL,7UL,0x36B0L,0x0A0CL};
                int i, j;
                --g_1289;
                if ((safe_mod_func_uint64_t_u_u((l_1286 < (safe_rshift_func_int8_t_s_u((**g_768), 4))), (safe_sub_func_int32_t_s_s((-3L), l_1298[2])))))
                { 
                    int32_t l_1300 = (-10L);
                    l_1300 |= l_1299;
                }
                else
                { 
                    int64_t ***l_1304 = &g_1127[1][0];
                    int32_t l_1308 = (-2L);
                    int8_t *l_1317[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    uint16_t *l_1334 = &g_99.f4;
                    int i, j;
                    (*l_1132) &= (((safe_sub_func_uint16_t_u_u(((*g_768) != (((((*l_1217) = (((*l_1304) = l_1303) != (void*)0)) > ((safe_mul_func_int16_t_s_s(l_1288, (l_1307 < ((-1L) && ((((*l_1283) , g_136) <= l_1287) >= 0x6DB9L))))) | p_40)) ^ l_1308) , &l_1082)), 0xD67CL)) == p_40) & p_40);
                    (*g_193) = ((((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(((*l_1132) ^= (*g_769)), 4)), 5)) == (p_40 <= ((*g_1140) = l_1286))) && (safe_rshift_func_uint8_t_u_s((((safe_mul_func_int8_t_s_s(0x9BL, ((*g_1070) , ((*g_769) = (safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(((((*l_1334) = (safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint8_t_u_u(p_40, l_1287)) == g_142) , g_436.f2), 7))) == p_40) == (*l_1217)), p_40)) ^ l_1308), 1)), l_1307)), p_40)))))) != p_40) & 0x44A5CC47L), p_40))), (*l_1217))), (*l_1217))) , (*l_1133)) , l_1286) , l_1285[1][0]);
                }
                if (((p_40 == (safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s((((*l_1339)++) == ((((*l_1356) ^= ((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(((*l_1132) || (safe_sub_func_uint8_t_u_u((((*l_1133) , (((l_1352 = g_1350) != ((*l_1353) = &g_768)) == ((p_40 , l_1355) == (void*)0))) < 0x39B67EC9L), 0xCCL))), g_436.f4)), (*l_1132))), 5)) , (*l_1282))) | (**g_464)) | p_40)), l_1277)), (*l_1217)))) == p_40))
                { 
                    return l_1357;
                }
                else
                { 
                    (*g_238) = (*g_238);
                    l_1359[0] = l_1358;
                }
                if (p_40)
                { 
                    uint16_t l_1360 = 0x29BFL;
                    struct S0 l_1361[4] = {{0xA3D8C521L,0L,0xD32C613C5FDF23B0LL,0x5BB702BAL,0xC061L,65535UL},{0xA3D8C521L,0L,0xD32C613C5FDF23B0LL,0x5BB702BAL,0xC061L,65535UL},{0xA3D8C521L,0L,0xD32C613C5FDF23B0LL,0x5BB702BAL,0xC061L,65535UL},{0xA3D8C521L,0L,0xD32C613C5FDF23B0LL,0x5BB702BAL,0xC061L,65535UL}};
                    int i;
                    (*l_1282) = l_1360;
                    l_1361[0] = l_1361[3];
                    (*l_1282) = (safe_div_func_int32_t_s_s(((g_822 &= ((p_40 && (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((&p_40 != &p_40), p_40)), p_40))) == (safe_mul_func_uint16_t_u_u(g_55.f4, ((safe_sub_func_int64_t_s_s((*l_1132), (**g_464))) , g_20[2]))))) > (*l_1132)), 4294967295UL));
                }
                else
                { 
                    (*l_1280) |= 0x115A0E84L;
                    (*l_1280) = (safe_rshift_func_int16_t_s_s(((*g_1140) = l_1288), 3));
                    (***g_154) = l_1282;
                    return l_1133;
                }
                for (l_1358.f2 = 0; (l_1358.f2 <= 0); l_1358.f2 += 1)
                { 
                    struct S0 *l_1374 = &g_1060;
                    return l_1374;
                }
            }
        }
    }
    if ((&l_1132 != &l_1132))
    { 
        struct S0 *l_1375 = &g_99;
        return l_1375;
    }
    else
    { 
        uint32_t l_1382 = 7UL;
        struct S0 *****l_1398[4] = {&g_570,&g_570,&g_570,&g_570};
        uint8_t l_1399 = 255UL;
        int8_t l_1400[7] = {0xD0L,0xD0L,0xD0L,0xD0L,0xD0L,0xD0L,0xD0L};
        uint32_t *l_1401 = (void*)0;
        uint32_t *l_1402 = &g_68[1][0][0];
        int32_t l_1418 = 1L;
        int i;
        if ((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((l_1382 |= (*l_1132)), l_1383)), (safe_mul_func_uint16_t_u_u((((((*l_1402) = ((safe_lshift_func_int16_t_s_u(((*g_842) ^= ((65526UL != ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((*l_1172) , (safe_rshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s((((((*l_1132) > (safe_lshift_func_uint16_t_u_s(p_40, 0))) < (l_1398[2] == (void*)0)) || 4UL) != (-1L)), l_1399)) && (-1L)), (**g_1351)))) & 0xFFL), l_1400[5])), p_40)) , 0x462CL)) ^ 0x9971DFA7L)), (*l_1132))) , (*l_1132))) | p_40) > (***g_1350)) & 0x7B9657B3L), p_40)))), 0x7C78L)))
        { 
            uint32_t l_1409 = 1UL;
            int32_t *l_1410 = (void*)0;
            int32_t *l_1411 = &l_1201[0];
            (*l_1411) |= ((((safe_mul_func_int16_t_s_s((0xE3CF0DE7L ^ ((p_40 , (p_40 | 0x33E3BF6E72668D79LL)) == (((safe_rshift_func_int8_t_s_s(0xA7L, (3UL == (((safe_mul_func_uint8_t_u_u((((*l_1132) = l_1409) < l_1400[6]), g_965)) & p_40) , p_40)))) == p_40) >= 0xB92CL))), p_40)) , l_1382) > p_40) >= 0xCDD5L);
        }
        else
        { 
            int32_t l_1415 = 0x1F12C31EL;
            for (g_99.f4 = 0; (g_99.f4 < 38); g_99.f4++)
            { 
                uint32_t l_1414[4][2] = {{0UL,0xE7125896L},{0xE7125896L,0UL},{0xE7125896L,0xE7125896L},{0UL,0xE7125896L}};
                int i, j;
                l_1415 = l_1414[2][1];
                for (g_396 = (-25); (g_396 < 20); g_396++)
                { 
                    return l_1111[4][2][1];
                }
                l_1418 ^= p_40;
            }
            return l_1111[1][0][1];
        }
    }
    l_1132 = ((***g_154) = &l_1201[0]);
    (***g_154) = &l_1201[0];
    g_1420 = (g_1350 = &g_1351);
    return l_1111[4][2][1];
}



static int16_t  func_43(union U1  p_44, struct S0 * p_45, uint8_t  p_46, int32_t  p_47, uint32_t  p_48)
{ 
    uint16_t l_448[5];
    int32_t l_450 = (-1L);
    int32_t l_456 = (-7L);
    int32_t l_459[6] = {3L,0x1AD0E68FL,0x1AD0E68FL,3L,0x1AD0E68FL,0x1AD0E68FL};
    int16_t *l_469 = &g_324[6][5][2];
    int16_t **l_468 = &l_469;
    int32_t l_493 = 0xB53FDD81L;
    int16_t l_565 = 0L;
    uint16_t l_576 = 0x8BE1L;
    const uint32_t **l_583 = (void*)0;
    const uint32_t ***l_582 = &l_583;
    int8_t *l_585 = &g_102;
    int8_t **l_584[2][7][2] = {{{&l_585,&l_585},{&l_585,&l_585},{&l_585,&l_585},{&l_585,&l_585},{&l_585,&l_585},{&l_585,&l_585},{&l_585,&l_585}},{{&l_585,&l_585},{&l_585,&l_585},{&l_585,&l_585},{&l_585,&l_585},{&l_585,&l_585},{&l_585,&l_585},{&l_585,&l_585}}};
    int16_t l_604 = 0x3A8BL;
    int16_t l_615 = 0L;
    struct S0 ***l_652 = &g_237;
    uint64_t **l_656 = &g_465[0][1];
    uint32_t l_689 = 18446744073709551607UL;
    struct S0 l_710[1][5][1] = {{{{6L,1L,0xA83995DFDD0A22F6LL,0xCA3C2CDCL,0x49A2L,1UL}},{{6L,1L,0xA83995DFDD0A22F6LL,0xCA3C2CDCL,0x49A2L,1UL}},{{6L,1L,0xA83995DFDD0A22F6LL,0xCA3C2CDCL,0x49A2L,1UL}},{{6L,1L,0xA83995DFDD0A22F6LL,0xCA3C2CDCL,0x49A2L,1UL}},{{6L,1L,0xA83995DFDD0A22F6LL,0xCA3C2CDCL,0x49A2L,1UL}}}};
    int32_t **l_716 = (void*)0;
    const int64_t l_725 = 0L;
    struct S0 **l_726 = &g_238;
    uint32_t *l_727 = &g_68[1][0][5];
    int16_t ****l_730 = (void*)0;
    int16_t *****l_729 = &l_730;
    int16_t *****l_731 = &l_730;
    uint8_t l_753 = 0xA0L;
    uint32_t l_755 = 0x09C45748L;
    uint32_t **l_904 = (void*)0;
    uint32_t ***l_903 = &l_904;
    uint32_t ****l_902[7][2][4] = {{{(void*)0,(void*)0,&l_903,&l_903},{&l_903,&l_903,&l_903,&l_903}},{{&l_903,&l_903,&l_903,&l_903},{&l_903,&l_903,&l_903,&l_903}},{{&l_903,&l_903,&l_903,&l_903},{&l_903,(void*)0,(void*)0,&l_903}},{{&l_903,&l_903,&l_903,&l_903},{&l_903,&l_903,&l_903,(void*)0}},{{&l_903,&l_903,&l_903,(void*)0},{&l_903,&l_903,&l_903,&l_903}},{{&l_903,&l_903,&l_903,&l_903},{(void*)0,(void*)0,&l_903,&l_903}},{{&l_903,&l_903,&l_903,&l_903},{&l_903,&l_903,&l_903,&l_903}}};
    uint32_t *****l_901 = &l_902[5][0][2];
    int64_t l_966 = 0xE3B8B6C0BA31CAF5LL;
    int32_t *l_1063 = &g_143[0][0];
    int32_t *l_1064 = &g_54;
    int32_t *l_1065[1][2][1];
    uint64_t l_1066 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_448[i] = 0xC76FL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_1065[i][j][k] = &g_143[0][0];
        }
    }
lbl_467:
    (*g_238) = (*g_238);
    for (g_102 = 0; (g_102 <= 2); g_102 += 1)
    { 
        int64_t l_440 = 0xE1C04C94C7BD5742LL;
        int32_t l_449 = 7L;
        int32_t l_457 = 0x498EC842L;
        int32_t l_460 = (-7L);
        int16_t **l_531 = &l_469;
        int16_t l_537 = (-10L);
        uint8_t l_562 = 0x7DL;
        const uint32_t * const l_606 = &g_68[1][0][4];
        const uint32_t * const *l_605 = &l_606;
        uint64_t **l_655 = &g_465[0][0];
        int32_t *****l_658 = (void*)0;
        int8_t l_673 = 1L;
        int64_t l_709 = 0x31BED9AFA0C10C4DLL;
        for (g_54 = 0; (g_54 <= 2); g_54 += 1)
        { 
            int16_t *l_439 = &g_324[6][3][1];
            uint8_t *l_441 = (void*)0;
            uint8_t *l_442 = &g_443;
            int32_t l_444 = (-10L);
            int8_t *l_445 = &g_52;
            int32_t *l_451 = &g_143[0][0];
            int32_t *l_452 = (void*)0;
            int32_t *l_453 = &g_143[0][0];
            int32_t *l_454 = (void*)0;
            int32_t *l_455[2];
            int32_t l_458[4][2];
            uint16_t l_461 = 3UL;
            const int32_t *l_506[2];
            int8_t l_509 = 0L;
            int32_t ** const **l_530 = &g_192;
            struct S0 **l_586 = &g_238;
            int i, j;
            for (i = 0; i < 2; i++)
                l_455[i] = &l_449;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                    l_458[i][j] = 0x213B34C5L;
            }
            for (i = 0; i < 2; i++)
                l_506[i] = &l_460;
            l_444 = (safe_mul_func_int16_t_s_s((l_440 |= ((*l_439) = p_48)), (((*g_238) , (((*l_442) = 0xE7L) ^ ((*l_445) = l_444))) , (0x606AL || (((safe_rshift_func_uint8_t_u_u((p_48 <= l_448[4]), 0)) , 0x79381112L) <= (**g_193))))));
            ++l_461;
            if (p_47)
            { 
                uint64_t ***l_466[1][4][6] = {{{&g_464,&g_464,(void*)0,&g_464,&g_464,(void*)0},{&g_464,&g_464,(void*)0,&g_464,&g_464,(void*)0},{&g_464,&g_464,(void*)0,&g_464,&g_464,(void*)0},{&g_464,&g_464,(void*)0,&g_464,&g_464,(void*)0}}};
                int32_t l_490 = 0x5673DF16L;
                int i, j, k;
                g_464 = g_464;
                for (p_48 = 0; (p_48 <= 0); p_48 += 1)
                { 
                    int i, j, k;
                    if (g_102)
                        goto lbl_467;
                    g_143[p_48][(p_48 + 1)] |= (l_468 != (void*)0);
                    p_47 ^= ((safe_div_func_int8_t_s_s((0xDE936A15BBF1EC94LL & ((safe_add_func_int16_t_s_s(g_324[(g_102 + 2)][g_102][p_48], ((1UL || (-1L)) > ((void*)0 == g_474)))) && ((g_143[p_48][(p_48 + 1)] != 0x8AL) , p_46))), g_143[p_48][(p_48 + 1)])) <= 0xF40B33EBCA1237E2LL);
                }
                if (p_48)
                { 
                    int32_t l_479 = 0L;
                    int64_t *l_491 = &g_116.f2.f1;
                    int64_t *l_492 = &g_436.f2;
                    (*l_453) = ((void*)0 != (*g_475));
                    (*l_451) &= ((safe_sub_func_int32_t_s_s(((l_459[1] , ((l_479 , (safe_sub_func_int64_t_s_s((((**g_464)--) < (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(g_55.f1, l_490)) & (**g_193)), 12)), l_490))), ((*l_492) ^= (1UL & p_48))))) == l_493)) && g_102), 0x5DA81358L)) >= l_479);
                }
                else
                { 
                    return p_47;
                }
                (*l_453) |= p_46;
                return (*l_451);
            }
            else
            { 
                const int32_t *l_504[6][1][6] = {{{&l_460,&l_460,&l_460,&l_460,&l_460,&l_460}},{{&l_460,&l_460,&l_460,&l_460,&l_460,&l_460}},{{&l_460,&l_460,&l_460,&l_460,&l_460,&l_460}},{{&l_460,&l_460,&l_460,&l_460,&l_460,&l_460}},{{&l_460,&l_460,&l_460,&l_460,&l_460,&l_460}},{{&l_460,&l_460,&l_460,&l_460,&l_460,&l_460}}};
                int32_t l_507 = 0x2B9F3CAFL;
                int32_t l_508 = (-8L);
                int32_t l_511 = 0xC8BAD9DDL;
                int32_t l_513 = (-8L);
                int32_t l_516 = 0xFEC4F5BBL;
                struct S0 l_532 = {0xD24A3C5CL,0xE9D30DACD3C7C2A8LL,0xDC2EEA0DF2E85950LL,0UL,65535UL,0xA89BL};
                int16_t l_561[1][4] = {{0x7777L,0x7777L,0x7777L,0x7777L}};
                int64_t *l_563 = (void*)0;
                int64_t *l_564 = &g_142;
                int32_t l_568 = 1L;
                int32_t l_588 = (-1L);
                int i, j, k;
                for (l_461 = 0; (l_461 <= 0); l_461 += 1)
                { 
                    int32_t l_503 = 1L;
                    const int32_t **l_505[3][5] = {{&l_504[5][0][3],&l_504[5][0][4],&l_504[5][0][3],(void*)0,&l_504[5][0][3]},{&l_504[5][0][3],&l_504[5][0][3],&l_504[5][0][3],(void*)0,&l_504[2][0][2]},{&l_504[5][0][4],&l_504[5][0][3],&l_504[5][0][3],&l_504[5][0][4],&l_504[5][0][3]}};
                    int32_t l_510 = 0x1A9525CBL;
                    int32_t l_512 = 1L;
                    int32_t l_514 = 0x3E51C5A2L;
                    int32_t l_515 = 0x2B9B9DC7L;
                    int32_t l_517 = 0xD49E1084L;
                    int32_t l_518[1][7] = {{0xC1EDEB80L,0xC1EDEB80L,0xC1EDEB80L,0xC1EDEB80L,0xC1EDEB80L,0xC1EDEB80L,0xC1EDEB80L}};
                    uint32_t l_519 = 1UL;
                    int i, j;
                    (*l_453) = (safe_add_func_uint64_t_u_u(18446744073709551613UL, l_460));
                    l_503 |= ((p_46 > (((((safe_mod_func_int64_t_s_s((+((*g_238) , (p_46 < (-1L)))), g_55.f5)) >= l_459[5]) < (safe_rshift_func_uint8_t_u_u((l_448[3] > p_48), l_457))) , 1L) && 0UL)) && 0UL);
                    l_506[1] = l_504[5][0][3];
                    l_519--;
                    l_532 = ((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0x46D28C9CL, p_46)), (safe_lshift_func_int8_t_s_s(((0x99L == (safe_add_func_uint32_t_u_u((l_530 == &g_192), (l_531 != (void*)0)))) & 0x6D4E48C2L), 3)))) , (*g_238));
                }
                if ((safe_div_func_int64_t_s_s((((*l_453) = ((safe_add_func_int64_t_s_s(g_54, l_537)) >= (safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((((safe_mod_func_int64_t_s_s((&g_20[3] == ((((safe_lshift_func_int8_t_s_s((((((*l_564) |= (+(safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(p_46, 3)), (g_55.f3 , 4294967292UL))), (((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(p_48, p_46)), l_459[0])), l_561[0][1])) >= l_562) >= g_55.f2))), 0)))) || p_46) >= 0x88L) == 18446744073709551615UL), 6)) , 0x07L) , l_565) , &g_20[2])), p_46)) | g_54) , g_55.f0) , l_450), 8)) >= p_47), l_493)))) || l_459[3]), 9UL)))
                { 
                    const int8_t **l_567 = &g_34;
                    const int8_t ***l_566 = &l_567;
                    (*l_566) = &g_34;
                    if (p_47)
                        continue;
                    if (p_48)
                        break;
                }
                else
                { 
                    l_568 = 1L;
                    if (l_440)
                        continue;
                }
                if (((*l_453) ^= (**g_193)))
                { 
                    uint32_t * const ***l_569 = &g_397;
                    struct S0 *****l_571 = &g_570;
                    (*l_569) = &g_398;
                    (*l_571) = g_570;
                    l_456 |= ((((*l_442) = g_55.f5) > (p_46 = 0xD1L)) != ((p_47 && l_449) | ((l_460 >= (((safe_mul_func_uint8_t_u_u(8UL, (safe_add_func_uint16_t_u_u((246UL & p_47), g_183)))) == 0x0868C618336A1777LL) , (-2L))) > l_576)));
                    if (l_565)
                        continue;
                }
                else
                { 
                    uint16_t *l_581 = &l_576;
                    struct S0 ***l_587 = &l_586;
                    l_456 ^= (safe_sub_func_int16_t_s_s(((4294967295UL ^ (((0x8FL <= ((((((0x053CL ^ ((*l_581) &= ((p_46 > (p_47 < ((l_508 = l_448[4]) < p_47))) >= p_47))) , p_48) , l_582) != (void*)0) , &g_34) != l_584[1][1][0])) , g_324[6][5][2]) || 4294967294UL)) ^ 18446744073709551611UL), l_459[0]));
                    if (l_460)
                        break;
                    (*l_587) = l_586;
                }
                g_589--;
            }
            l_457 &= (g_143[0][1] ^ (safe_div_func_int64_t_s_s(p_46, (((safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(l_460, (safe_sub_func_uint64_t_u_u(l_440, ((((((l_450 = ((safe_add_func_int16_t_s_s(l_448[4], (p_48 == p_47))) >= l_604)) <= l_449) == p_47) , l_448[2]) >= g_183) != p_46))))), 5L)), 0x8B12L)) || 1UL) || 0UL))));
            (*l_451) = ((void*)0 != l_605);
            if (l_460)
                goto lbl_728;
            for (l_509 = 2; (l_509 >= 0); l_509 -= 1)
            { 
                uint16_t *l_616 = &g_116.f2.f5;
                uint32_t *l_618 = &g_68[1][0][2];
                int32_t l_619[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_619[i] = 0x9E9588EBL;
                (*l_453) |= (l_619[0] = (((safe_rshift_func_int8_t_s_u(((p_46 == ((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_47, 8)), 5)) || 1UL)) >= (p_47 & p_47)), 0)) | 0x1EB5954A859F6282LL) && (((((*l_618) = (((*l_616) = (((*l_445) &= (safe_div_func_int64_t_s_s(l_615, p_47))) , p_48)) | g_617)) == l_457) > 65526UL) ^ p_47)));
            }
        }
        for (l_604 = 2; (l_604 >= 0); l_604 -= 1)
        { 
            int64_t l_620 = (-1L);
            int32_t *****l_657 = &g_154;
            int32_t l_691 = 0xB761592DL;
            int16_t ** const *l_698 = &l_531;
            int16_t ** const **l_697 = &l_698;
            if (l_620)
                break;
            for (l_620 = 0; (l_620 <= 2); l_620 += 1)
            { 
                uint16_t *l_629 = &g_589;
                uint16_t *l_632[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_650 = 0xEA1433D6L;
                struct S0 ****l_653 = &l_652;
                int16_t l_707[4][7] = {{0L,9L,0x2CDFL,9L,0L,0L,9L},{0x815AL,1L,0x815AL,0x87B0L,0x87B0L,0x815AL,1L},{9L,0x695AL,0x2CDFL,0x2CDFL,0x695AL,9L,0x695AL},{0x815AL,0x87B0L,0x87B0L,0x815AL,1L,0x815AL,0x87B0L}};
                int i, j, k;
            }
        }
    }
    if ((((**g_464) & ((**g_464) , (((void*)0 == l_716) ^ p_48))) > ((safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(((*l_727) ^= ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(l_725, (l_726 != (void*)0))), g_183)) && p_46)), p_47)) , g_324[6][5][2]), p_48)) , 18446744073709551614UL)))
    { 
        p_45 = (*l_726);
lbl_728:
        (*g_193) = &p_47;
        l_731 = l_729;
    }
    else
    { 
        uint8_t l_734 = 255UL;
        int32_t l_750 = 0x5CA4E80DL;
        uint16_t *l_751[1][2];
        int32_t l_752 = 0xA7368E9EL;
        int32_t *l_754[2][1];
        struct S0 l_773 = {-5L,0xB9992A17F7195A9ELL,-8L,1UL,0xB2CEL,1UL};
        int16_t l_774 = 0x795DL;
        uint16_t l_782 = 3UL;
        uint32_t **l_915 = &l_727;
        int16_t l_916[5];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_751[i][j] = &l_710[0][3][0].f5;
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_754[i][j] = (void*)0;
        }
        for (i = 0; i < 5; i++)
            l_916[i] = 0x3F45L;
lbl_803:
        (**g_193) ^= (((safe_lshift_func_uint8_t_u_s(((l_734 > ((safe_rshift_func_int8_t_s_u(0xD8L, 4)) >= ((*l_727) |= (~(((p_46 ^ (l_752 ^= (safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((l_750 |= (p_44.f1 = ((**l_468) = ((((safe_mul_func_uint16_t_u_u((((((safe_lshift_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u(((safe_div_func_uint32_t_u_u(0xDE26867DL, ((((*l_582) != (*g_397)) , 0xD8BFB001L) & l_734))) , 1UL), p_47)) == p_47), p_46)) < 0xEDBDA5EBL) | 4L) > 2L) >= g_52), l_734)) , l_734) == 5UL) <= l_734)))), l_734)), 6)))) || 0x22DF0181L) ^ 0x51ABL))))) & p_47), 0)) > l_753) & 0x572BB09CA2F3DA50LL);
        l_755++;
        for (g_55.f0 = (-8); (g_55.f0 > 21); ++g_55.f0)
        { 
            uint64_t *l_762 = &g_108;
            int32_t l_780 = 0x1E2CD9A4L;
            int32_t l_781 = 0L;
            int32_t l_810 = 0x64BC4031L;
            int32_t l_812 = 0xDA8A0AA2L;
            int32_t l_815 = 0xA68B7558L;
            uint8_t *l_856 = (void*)0;
            uint8_t *l_857 = (void*)0;
            uint8_t *l_858[2];
            int64_t l_877 = 1L;
            int8_t l_878 = 0L;
            int32_t l_887 = 0x5EE9930AL;
            uint64_t l_888 = 0x52674D8ABE151822LL;
            uint64_t l_907 = 0x7F58735BB9BE4786LL;
            struct S0 l_912 = {-10L,0L,1L,1UL,0xA00FL,0xA019L};
            int i;
            for (i = 0; i < 2; i++)
                l_858[i] = &l_753;
            if ((p_46 ^ ((*l_762) &= ((**g_464)--))))
            { 
                uint16_t l_770 = 0xD9F2L;
                int32_t l_775 = (-6L);
                int32_t l_778 = 1L;
                int32_t l_779 = 0x879625E4L;
                for (g_55.f4 = 29; (g_55.f4 == 16); g_55.f4 = safe_sub_func_int16_t_s_s(g_55.f4, 1))
                { 
                    int8_t **l_767 = &l_585;
                    uint8_t *l_771[1][1][1];
                    struct S0 l_772 = {-1L,-4L,-7L,0xCA2ABDADL,65533UL,0xFFAFL};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_771[i][j][k] = &g_443;
                        }
                    }
                    (*g_194) |= (((safe_mod_func_uint16_t_u_u((((p_47 , l_767) == g_768) >= p_46), (p_46 | l_770))) < ((((((g_443 ^= 0x70L) || (**g_768)) ^ p_46) >= 0L) && p_44.f1) == (**g_464))) ^ g_55.f0);
                    (*g_238) = (l_773 = l_772);
                }
                for (g_589 = 0; (g_589 <= 2); g_589 += 1)
                { 
                    int8_t l_776 = 0xC8L;
                    int32_t l_777[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_777[i] = 2L;
                    (*g_238) = (*g_238);
                    if (l_770)
                        continue;
                    l_782--;
                }
            }
            else
            { 
                return p_46;
            }
            if (((g_436.f2 , ((safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((((safe_unary_minus_func_int32_t_s(l_781)) & l_780) || ((**g_464) == (safe_rshift_func_uint16_t_u_s(0x7205L, (+0x44C31CBDL))))) != l_780), (-1L))) != g_99.f1), 6UL)) , p_44.f1)) >= 1L))
            { 
                uint8_t l_806 = 0x9CL;
                int32_t l_814 = 2L;
                int32_t l_816 = 0xEA2BE567L;
                int32_t l_817 = 0x3A994C2BL;
                int32_t l_818 = (-1L);
                int32_t l_819[1][4] = {{(-8L),(-8L),(-8L),(-8L)}};
                int32_t l_821 = 0x4DBE7BEDL;
                int i, j;
                if (((safe_add_func_int16_t_s_s(9L, ((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u(p_47, p_48)) != (((safe_div_func_uint16_t_u_u((((safe_div_func_uint32_t_u_u(g_68[1][0][5], ((**g_193) = 0x22ADFDD7L))) & g_55.f3) | 4294967287UL), p_48)) ^ p_48) , p_47)) ^ p_47), 0x30L)) | 0x66L))) >= 0UL))
                { 
                    int16_t l_804 = 0x68D3L;
                    int32_t l_805 = 0x48B69846L;
                    (**g_193) = p_46;
                    if (l_753)
                        goto lbl_803;
                    ++l_806;
                }
                else
                { 
                    int64_t l_809 = (-1L);
                    int64_t l_811 = 1L;
                    int32_t l_813[2];
                    int32_t l_820 = 7L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_813[i] = 0x3DEA4866L;
                    g_822++;
                }
            }
            else
            { 
                uint64_t l_825 = 18446744073709551615UL;
                ++l_825;
                for (l_825 = 0; (l_825 < 33); l_825 = safe_add_func_int64_t_s_s(l_825, 3))
                { 
                }
                if (l_825)
                    break;
                if (l_815)
                    continue;
            }
            (*g_194) = l_781;
            if ((safe_add_func_uint8_t_u_u(((((((((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(l_810, ((((safe_mod_func_uint16_t_u_u(((+((g_841 = g_841) == &l_469)) | (0xD607L == 0xB4D7L)), 0xF9A7L)) || ((safe_unary_minus_func_int32_t_s((((((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((((safe_sub_func_int32_t_s_s(((((safe_mul_func_uint8_t_u_u((g_822 = (safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s(1UL, p_48)) & 0xE743ADBFF3907AB8LL), l_810))), g_55.f5)) , p_46) <= (**g_464)) == p_48), (-1L))) | 0x1AL) & 0xDDD5743445D703CDLL) , 0L), p_48)), (**g_768))) || l_780) ^ p_44.f1) < (*g_194)) , p_46))) > 0x7065L)) | l_812) , p_47))), 7)) && (**g_768)) , (void*)0) == (void*)0) | 0xBC17L) <= g_99.f3) , 0x0CB5B578F3AAEB7DLL) | p_44.f1), g_55.f5)))
            { 
                uint32_t l_861[3];
                int64_t l_873 = (-1L);
                uint32_t *l_874 = &g_875;
                int64_t *l_876[1][3];
                int32_t l_879 = 9L;
                int32_t l_882 = 0x836BD8AFL;
                int32_t l_883 = (-1L);
                int32_t l_884 = 0x2F16AEBCL;
                int32_t l_885 = 0x7081E973L;
                int32_t l_886 = 5L;
                const int32_t l_896 = 0x2EAF7436L;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_861[i] = 18446744073709551611UL;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_876[i][j] = &g_183;
                }
                if (((g_116.f2.f2 = (g_142 &= (safe_add_func_int8_t_s_s((0UL != ((l_861[1] != (safe_add_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u((p_47 || ((*l_874) = ((*l_727) ^= ((((l_861[2] < (safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((~p_46) , (p_46 == (safe_lshift_func_uint8_t_u_s(g_54, (*g_769))))), l_873)) , (**g_768)), (**g_768)))) , (-7L)) == p_46) != g_20[2])))), 11)) ^ p_46) != l_861[1]), l_810))) <= 0xCADBFA95A848552CLL)), 5UL)))) , l_877))
                { 
                    int16_t l_880 = 1L;
                    int32_t l_881[3][6] = {{(-5L),0x346C2CBFL,(-5L),(-5L),0x346C2CBFL,(-5L)},{(-5L),0x346C2CBFL,(-5L),(-5L),0x346C2CBFL,(-5L)},{(-5L),0x346C2CBFL,(-5L),(-5L),0x346C2CBFL,(-5L)}};
                    uint8_t l_893 = 0x8DL;
                    int i, j;
                    l_888--;
                    p_47 &= (((*g_842) = p_44.f1) >= (safe_add_func_uint16_t_u_u(g_436.f4, p_46)));
                    (**g_193) = l_893;
                    (**g_193) |= (safe_mul_func_int16_t_s_s(1L, ((*l_469) &= 0xD464L)));
                    (**l_726) = (**l_726);
                }
                else
                { 
                    uint32_t **l_900 = (void*)0;
                    uint32_t ***l_899[2][6] = {{&l_900,&l_900,&l_900,&l_900,&l_900,&l_900},{&l_900,&l_900,&l_900,&l_900,&l_900,&l_900}};
                    uint32_t ****l_898[2][2] = {{&l_899[1][5],&l_899[1][5]},{&l_899[1][5],&l_899[1][5]}};
                    uint32_t *****l_897 = &l_898[0][1];
                    int i, j;
                    if (l_877)
                        break;
                    if (l_896)
                        break;
                    if (p_47)
                        continue;
                    l_901 = l_897;
                }
                if (p_48)
                    break;
                (**g_155) = &p_47;
                for (g_396 = 0; (g_396 == (-29)); g_396 = safe_sub_func_uint64_t_u_u(g_396, 2))
                { 
                    (****g_154) ^= 0xE001ABECL;
                    if ((****g_154))
                        break;
                    l_885 |= ((***g_155) |= l_861[0]);
                }
                if (l_885)
                    continue;
            }
            else
            { 
                ++l_907;
            }
            (**g_193) ^= (safe_sub_func_int32_t_s_s((1L || ((g_55.f4 = (l_912 , (9UL > (((safe_add_func_uint16_t_u_u((l_887 = (5L <= ((void*)0 != l_915))), (*g_842))) | 0x2EL) > 0x1712B66035DE8A46LL)))) <= l_916[2])), p_48));
        }
        p_47 |= p_48;
    }
    for (l_450 = (-4); (l_450 >= 11); ++l_450)
    { 
        uint8_t l_944 = 252UL;
        struct S0 l_950 = {0xB7E77886L,-1L,0xBDFF47CF6EBD22DDLL,0UL,0x9AFAL,0x6155L};
        int32_t l_954 = 1L;
        int32_t l_956 = 0x8ED6BB1BL;
        int32_t l_957 = 0xCFE8438AL;
        int32_t l_959[7] = {0xCC39605BL,0xCC39605BL,1L,0xCC39605BL,0xCC39605BL,1L,0xCC39605BL};
        uint32_t l_962[5][6][4] = {{{0xFC4014D1L,0xFC4014D1L,0xD1F1A858L,0xA1D31A19L},{0xCACE75A8L,0x2657C1D5L,0xCACE75A8L,0xD1F1A858L},{0xCACE75A8L,0xD1F1A858L,0xD1F1A858L,0xCACE75A8L},{0xFC4014D1L,0xD1F1A858L,0xA1D31A19L,0xD1F1A858L},{0xD1F1A858L,0x2657C1D5L,0xA1D31A19L,0xA1D31A19L},{0xFC4014D1L,0xFC4014D1L,0xD1F1A858L,0xA1D31A19L}},{{0xCACE75A8L,0x2657C1D5L,0xCACE75A8L,0xD1F1A858L},{0xCACE75A8L,0xD1F1A858L,0xD1F1A858L,0xCACE75A8L},{0xFC4014D1L,0xD1F1A858L,0xA1D31A19L,0xD1F1A858L},{0xD1F1A858L,0x2657C1D5L,0xA1D31A19L,0xA1D31A19L},{0xFC4014D1L,0xFC4014D1L,0xD1F1A858L,0xA1D31A19L},{0xCACE75A8L,0x2657C1D5L,0xCACE75A8L,0xD1F1A858L}},{{0xCACE75A8L,0xD1F1A858L,0xD1F1A858L,0xCACE75A8L},{0xFC4014D1L,0xD1F1A858L,0xA1D31A19L,0xD1F1A858L},{0xD1F1A858L,0x2657C1D5L,0xA1D31A19L,0xA1D31A19L},{0xFC4014D1L,0xFC4014D1L,0xD1F1A858L,0xA1D31A19L},{0xCACE75A8L,0x2657C1D5L,0xCACE75A8L,0xD1F1A858L},{0xCACE75A8L,0xD1F1A858L,0xD1F1A858L,0xCACE75A8L}},{{0xFC4014D1L,0xD1F1A858L,0xA1D31A19L,0xD1F1A858L},{0xD1F1A858L,0x2657C1D5L,0xA1D31A19L,0x2657C1D5L},{0xD1F1A858L,0xD1F1A858L,0xCACE75A8L,0x2657C1D5L},{0xA1D31A19L,0xFC4014D1L,0xA1D31A19L,0xCACE75A8L},{0xA1D31A19L,0xCACE75A8L,0xCACE75A8L,0xA1D31A19L},{0xD1F1A858L,0xCACE75A8L,0x2657C1D5L,0xCACE75A8L}},{{0xCACE75A8L,0xFC4014D1L,0x2657C1D5L,0x2657C1D5L},{0xD1F1A858L,0xD1F1A858L,0xCACE75A8L,0x2657C1D5L},{0xA1D31A19L,0xFC4014D1L,0xA1D31A19L,0xCACE75A8L},{0xA1D31A19L,0xCACE75A8L,0xCACE75A8L,0xA1D31A19L},{0xD1F1A858L,0xCACE75A8L,0x2657C1D5L,0xCACE75A8L},{0xCACE75A8L,0xFC4014D1L,0x2657C1D5L,0x2657C1D5L}}};
        int32_t l_1014 = 4L;
        int8_t l_1018 = 0xF7L;
        int32_t *l_1025[4][4];
        int16_t l_1032 = (-1L);
        uint32_t l_1046 = 18446744073709551610UL;
        uint8_t l_1050 = 1UL;
        uint64_t ***l_1054[6] = {&l_656,&l_656,&l_656,&l_656,&l_656,&l_656};
        uint64_t ****l_1053 = &l_1054[3];
        int16_t ***l_1062[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int16_t ****l_1061 = &l_1062[3];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
                l_1025[i][j] = &g_143[0][0];
        }
        for (g_875 = (-7); (g_875 == 24); g_875 = safe_add_func_int32_t_s_s(g_875, 7))
        { 
            const uint32_t *l_927 = &g_68[2][0][0];
            const int32_t l_931 = 0x1339207AL;
            struct S0 l_932 = {0x73654635L,-5L,0x7DC66A9198D57D8ELL,0xCE127689L,0xCD1BL,0x1992L};
            int32_t l_945 = 9L;
            int32_t l_946 = (-1L);
            int32_t l_958 = (-9L);
            int32_t l_960 = 0xDCB72311L;
            int32_t l_967 = 0xD903C08EL;
            int32_t l_968 = 0xEFC8DC9EL;
            int8_t l_969[4][7][4] = {{{6L,0x49L,0x5BL,0x5BL},{0x27L,0x27L,(-1L),0xD7L},{0x27L,0x4AL,0x5BL,0x27L},{6L,0xD7L,6L,0x5BL},{0x49L,0xD7L,(-1L),0x27L},{0xD7L,0x4AL,0x4AL,0xD7L},{6L,0x27L,0x4AL,0x5BL}},{{0xD7L,0x49L,(-1L),0x49L},{0x49L,0x4AL,6L,0x49L},{6L,0x49L,0x5BL,0x5BL},{0x27L,0x27L,(-1L),0xD7L},{0x27L,0x4AL,0x5BL,0x27L},{6L,0xD7L,6L,0x5BL},{0x49L,0xD7L,(-1L),0x27L}},{{0xD7L,0x4AL,0x4AL,0xD7L},{6L,0x27L,0x4AL,0x5BL},{0xD7L,0x49L,(-1L),0x49L},{0x49L,0x4AL,6L,0x49L},{6L,0x49L,0x5BL,0x5BL},{0x27L,0x27L,(-1L),0xD7L},{0x27L,0x4AL,0x5BL,0x27L}},{{6L,0xD7L,6L,0x5BL},{0x49L,0xD7L,(-1L),0x27L},{0xD7L,0x4AL,0x4AL,0xD7L},{6L,0x27L,0x4AL,0x5BL},{0xD7L,0x49L,(-1L),0x49L},{0x49L,0x4AL,6L,0x49L},{6L,0x49L,0x5BL,0x5BL}}};
            uint16_t l_970 = 6UL;
            uint64_t **l_975 = &g_465[0][0];
            int32_t l_1015 = 0xC8EE3AB2L;
            int32_t l_1016 = 0L;
            int32_t l_1017 = 0x095D7AAAL;
            int32_t l_1019 = 0x669DD13AL;
            int32_t l_1020 = 1L;
            int32_t l_1021[7] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
            uint32_t l_1022 = 1UL;
            int32_t l_1038[4][4] = {{(-1L),(-1L),7L,1L},{1L,0L,7L,0L},{(-1L),(-1L),0x841B6AC7L,7L},{0L,(-1L),(-1L),0L}};
            struct S0 l_1056 = {0x216F5F87L,0x74066CD088D2ABAFLL,-8L,0UL,65535UL,65532UL};
            int16_t **l_1059 = &l_469;
            int i, j, k;
            if (((*g_194) = ((safe_mod_func_int16_t_s_s(((&l_576 == (void*)0) < p_46), (safe_rshift_func_int16_t_s_s((0x75L < (safe_rshift_func_uint16_t_u_u((p_48 == ((void*)0 == l_927)), 7))), 0)))) && p_46)))
            { 
                int32_t ***l_930 = &l_716;
                int32_t l_947 = 0xDC26795DL;
                uint64_t *l_948 = &g_108;
                int32_t l_955[2];
                int64_t l_1009 = 1L;
                const int32_t *l_1010 = &g_965;
                int i;
                for (i = 0; i < 2; i++)
                    l_955[i] = 0L;
                if ((((((l_930 != (*g_154)) >= l_931) <= ((((**g_193) = (l_932 , (((*l_948) = ((+((safe_lshift_func_uint8_t_u_u(((0xA7A81827CF6DEA87LL >= 0x0ECD9C8EC9397E45LL) && (((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((**l_656) = ((l_945 |= (((safe_mod_func_uint32_t_u_u(p_46, l_944)) || g_822) && l_932.f2)) == p_46)) <= l_946), l_931)), l_932.f3)), g_99.f1)) <= p_46) ^ 0x6E02L)), l_944)) == l_947)) | (-4L))) | 0UL))) || p_48) , (-4L))) > 0L) , l_944))
                { 
                    int32_t **l_949 = &g_194;
                    (*g_155) = l_949;
                    return p_48;
                }
                else
                { 
                    union U1 *l_952 = &g_116;
                    union U1 **l_951 = &l_952;
                    int32_t *l_953[1];
                    int8_t l_961 = 0xB2L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_953[i] = &l_947;
                    (**l_726) = l_950;
                    (*l_951) = &g_116;
                    ++l_962[0][3][0];
                    --l_970;
                }
                for (g_436.f4 = 0; (g_436.f4 <= 5); g_436.f4 += 1)
                { 
                    int i;
                    (**g_193) |= (l_459[g_436.f4] & ((&p_47 != (void*)0) > ((safe_mod_func_uint32_t_u_u(((p_46 && l_945) ^ ((l_975 != &g_465[0][0]) | 0x7FE050812BCBC1B6LL)), l_956)) == 0x00F2EA6F0D53F549LL)));
                    if (p_47)
                        continue;
                }
                if ((l_932.f4 & g_68[0][0][1]))
                { 
                    int32_t *l_976 = (void*)0;
                    (**g_155) = l_976;
                }
                else
                { 
                    int64_t l_987 = 0L;
                    struct S0 l_996 = {1L,5L,0xA5C272704AB9D17ELL,0x9B63DE28L,1UL,0x254BL};
                    (*g_194) = ((((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((g_875 , l_987), (0x3EL >= (((*g_238) = (((safe_add_func_uint32_t_u_u(0UL, (safe_add_func_uint16_t_u_u(2UL, ((0xD71BD1B6AC552D7BLL & (safe_rshift_func_uint16_t_u_u(((~(((+(7L == l_987)) , l_987) > p_48)) ^ 0xD1L), p_48))) != 0xA3A9355D0FD468CBLL))))) < 65531UL) , l_996)) , g_99.f4)))), 0x45143AD4170FFAF8LL)), l_960)), p_46)), l_931)) , p_47) & (**g_464)) , 0x3F285909L);
                    if (l_969[3][4][1])
                        continue;
                    (*g_194) |= ((l_947 = ((safe_mod_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(8UL, (safe_lshift_func_int16_t_s_s((l_1009 &= (((*l_903) != (*g_397)) > ((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(0L, (((safe_sub_func_int32_t_s_s(0xE157B32FL, 0xB6B1A98FL)) , l_996.f4) == l_996.f2))), 3)) | (**g_464)))), p_46)))) < l_968) ^ g_142), 0xC65AL)) >= l_962[4][0][1])) , l_996.f2);
                }
                for (g_55.f3 = 0; (g_55.f3 <= 3); g_55.f3 += 1)
                { 
                    int32_t *l_1011 = &g_143[0][0];
                    int32_t *l_1012[5] = {&g_54,&g_54,&g_54,&g_54,&g_54};
                    int i, j, k;
                    (*g_193) = (void*)0;
                    l_1010 = (void*)0;
                    l_1022--;
                    l_1021[5] &= l_969[g_55.f3][(g_55.f3 + 3)][g_55.f3];
                    l_1025[2][0] = &p_47;
                }
                return (**g_841);
            }
            else
            { 
                uint32_t l_1029 = 1UL;
                uint16_t *l_1030 = &l_710[0][3][0].f4;
                uint32_t ** const *l_1031 = (void*)0;
                int32_t l_1033 = 0L;
                int32_t l_1034 = 1L;
                int32_t l_1036[1];
                int16_t ***l_1058 = &l_468;
                int16_t ****l_1057 = &l_1058;
                int i;
                for (i = 0; i < 1; i++)
                    l_1036[i] = 0xED1022EFL;
                if (((((void*)0 == &g_474) == (!((((safe_lshift_func_int16_t_s_s((l_1029 < 1UL), 12)) < ((*l_1030) = p_47)) || ((0UL > ((void*)0 == l_1031)) & 0xE48C83337E4E90AELL)) , 2UL))) , (**g_193)))
                { 
                    int16_t l_1035[6] = {0x3DFDL,0x3DFDL,0x3DFDL,0x3DFDL,0x3DFDL,0x3DFDL};
                    int32_t l_1037 = 0x2C0D87F2L;
                    int32_t l_1039 = 0xFA03A42AL;
                    int32_t l_1040 = 0x3F7554A6L;
                    int32_t l_1041[6] = {0x409B011DL,(-1L),(-1L),0x409B011DL,(-1L),(-1L)};
                    const struct S0 l_1045 = {0xC922488DL,0x6497DA4AE2F3DDE7LL,0L,18446744073709551611UL,0xE42BL,65533UL};
                    int i;
                    if ((*g_194))
                        break;
                    ++g_1042;
                    (***g_154) = &l_1017;
                    (**l_726) = l_1045;
                }
                else
                { 
                    int16_t l_1047 = 0x4DA8L;
                    int32_t l_1048 = 0L;
                    int32_t l_1049[2][1][2];
                    uint64_t *****l_1055 = &l_1053;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_1049[i][j][k] = 8L;
                        }
                    }
                    p_47 |= l_1046;
                    l_1050--;
                    (*l_1055) = l_1053;
                    (*l_729) = (l_1056 , l_1057);
                    g_1060 = ((l_1059 == (*g_475)) , l_950);
                }
            }
            (*l_731) = ((l_932 , p_46) , l_1061);
        }
        p_47 |= 5L;
        if (p_47)
            continue;
        (*g_238) = l_950;
    }
    l_1066--;
    return p_46;
}



static union U1  func_49(int8_t * const  p_50)
{ 
    uint8_t l_53[3][6] = {{246UL,0x46L,0x46L,246UL,246UL,0x46L},{246UL,246UL,0x46L,0x46L,246UL,246UL},{246UL,0x46L,0x46L,246UL,246UL,0x46L}};
    union U1 l_106[5] = {{0},{0},{0},{0},{0}};
    uint32_t l_123 = 0xECCAC473L;
    int32_t l_144[5][4][6] = {{{(-8L),(-8L),0x0935DC34L,(-1L),0xE1CE7A64L,0L},{0x71340892L,0x49D4ABAFL,0xA9ACF304L,0xE95B6698L,0xE480CDBFL,0x0935DC34L},{0x7E379CB2L,0x71340892L,0xA9ACF304L,1L,(-8L),0L},{0xDC829B9FL,1L,0x0935DC34L,(-2L),(-2L),0L}},{{(-2L),(-2L),0L,0xB904F0D9L,0xB521C193L,(-2L)},{(-8L),0x7E379CB2L,0xFC79B814L,(-1L),0xFC79B814L,0x7E379CB2L},{0xFC79B814L,(-2L),0xE95B6698L,0xAA389647L,0xE480CDBFL,0xB904F0D9L},{(-8L),0xFC79B814L,0xAA389647L,0xB521C193L,0x5085D525L,0L}},{{(-3L),0xFC79B814L,0x71340892L,0L,0xE480CDBFL,0x826EC486L},{(-2L),(-2L),(-3L),1L,0xFC79B814L,0xDC829B9FL},{0L,0x7E379CB2L,0x0935DC34L,0x067C9850L,0xB521C193L,0x3720D768L},{1L,(-2L),0xE95B6698L,0xE95B6698L,(-2L),1L}},{{(-8L),1L,3L,0xB521C193L,(-8L),0x7E379CB2L},{0x2E1C81CAL,0x71340892L,0xB904F0D9L,0x826EC486L,0xE480CDBFL,0L},{0x2E1C81CAL,0x49D4ABAFL,0x826EC486L,0xB521C193L,0xE1CE7A64L,0xDC829B9FL},{(-8L),(-8L),0x71340892L,0xE95B6698L,0x0935DC34L,0x760D513AL}},{{1L,(-2L),0xA9ACF304L,0x067C9850L,0x49D4ABAFL,0xB521C193L},{0L,1L,0xAA389647L,1L,0L,0x3720D768L},{(-2L),0xB521C193L,0xB904F0D9L,0L,(-2L),(-2L)},{(-3L),0x6DA98BAAL,0x2E1C81CAL,0xB521C193L,0xFC79B814L,(-2L)}}};
    const struct S0 l_161[7] = {{0xC680C6B3L,0xBBBA2D269C2A3573LL,0x1F490EF0FED554AELL,0xE0E78EEBL,65528UL,0xBE21L},{0xC680C6B3L,0xBBBA2D269C2A3573LL,0x1F490EF0FED554AELL,0xE0E78EEBL,65528UL,0xBE21L},{0xC680C6B3L,0xBBBA2D269C2A3573LL,0x1F490EF0FED554AELL,0xE0E78EEBL,65528UL,0xBE21L},{0xC680C6B3L,0xBBBA2D269C2A3573LL,0x1F490EF0FED554AELL,0xE0E78EEBL,65528UL,0xBE21L},{0xC680C6B3L,0xBBBA2D269C2A3573LL,0x1F490EF0FED554AELL,0xE0E78EEBL,65528UL,0xBE21L},{0xC680C6B3L,0xBBBA2D269C2A3573LL,0x1F490EF0FED554AELL,0xE0E78EEBL,65528UL,0xBE21L},{0xC680C6B3L,0xBBBA2D269C2A3573LL,0x1F490EF0FED554AELL,0xE0E78EEBL,65528UL,0xBE21L}};
    struct S0 l_163 = {0x9E6741FAL,0x8B77653E0B4A55CDLL,0x020B3E3A31E12F6ALL,2UL,1UL,0UL};
    int32_t ** const ***l_164 = (void*)0;
    uint64_t *l_167 = &g_108;
    const int32_t *l_178[7] = {&g_54,&g_143[0][0],&g_143[0][0],&g_54,&g_143[0][0],&g_143[0][0],&g_54};
    const int32_t **l_177 = &l_178[4];
    const int32_t ***l_179 = &l_177;
    uint8_t *l_180 = &l_53[0][2];
    int8_t l_184 = 0xE2L;
    uint32_t l_215 = 3UL;
    int32_t l_221 = (-10L);
    int16_t *l_226 = (void*)0;
    uint32_t l_245 = 0x2F4CC3A6L;
    int64_t l_257 = 3L;
    uint32_t *l_267 = &g_68[1][0][5];
    uint32_t **l_266 = &l_267;
    struct S0 l_288[4] = {{0xE739196AL,0x5D67176CBD41AF20LL,0L,0x0E59E16AL,0xE592L,1UL},{0xE739196AL,0x5D67176CBD41AF20LL,0L,0x0E59E16AL,0xE592L,1UL},{0xE739196AL,0x5D67176CBD41AF20LL,0L,0x0E59E16AL,0xE592L,1UL},{0xE739196AL,0x5D67176CBD41AF20LL,0L,0x0E59E16AL,0xE592L,1UL}};
    int64_t l_289[3][4] = {{0xAC7E0E843E2EB9D6LL,0xAC7E0E843E2EB9D6LL,(-7L),0xAC7E0E843E2EB9D6LL},{0xAC7E0E843E2EB9D6LL,0L,0L,0xAC7E0E843E2EB9D6LL},{0L,0xAC7E0E843E2EB9D6LL,0L,0L}};
    int8_t l_322 = (-1L);
    int16_t ***l_334 = (void*)0;
    int16_t ****l_333 = &l_334;
    uint32_t l_348 = 0x5E4C3257L;
    int32_t l_374 = 0xB585EEAEL;
    int i, j, k;
    for (g_52 = 2; (g_52 >= 0); g_52 -= 1)
    { 
        uint8_t l_81[2];
        union U1 l_125[6][2][6] = {{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}}};
        int32_t l_140 = 0xA0370FD5L;
        int32_t l_145 = 0x128892B4L;
        int32_t l_146 = 1L;
        int32_t l_147 = 0xE1DBD7B5L;
        int32_t l_148 = 0L;
        int32_t l_149[7][3] = {{9L,0xC95AB780L,0xC95AB780L},{7L,0xC95AB780L,0x801CBC84L},{0xBC54FA01L,9L,0xB95D3AA6L},{7L,7L,0xB95D3AA6L},{9L,0xBC54FA01L,0x801CBC84L},{0xC95AB780L,7L,0xC95AB780L},{0xC95AB780L,9L,7L}};
        int32_t *****l_158[4];
        struct S0 *l_162[6];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_81[i] = 0xF5L;
        for (i = 0; i < 4; i++)
            l_158[i] = &g_154;
        for (i = 0; i < 6; i++)
            l_162[i] = &g_55;
        for (g_54 = 0; (g_54 <= 2); g_54 += 1)
        { 
            struct S0 *l_56[5][3] = {{&g_55,&g_55,&g_55},{&g_55,&g_55,&g_55},{&g_55,&g_55,&g_55},{&g_55,&g_55,&g_55},{&g_55,&g_55,&g_55}};
            int32_t l_73 = 3L;
            int16_t l_115 = 0x5540L;
            int32_t *l_139 = (void*)0;
            int32_t *l_141[7][7] = {{&l_73,(void*)0,&g_54,(void*)0,&l_140,&l_73,&l_73},{&g_54,(void*)0,&l_73,(void*)0,&g_54,(void*)0,&l_140},{&l_73,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_140,&l_140,&l_73,&l_73,(void*)0,&l_73,&l_73},{&l_73,(void*)0,&l_73,&l_73,(void*)0,&l_73,(void*)0},{&g_54,&l_73,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_73,&l_140,&l_73,&l_73,(void*)0,&g_54,&l_73}};
            int64_t l_150 = 0xC45E7516BF4F606ELL;
            uint8_t l_151 = 0x56L;
            int i, j;
            g_55 = g_55;
            if ((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(0L, 0xD7L)), 7)))
            { 
                uint32_t *l_67 = &g_68[1][0][5];
                uint16_t *l_94 = &g_55.f5;
                struct S0 *l_98 = &g_99;
                struct S0 **l_100 = &l_56[2][2];
                int8_t *l_101 = &g_102;
                int32_t l_103 = 0x6DB4DB8DL;
                uint64_t *l_107 = &g_108;
                int64_t *l_121 = &l_106[0].f2.f1;
                int64_t *l_122 = &g_99.f1;
                int64_t *l_124 = &g_116.f2.f2;
                int i, j;
                g_82 = (((safe_lshift_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((l_53[g_54][(g_54 + 1)] == 0x594A39B7B3FA8726LL), 0xE9L)), (l_53[g_52][(g_52 + 3)] ^ ((*l_67)++)))) > (((safe_sub_func_int8_t_s_s(l_73, (safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s((!65535UL), 1)) <= g_55.f0) == 18446744073709551609UL), l_81[1])), 0x8A5DL)))) != (-1L)) < l_81[1])) <= (-7L)), l_53[g_52][(g_52 + 3)])) != l_73) | 8L);
                l_103 &= (((((~(safe_add_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(g_20[0], (safe_sub_func_int64_t_s_s((l_53[1][4] & 0x9849L), (((*l_101) ^= (safe_sub_func_uint64_t_u_u(((void*)0 == &g_52), (safe_add_func_uint16_t_u_u((((*l_94) = g_55.f0) < (safe_add_func_int8_t_s_s((~(((*l_100) = l_98) == (void*)0)), (-6L)))), 0xFC3EL))))) & (*p_50)))))), l_81[0]))) || 0xA0F3L) != l_53[0][1]) ^ l_53[g_54][(g_54 + 1)]) == g_55.f3);
                for (g_55.f5 = 0; (g_55.f5 <= 2); g_55.f5 += 1)
                { 
                    int32_t *l_104 = &g_54;
                    int32_t **l_105 = &l_104;
                    if (g_68[1][0][4])
                        break;
                    (*l_105) = l_104;
                    return l_106[0];
                }
                if (((l_81[0] , (((*l_107) ^= l_103) & g_99.f0)) || (l_53[g_54][g_52] = (safe_add_func_int64_t_s_s(((*l_124) = ((((safe_sub_func_uint8_t_u_u((((*l_122) = (safe_add_func_uint64_t_u_u((l_115 | ((*l_121) = ((((g_116 , ((safe_div_func_uint16_t_u_u(l_53[0][4], ((safe_rshift_func_uint8_t_u_u(0xECL, g_99.f5)) & l_73))) , (void*)0)) != &g_102) , &g_52) != &g_52))), 0UL))) , g_55.f3), 0xEEL)) < 1UL) >= l_123) ^ 0xE9D0F7BDL)), l_53[1][1])))))
                { 
                    return l_125[4][1][3];
                }
                else
                { 
                    int32_t *l_128 = &l_73;
                    int32_t **l_127 = &l_128;
                    int32_t ***l_126 = &l_127;
                    int32_t ****l_129 = &l_126;
                    (*l_129) = l_126;
                    return l_106[0];
                }
            }
            else
            { 
                int32_t *l_130 = &l_73;
                int32_t *l_131 = (void*)0;
                int32_t *l_132 = &l_73;
                int32_t *l_133 = &l_73;
                int32_t *l_134 = &l_73;
                int32_t *l_135[5][2] = {{&l_73,&l_73},{&l_73,&l_73},{&l_73,&l_73},{&l_73,&l_73},{&l_73,&l_73}};
                int i, j;
                g_136++;
            }
            l_151--;
        }
        g_154 = g_154;
        for (g_99.f1 = 26; (g_99.f1 <= (-10)); g_99.f1--)
        { 
            return g_116;
        }
        l_106[0].f2 = l_161[3];
    }
    l_163 = g_99;
    if ((((void*)0 != l_164) >= ((safe_div_func_uint64_t_u_u((++(*l_167)), (~g_142))) || (safe_add_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(l_144[1][1][4], ((((((l_161[3] , ((*l_180) = (safe_lshift_func_uint16_t_u_s((((*l_179) = l_177) == ((**g_154) = (*g_155))), g_55.f0)))) && g_136) & (*p_50)) <= 0x50535987D7C541B5LL) ^ 7UL) , (***l_179)))) < (*g_157)), 0UL)))))
    { 
        int32_t *l_181 = &g_54;
        int32_t *l_182[7];
        uint32_t l_185 = 0x2FD1BDCFL;
        int32_t ***l_190 = &g_156[1][0];
        int32_t ** const **l_191 = (void*)0;
        int16_t *l_210 = &l_106[0].f1;
        const uint16_t l_213 = 65535UL;
        int64_t *l_214[4] = {&g_99.f1,&g_99.f1,&g_99.f1,&g_99.f1};
        struct S0 l_224 = {6L,0xD8F182E843886572LL,0x124CE05F07CB16B7LL,0xB9182EEBL,0UL,0x5989L};
        int16_t **l_227 = &l_210;
        uint16_t *l_228 = (void*)0;
        uint16_t *l_229 = &l_163.f5;
        struct S0 *l_235[5] = {&l_163,&l_163,&l_163,&l_163,&l_163};
        struct S0 **l_234 = &l_235[3];
        int i;
        for (i = 0; i < 7; i++)
            l_182[i] = &l_144[1][2][3];
        l_185--;
        l_144[3][2][2] ^= (safe_mod_func_int8_t_s_s(((l_190 == (((g_192 = (*g_154)) != (((((safe_rshift_func_uint8_t_u_s((+(safe_mul_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((void*)0 == (**l_190)), (safe_add_func_int16_t_s_s(((((*l_210) = 0xBE0CL) , (2UL || (safe_mul_func_uint8_t_u_u(((*l_181) == g_99.f0), g_68[1][0][5])))) != g_55.f0), (**l_177))))), (***l_179))), (**l_177))), l_213)) <= 0xA659L), 65526UL))), g_68[1][0][5])) >= 0x7F432ADDL) , l_214[1]) != l_214[1]) , (*g_154))) , (void*)0)) | 0x0AC8E96BL), 5L));
        l_215--;
        for (g_55.f5 = 0; (g_55.f5 <= 6); g_55.f5 += 1)
        { 
            return g_116;
        }
        if ((+(safe_mul_func_uint8_t_u_u(((l_221 , (safe_add_func_uint16_t_u_u(((*l_229) = (g_116.f2.f4 = ((0x38F7L > (0xCC50L == ((((l_224 , g_225) != ((*l_227) = l_226)) <= (&g_108 == l_167)) || 1UL))) || (***l_179)))), g_52))) >= (***l_179)), g_55.f2))))
        { 
            struct S0 **l_239 = (void*)0;
            int32_t l_240[4][4] = {{(-7L),0x8F09C824L,(-7L),(-7L)},{0x8F09C824L,0x8F09C824L,0xA5A679ECL,0x8F09C824L},{0x8F09C824L,(-7L),(-7L),0x8F09C824L},{(-7L),0x8F09C824L,(-7L),(-7L)}};
            int64_t l_247 = (-7L);
            uint32_t l_250[5][3][5] = {{{18446744073709551608UL,18446744073709551615UL,3UL,0x1C7E4922L,18446744073709551611UL},{0xA77C499EL,18446744073709551611UL,1UL,1UL,18446744073709551611UL},{2UL,18446744073709551615UL,18446744073709551615UL,0x9910616EL,1UL}},{{0xA573045CL,0x9910616EL,18446744073709551615UL,2UL,1UL},{18446744073709551615UL,0xAD9687AAL,18446744073709551615UL,1UL,0xAFD709BBL},{0xA573045CL,18446744073709551615UL,3UL,0xA573045CL,0xD640485EL}},{{2UL,4UL,18446744073709551615UL,0xAD9687AAL,0xAD9687AAL},{0xA77C499EL,4UL,0xA77C499EL,0xD640485EL,0xA573045CL},{0xAD9687AAL,18446744073709551615UL,0xD640485EL,0xAFD709BBL,1UL}},{{0xAFD709BBL,0xAD9687AAL,18446744073709551608UL,1UL,2UL},{0xA77C499EL,0x9910616EL,0xD640485EL,1UL,0x9910616EL},{0x9910616EL,18446744073709551615UL,0xA77C499EL,18446744073709551611UL,1UL}},{{4UL,18446744073709551611UL,18446744073709551615UL,18446744073709551611UL,4UL},{18446744073709551615UL,0xAFD709BBL,3UL,1UL,18446744073709551615UL},{1UL,18446744073709551615UL,18446744073709551615UL,1UL,0xD640485EL}}};
            uint8_t l_262 = 1UL;
            int i, j, k;
            for (g_99.f2 = 0; (g_99.f2 <= 27); g_99.f2 = safe_add_func_int32_t_s_s(g_99.f2, 4))
            { 
                int16_t l_241 = 0x6515L;
                const int32_t *l_244[3][2][6] = {{{(void*)0,&g_54,(void*)0,&g_54,(void*)0,(void*)0},{&l_221,&g_54,&g_143[0][0],&l_221,&l_240[3][3],(void*)0}},{{&l_221,&l_240[3][3],(void*)0,&g_54,&g_54,(void*)0},{(void*)0,(void*)0,&g_143[0][0],&g_54,&g_54,(void*)0}},{{&g_54,&l_240[3][3],(void*)0,&g_54,&l_240[3][3],&g_143[0][0]},{(void*)0,&g_54,(void*)0,&g_54,(void*)0,(void*)0}}};
                int i, j, k;
                for (g_183 = (-2); (g_183 < (-19)); g_183 = safe_sub_func_uint64_t_u_u(g_183, 2))
                { 
                    struct S0 ***l_236[7][3][7] = {{{&l_234,&l_234,(void*)0,&l_234,&l_234,(void*)0,&l_234},{(void*)0,(void*)0,(void*)0,(void*)0,&l_234,(void*)0,&l_234},{&l_234,&l_234,&l_234,&l_234,(void*)0,(void*)0,&l_234}},{{&l_234,&l_234,&l_234,&l_234,&l_234,&l_234,&l_234},{(void*)0,&l_234,&l_234,&l_234,(void*)0,&l_234,(void*)0},{&l_234,&l_234,&l_234,&l_234,&l_234,&l_234,(void*)0}},{{&l_234,&l_234,&l_234,&l_234,&l_234,&l_234,&l_234},{&l_234,&l_234,&l_234,(void*)0,&l_234,&l_234,&l_234},{&l_234,&l_234,&l_234,&l_234,&l_234,&l_234,&l_234}},{{&l_234,(void*)0,(void*)0,(void*)0,(void*)0,&l_234,(void*)0},{&l_234,&l_234,(void*)0,(void*)0,&l_234,&l_234,&l_234},{(void*)0,&l_234,&l_234,(void*)0,&l_234,&l_234,(void*)0}},{{(void*)0,&l_234,&l_234,&l_234,&l_234,&l_234,(void*)0},{(void*)0,&l_234,(void*)0,(void*)0,&l_234,&l_234,&l_234},{&l_234,&l_234,(void*)0,&l_234,&l_234,&l_234,&l_234}},{{&l_234,&l_234,&l_234,&l_234,&l_234,&l_234,(void*)0},{(void*)0,&l_234,(void*)0,(void*)0,(void*)0,&l_234,&l_234},{&l_234,&l_234,&l_234,&l_234,&l_234,&l_234,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&l_234,(void*)0,(void*)0},{&l_234,&l_234,(void*)0,&l_234,&l_234,(void*)0,(void*)0},{&l_234,(void*)0,&l_234,&l_234,&l_234,&l_234,&l_234}}};
                    int32_t **l_246 = (void*)0;
                    int i, j, k;
                    l_239 = (g_237 = l_234);
                    l_144[0][0][4] ^= (l_240[2][2] != (((l_241 & 0xD777L) >= (**l_177)) != ((l_247 ^= ((*l_167) |= ((((safe_rshift_func_int8_t_s_s((l_244[0][1][0] != ((***g_154) = (*g_193))), ((((l_245 = ((void*)0 == (*l_177))) && 1UL) == g_20[2]) >= (*l_181)))) , l_246) == (void*)0) , g_143[0][0]))) && 0UL)));
                }
                (**g_192) = (l_240[1][1] , &l_240[1][2]);
                if ((***g_192))
                    break;
                for (l_184 = 0; (l_184 >= 7); ++l_184)
                { 
                    if (l_250[3][1][2])
                        break;
                }
                (***g_154) = (**g_192);
            }
            for (g_99.f3 = 29; (g_99.f3 > 26); g_99.f3--)
            { 
                int64_t l_253 = 6L;
                int32_t l_254 = 0L;
                int32_t l_255 = 0x70B6DFEEL;
                int32_t l_256 = 0x54527A59L;
                int32_t l_258 = (-8L);
                int32_t l_259 = 1L;
                int32_t l_260 = (-1L);
                int32_t l_261 = 0xDEBC2B7CL;
                l_262++;
                return g_116;
            }
        }
        else
        { 
            struct S0 ***l_265[6][3] = {{&g_237,&g_237,&g_237},{(void*)0,(void*)0,(void*)0},{&l_234,&g_237,&l_234},{(void*)0,(void*)0,(void*)0},{&g_237,&g_237,&g_237},{(void*)0,(void*)0,(void*)0}};
            int i, j;
            g_237 = &g_238;
        }
    }
    else
    { 
        uint32_t ***l_268 = &l_266;
        uint16_t *l_271 = &g_99.f4;
        struct S0 ***l_281[4] = {&g_237,&g_237,&g_237,&g_237};
        int32_t l_286 = 0L;
        int32_t l_287 = 0L;
        uint32_t l_303 = 4294967292UL;
        int16_t * const *l_317 = &g_225;
        int16_t * const **l_316 = &l_317;
        int16_t * const ***l_315 = &l_316;
        int32_t *l_338 = &l_286;
        int32_t l_341 = 9L;
        int32_t l_342 = (-1L);
        int32_t l_343 = 0x3C80E120L;
        int32_t l_344 = 0L;
        int32_t l_345 = 0x71E108FFL;
        int32_t l_346 = (-1L);
        int32_t l_347[2][2][1];
        const int64_t l_367 = 0x01C37C15E10267A7LL;
        int16_t **l_434 = &l_226;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_347[i][j][k] = 0xD017DD8CL;
            }
        }
        (*l_268) = l_266;
        (*g_157) = (safe_sub_func_uint16_t_u_u((--(*l_271)), (safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((*l_167) = (safe_unary_minus_func_uint32_t_u(((*l_267) = ((((safe_lshift_func_uint16_t_u_u(65534UL, (g_136 >= ((&g_237 == (l_161[3] , l_281[0])) < (9L < ((safe_div_func_int64_t_s_s((safe_mod_func_int64_t_s_s(((((l_286 &= (0xEBL < (*p_50))) & l_287) , l_288[3]) , l_286), 18446744073709551611UL)), l_287)) <= 0xE8L)))))) != g_55.f1) < l_289[1][3]) >= (***l_179)))))), (***l_179))) >= 0xA90A6ACDL), 3))));
        for (l_123 = 0; (l_123 > 4); l_123 = safe_add_func_uint32_t_u_u(l_123, 3))
        { 
            (**g_155) = &l_286;
            for (l_245 = 0; (l_245 <= 4); l_245 += 1)
            { 
                for (g_55.f4 = 0; (g_55.f4 <= 4); g_55.f4 += 1)
                { 
                    int16_t * const *l_294 = &l_226;
                    int16_t * const **l_293 = &l_294;
                    int16_t * const ***l_292 = &l_293;
                    (*l_292) = (void*)0;
                }
                if (l_287)
                    continue;
                if ((l_287 <= (-1L)))
                { 
                    if ((****g_154))
                        break;
                }
                else
                { 
                    (**g_237) = (**g_237);
                }
            }
        }
        if ((((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((*g_238) , ((((***l_268) &= (safe_lshift_func_int16_t_s_s((((safe_sub_func_uint64_t_u_u(g_55.f1, (((((*l_271) = 65535UL) || (l_271 == g_225)) && g_82) >= (((void*)0 == l_281[0]) & g_99.f2)))) >= 0UL) < (***g_192)), l_286))) < l_303) == 0x7D95E908L)) <= g_20[3]), 0)), l_286)) , g_20[2]) && (**l_177)))
        { 
            uint64_t l_304 = 0UL;
            for (l_257 = 3; (l_257 >= 0); l_257 -= 1)
            { 
                return g_116;
            }
            ++l_304;
        }
        else
        { 
            uint32_t l_307 = 0xB3D7AD81L;
            int16_t *l_323 = &g_324[6][5][2];
            int32_t l_326 = 0x233238C3L;
            int32_t *l_339 = &l_144[2][3][4];
            int32_t *l_340[6] = {(void*)0,&l_287,&l_287,(void*)0,&l_287,&l_287};
            struct S0 l_426[2][3][6] = {{{{0x5C437C3FL,0x4EFF4946598BCBC1LL,0x1E77A634DEAC22EELL,18446744073709551615UL,0x832CL,65528UL},{-5L,9L,-1L,18446744073709551615UL,0UL,0xFA37L},{0x681C5168L,1L,0xD447F52FE27BACAALL,18446744073709551613UL,1UL,1UL},{-5L,9L,-1L,18446744073709551615UL,0UL,0xFA37L},{0x5C437C3FL,0x4EFF4946598BCBC1LL,0x1E77A634DEAC22EELL,18446744073709551615UL,0x832CL,65528UL},{-5L,9L,-1L,18446744073709551615UL,0UL,0xFA37L}},{{0L,1L,5L,18446744073709551611UL,65528UL,0x6515L},{5L,0x7186DB6D192658B9LL,0L,0x077C2F8EL,0x9621L,0UL},{0L,1L,5L,18446744073709551611UL,65528UL,0x6515L},{-5L,9L,-1L,18446744073709551615UL,0UL,0xFA37L},{0L,1L,5L,18446744073709551611UL,65528UL,0x6515L},{5L,0x7186DB6D192658B9LL,0L,0x077C2F8EL,0x9621L,0UL}},{{0x5C437C3FL,0x4EFF4946598BCBC1LL,0x1E77A634DEAC22EELL,18446744073709551615UL,0x832CL,65528UL},{5L,0x7186DB6D192658B9LL,0L,0x077C2F8EL,0x9621L,0UL},{0x681C5168L,1L,0xD447F52FE27BACAALL,18446744073709551613UL,1UL,1UL},{5L,0x7186DB6D192658B9LL,0L,0x077C2F8EL,0x9621L,0UL},{0x5C437C3FL,0x4EFF4946598BCBC1LL,0x1E77A634DEAC22EELL,18446744073709551615UL,0x832CL,65528UL},{5L,0x7186DB6D192658B9LL,0L,0x077C2F8EL,0x9621L,0UL}}},{{{0L,1L,5L,18446744073709551611UL,65528UL,0x6515L},{-5L,9L,-1L,18446744073709551615UL,0UL,0xFA37L},{0L,1L,5L,18446744073709551611UL,65528UL,0x6515L},{5L,0x7186DB6D192658B9LL,0L,0x077C2F8EL,0x9621L,0UL},{0L,1L,5L,18446744073709551611UL,65528UL,0x6515L},{-5L,9L,-1L,18446744073709551615UL,0UL,0xFA37L}},{{0x5C437C3FL,0x4EFF4946598BCBC1LL,0x1E77A634DEAC22EELL,18446744073709551615UL,0x832CL,65528UL},{-5L,9L,-1L,18446744073709551615UL,0UL,0xFA37L},{0x681C5168L,1L,0xD447F52FE27BACAALL,18446744073709551613UL,1UL,1UL},{-5L,9L,-1L,18446744073709551615UL,0UL,0xFA37L},{0x5C437C3FL,0x4EFF4946598BCBC1LL,0x1E77A634DEAC22EELL,18446744073709551615UL,0x832CL,65528UL},{-5L,9L,-1L,18446744073709551615UL,0UL,0xFA37L}},{{0L,1L,5L,18446744073709551611UL,65528UL,0x6515L},{5L,0x7186DB6D192658B9LL,0L,0x077C2F8EL,0x9621L,0UL},{0L,1L,5L,18446744073709551611UL,65528UL,0x6515L},{-5L,9L,-1L,18446744073709551615UL,0UL,0xFA37L},{0L,1L,5L,18446744073709551611UL,65528UL,0x6515L},{5L,0x7186DB6D192658B9LL,0L,0x077C2F8EL,0x9621L,0UL}}}};
            int i, j, k;
            if ((l_307 , l_287))
            { 
                (***g_154) = (*g_193);
            }
            else
            { 
                uint16_t l_325 = 0x9370L;
                int32_t *l_327 = &l_144[0][0][4];
                int64_t l_337 = (-1L);
                (***g_155) = (((g_55.f2 && ((safe_mul_func_int8_t_s_s(((g_143[0][1] | (((+((***g_192) = (****g_154))) , (safe_div_func_int32_t_s_s((safe_sub_func_int64_t_s_s(((l_307 != ((l_315 != (void*)0) || ((((safe_sub_func_uint32_t_u_u(((((((safe_div_func_int32_t_s_s(l_322, 5L)) != g_55.f4) > g_102) , 5L) , l_323) != (*l_317)), l_286)) > g_143[0][1]) | 0x93L) < l_325))) , g_99.f5), l_286)), l_307))) ^ 0L)) < l_326), l_325)) | l_325)) != l_307) < l_307);
                (*l_177) = l_327;
                (*g_194) = (((+(((safe_rshift_func_int16_t_s_u(((((safe_rshift_func_uint16_t_u_u(((void*)0 == l_333), (1L == l_307))) == ((l_163 , (safe_lshift_func_uint16_t_u_s(1UL, 0))) && (*p_50))) <= g_55.f1) >= l_337), l_287)) >= 0UL) , l_303)) == (*l_327)) != 8UL);
                l_338 = &l_286;
            }
            l_348++;
            for (l_348 = 20; (l_348 < 51); l_348++)
            { 
                int64_t *l_357 = &l_257;
                int32_t l_358 = 0x090CE907L;
                uint32_t *l_372 = &l_245;
                uint64_t l_376 = 1UL;
                int32_t l_421 = 0L;
                if ((safe_mul_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((((void*)0 != l_357) & (((*l_338) = l_358) , ((safe_lshift_func_uint16_t_u_u(g_102, ((!(((l_358 , ((safe_mod_func_int8_t_s_s((*p_50), (safe_mul_func_int16_t_s_s(((!18446744073709551609UL) > 0UL), l_358)))) <= l_358)) >= 0x227830DFL) > (*l_338))) != l_367))) <= l_358))), l_347[1][0][0])) | 0x52L), 1L)))
                { 
                    uint64_t l_375 = 0x8B28DB9A14C3500ALL;
                    l_375 |= (safe_rshift_func_uint16_t_u_s((((safe_lshift_func_int16_t_s_u(((*l_338) = ((&l_307 != l_372) ^ 1UL)), 15)) | (!(l_374 | 0x9BL))) != g_99.f4), 10));
                    (**g_193) &= l_358;
                    --l_376;
                    (*l_177) = (void*)0;
                    if (l_376)
                        break;
                }
                else
                { 
                    uint32_t l_384 = 0x276470DDL;
                    (*l_339) = 0x76EC7671L;
                    if (l_376)
                        continue;
                    (*l_177) = (void*)0;
                    (***g_154) = (((safe_add_func_int64_t_s_s((safe_unary_minus_func_int64_t_s((safe_sub_func_int32_t_s_s(l_384, ((safe_rshift_func_uint8_t_u_s(g_143[0][0], 6)) | (g_142 <= (safe_div_func_int8_t_s_s((*p_50), (safe_add_func_uint64_t_u_u((l_384 != ((l_358 , (*g_194)) > 0xDFB3A13EL)), l_376)))))))))), g_55.f1)) & 0x32794AB9A405D672LL) , (void*)0);
                }
                if (((0x958FL ^ (((*l_338) , (safe_mod_func_int64_t_s_s((g_324[0][4][0] || (safe_add_func_uint8_t_u_u((!4UL), (((-2L) == (g_396 & ((*l_271) = (g_397 != &g_398)))) < 0x7DA2L)))), 18446744073709551615UL))) , g_20[2])) && (*l_339)))
                { 
                    uint16_t l_403 = 65526UL;
                    struct S0 **l_415 = &g_238;
                    int8_t *l_416 = &g_102;
                    int32_t l_417 = 0xE9AD6C5EL;
                    int8_t l_418 = 0xABL;
                    int32_t l_419 = 0xC69E78C4L;
                    int32_t l_420 = 1L;
                    uint8_t l_422[2][4] = {{0x6AL,255UL,0x6AL,255UL},{0x6AL,255UL,0x6AL,255UL}};
                    int i, j;
                    (*l_339) ^= ((safe_rshift_func_uint8_t_u_s(((((safe_mod_func_int32_t_s_s((((l_403 && (safe_rshift_func_int8_t_s_u(((**g_154) != ((safe_rshift_func_uint8_t_u_s((l_403 >= (safe_div_func_uint64_t_u_u(l_358, ((*p_50) || ((*p_50) >= ((+(safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((((*l_416) = (l_415 == (void*)0)) || (*p_50)), 0)), 0L))) != 1L)))))), 7)) , (*g_192))), 7))) >= (*p_50)) | (*g_194)), (*l_338))) , (**g_193)) || (**g_193)) || l_358), (*p_50))) || 1UL);
                    --l_422[1][3];
                    return g_116;
                }
                else
                { 
                    uint32_t l_425 = 3UL;
                    struct S0 l_427 = {0x8F39A730L,0L,0L,0x2F89EAACL,6UL,65535UL};
                    (***g_192) = l_425;
                    l_427 = ((**g_237) = l_426[0][2][3]);
                    (*l_339) ^= (((+g_143[0][0]) <= ((void*)0 == &g_20[2])) >= (l_376 || (safe_sub_func_uint64_t_u_u(l_358, (safe_mul_func_int16_t_s_s(((+0x032AL) == l_427.f1), g_54))))));
                }
            }
            return g_116;
        }
        (***g_192) = (((*l_434) = &g_324[6][4][2]) == (**l_316));
    }
    return g_116;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_20[i], "g_20[i]", print_hash_value);

    }
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_55.f0, "g_55.f0", print_hash_value);
    transparent_crc(g_55.f1, "g_55.f1", print_hash_value);
    transparent_crc(g_55.f2, "g_55.f2", print_hash_value);
    transparent_crc(g_55.f3, "g_55.f3", print_hash_value);
    transparent_crc(g_55.f4, "g_55.f4", print_hash_value);
    transparent_crc(g_55.f5, "g_55.f5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_68[i][j][k], "g_68[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_99.f0, "g_99.f0", print_hash_value);
    transparent_crc(g_99.f1, "g_99.f1", print_hash_value);
    transparent_crc(g_99.f2, "g_99.f2", print_hash_value);
    transparent_crc(g_99.f3, "g_99.f3", print_hash_value);
    transparent_crc(g_99.f4, "g_99.f4", print_hash_value);
    transparent_crc(g_99.f5, "g_99.f5", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_143[i][j], "g_143[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_183, "g_183", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_324[i][j][k], "g_324[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_436.f0, "g_436.f0", print_hash_value);
    transparent_crc(g_436.f1, "g_436.f1", print_hash_value);
    transparent_crc(g_436.f2, "g_436.f2", print_hash_value);
    transparent_crc(g_436.f3, "g_436.f3", print_hash_value);
    transparent_crc(g_436.f4, "g_436.f4", print_hash_value);
    transparent_crc(g_436.f5, "g_436.f5", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_589, "g_589", print_hash_value);
    transparent_crc(g_617, "g_617", print_hash_value);
    transparent_crc(g_822, "g_822", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_965, "g_965", print_hash_value);
    transparent_crc(g_1013, "g_1013", print_hash_value);
    transparent_crc(g_1042, "g_1042", print_hash_value);
    transparent_crc(g_1060.f0, "g_1060.f0", print_hash_value);
    transparent_crc(g_1060.f1, "g_1060.f1", print_hash_value);
    transparent_crc(g_1060.f2, "g_1060.f2", print_hash_value);
    transparent_crc(g_1060.f3, "g_1060.f3", print_hash_value);
    transparent_crc(g_1060.f4, "g_1060.f4", print_hash_value);
    transparent_crc(g_1060.f5, "g_1060.f5", print_hash_value);
    transparent_crc(g_1131, "g_1131", print_hash_value);
    transparent_crc(g_1184, "g_1184", print_hash_value);
    transparent_crc(g_1257, "g_1257", print_hash_value);
    transparent_crc(g_1289, "g_1289", print_hash_value);
    transparent_crc(g_1739.f0, "g_1739.f0", print_hash_value);
    transparent_crc(g_1739.f1, "g_1739.f1", print_hash_value);
    transparent_crc(g_1739.f2, "g_1739.f2", print_hash_value);
    transparent_crc(g_1739.f3, "g_1739.f3", print_hash_value);
    transparent_crc(g_1739.f4, "g_1739.f4", print_hash_value);
    transparent_crc(g_1739.f5, "g_1739.f5", print_hash_value);
    transparent_crc(g_1830, "g_1830", print_hash_value);
    transparent_crc(g_1895, "g_1895", print_hash_value);
    transparent_crc(g_1932, "g_1932", print_hash_value);
    transparent_crc(g_1978, "g_1978", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1998[i], "g_1998[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
