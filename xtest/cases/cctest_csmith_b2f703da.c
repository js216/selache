// SPDX-License-Identifier: MIT
// cctest_csmith_b2f703da.c --- cctest case csmith_b2f703da (csmith seed 3002532826)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x92811e2d */

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

// Options:   -s 3002532826 -o /tmp/csmith_gen_2jr8ot18/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int16_t  f1;
   uint64_t  f2;
   int32_t  f3;
   int32_t  f4;
   uint16_t  f5;
};
#pragma pack(pop)

union U1 {
   uint64_t  f0;
   int32_t  f1;
   const int32_t  f2;
   uint16_t  f3;
   int8_t * f4;
};

union U2 {
   int8_t * f0;
   struct S0  f1;
   int8_t * f2;
};

union U3 {
   const int8_t * f0;
   int8_t * const  f1;
   uint32_t  f2;
};


static int32_t g_2 = (-3L);
static int8_t g_14 = 6L;
static int8_t *g_13 = &g_14;
static union U3 g_46 = {0};
static int32_t g_49 = (-1L);
static int32_t g_51 = 0x69D0863EL;
static int32_t g_52 = 0L;
static int64_t g_53 = 0L;
static int32_t g_54 = 0x7D98A9A2L;
static uint8_t g_55 = 0UL;
static uint16_t g_83 = 0x3F14L;
static const uint16_t **g_88 = (void*)0;
static uint64_t g_101 = 0x50B83611122A8473LL;
static const union U1 g_117[4][7] = {{{0xA632B0D1CDFBE848LL},{18446744073709551615UL},{18446744073709551615UL},{0xA632B0D1CDFBE848LL},{0xA47852D388EEC896LL},{0UL},{0xA47852D388EEC896LL}},{{18446744073709551611UL},{0x35B49D7A73C59DB3LL},{0x35B49D7A73C59DB3LL},{18446744073709551611UL},{18446744073709551611UL},{18446744073709551607UL},{18446744073709551611UL}},{{0xA632B0D1CDFBE848LL},{18446744073709551615UL},{18446744073709551615UL},{0xA632B0D1CDFBE848LL},{0xA47852D388EEC896LL},{0UL},{0xA47852D388EEC896LL}},{{18446744073709551611UL},{0x35B49D7A73C59DB3LL},{0x35B49D7A73C59DB3LL},{18446744073709551611UL},{18446744073709551611UL},{18446744073709551607UL},{18446744073709551611UL}}};
static const int8_t *g_123 = (void*)0;
static union U1 g_136 = {18446744073709551613UL};
static int32_t *g_160 = (void*)0;
static int32_t **g_159[5][6] = {{&g_160,&g_160,&g_160,&g_160,&g_160,&g_160},{&g_160,&g_160,&g_160,&g_160,&g_160,&g_160},{&g_160,&g_160,&g_160,&g_160,&g_160,&g_160},{&g_160,&g_160,&g_160,&g_160,&g_160,&g_160},{&g_160,&g_160,&g_160,&g_160,&g_160,&g_160}};
static union U1 *g_185 = &g_136;
static union U1 * const *g_184 = &g_185;
static uint16_t **g_202 = (void*)0;
static uint16_t ***g_201[7][5] = {{&g_202,&g_202,&g_202,&g_202,&g_202},{&g_202,(void*)0,&g_202,&g_202,(void*)0},{&g_202,(void*)0,(void*)0,&g_202,(void*)0},{(void*)0,(void*)0,&g_202,(void*)0,(void*)0},{(void*)0,&g_202,(void*)0,(void*)0,&g_202},{(void*)0,&g_202,&g_202,(void*)0,&g_202},{&g_202,&g_202,&g_202,&g_202,&g_202}};
static const union U2 g_221 = {0};
static const union U2 *g_220[2] = {&g_221,&g_221};
static int16_t g_223 = 0xC1EDL;
static uint32_t g_225 = 1UL;
static uint16_t g_238 = 65528UL;
static uint64_t g_247 = 1UL;
static union U1 * const **g_267[2][3][6] = {{{&g_184,&g_184,&g_184,&g_184,&g_184,&g_184},{&g_184,&g_184,&g_184,&g_184,&g_184,&g_184},{&g_184,&g_184,&g_184,&g_184,&g_184,&g_184}},{{&g_184,&g_184,&g_184,&g_184,&g_184,&g_184},{&g_184,&g_184,&g_184,&g_184,&g_184,&g_184},{&g_184,&g_184,&g_184,&g_184,&g_184,&g_184}}};
static union U1 * const ***g_266 = &g_267[1][1][2];
static int32_t g_284 = 0x66FAAAA2L;
static uint32_t g_301 = 0xEB1BFE8AL;
static int32_t g_381[6] = {0L,0L,0L,0L,0L,0L};
static const uint32_t *g_390 = &g_225;
static const uint32_t * const *g_389 = &g_390;
static const uint32_t * const **g_388 = &g_389;
static union U3 *g_411[2] = {(void*)0,(void*)0};
static int16_t *g_457 = (void*)0;
static int16_t **g_456 = &g_457;
static int16_t * const **g_502 = (void*)0;
static int16_t g_506 = 3L;
static union U2 g_532 = {0};
static struct S0 g_536 = {0xE8D76CCAL,0x3879L,18446744073709551607UL,0x11B0DEF1L,0L,0UL};
static uint64_t *g_604 = (void*)0;
static uint64_t **g_603 = &g_604;
static uint32_t g_616 = 0x14A1844CL;
static int64_t g_661 = 9L;
static int8_t g_675 = 0x18L;
static uint32_t g_688 = 18446744073709551613UL;



static union U3  func_1(void);
static uint16_t  func_5(uint16_t  p_6, uint8_t  p_7, int8_t * p_8, int8_t * p_9, const int8_t * p_10);
static int8_t * func_15(uint32_t  p_16, int8_t * p_17);
static uint16_t  func_24(uint16_t  p_25, int8_t * p_26, int8_t  p_27, uint64_t  p_28, int8_t * p_29);
static uint16_t  func_30(int32_t  p_31);
static union U2  func_33(uint32_t  p_34, int8_t  p_35, int8_t * p_36);
static uint64_t  func_38(int8_t * const  p_39, int8_t * p_40, const int8_t * p_41, uint8_t  p_42, union U1  p_43);
static int8_t * func_44(union U3  p_45);




static union U3  func_1(void)
{ 
    union U1 l_59[3][7][7] = {{{{0x615B38D6AEAB6696LL},{0xC9F93B76F056E99FLL},{0x652F52174D4A52D8LL},{0xC9F93B76F056E99FLL},{0x615B38D6AEAB6696LL},{0xA264F7D9FD593B88LL},{0xA264F7D9FD593B88LL}},{{0x615B38D6AEAB6696LL},{0xC9F93B76F056E99FLL},{0x652F52174D4A52D8LL},{0xC9F93B76F056E99FLL},{0x615B38D6AEAB6696LL},{0xA264F7D9FD593B88LL},{0xA264F7D9FD593B88LL}},{{0x615B38D6AEAB6696LL},{0xC9F93B76F056E99FLL},{0x652F52174D4A52D8LL},{0xC9F93B76F056E99FLL},{0x615B38D6AEAB6696LL},{0xA264F7D9FD593B88LL},{0xA264F7D9FD593B88LL}},{{0x615B38D6AEAB6696LL},{0xC9F93B76F056E99FLL},{0x652F52174D4A52D8LL},{0xC9F93B76F056E99FLL},{0x615B38D6AEAB6696LL},{0xA264F7D9FD593B88LL},{0xA264F7D9FD593B88LL}},{{0x615B38D6AEAB6696LL},{0xC9F93B76F056E99FLL},{0x652F52174D4A52D8LL},{0xC9F93B76F056E99FLL},{0x615B38D6AEAB6696LL},{0xA264F7D9FD593B88LL},{0xA264F7D9FD593B88LL}},{{0x615B38D6AEAB6696LL},{0xC9F93B76F056E99FLL},{0x652F52174D4A52D8LL},{0xC9F93B76F056E99FLL},{0x615B38D6AEAB6696LL},{0xA264F7D9FD593B88LL},{0xA264F7D9FD593B88LL}},{{0x615B38D6AEAB6696LL},{0xC9F93B76F056E99FLL},{0x652F52174D4A52D8LL},{0xC9F93B76F056E99FLL},{0x615B38D6AEAB6696LL},{0xA264F7D9FD593B88LL},{0xA264F7D9FD593B88LL}}},{{{0x615B38D6AEAB6696LL},{0xC9F93B76F056E99FLL},{0x652F52174D4A52D8LL},{0xC9F93B76F056E99FLL},{0x615B38D6AEAB6696LL},{0xA264F7D9FD593B88LL},{0xA264F7D9FD593B88LL}},{{0x615B38D6AEAB6696LL},{0xC9F93B76F056E99FLL},{0x652F52174D4A52D8LL},{0xC9F93B76F056E99FLL},{0x615B38D6AEAB6696LL},{0xA264F7D9FD593B88LL},{0xA264F7D9FD593B88LL}},{{0x615B38D6AEAB6696LL},{0xC9F93B76F056E99FLL},{0x652F52174D4A52D8LL},{0xC9F93B76F056E99FLL},{0x615B38D6AEAB6696LL},{0xA264F7D9FD593B88LL},{0xA264F7D9FD593B88LL}},{{0x615B38D6AEAB6696LL},{0xC9F93B76F056E99FLL},{0x652F52174D4A52D8LL},{0xC9F93B76F056E99FLL},{0x615B38D6AEAB6696LL},{0xA264F7D9FD593B88LL},{0xA264F7D9FD593B88LL}},{{0x615B38D6AEAB6696LL},{0xC9F93B76F056E99FLL},{0x652F52174D4A52D8LL},{0xC9F93B76F056E99FLL},{0x615B38D6AEAB6696LL},{0xA264F7D9FD593B88LL},{0xA264F7D9FD593B88LL}},{{0x615B38D6AEAB6696LL},{0xC9F93B76F056E99FLL},{0x652F52174D4A52D8LL},{0xC9F93B76F056E99FLL},{0x615B38D6AEAB6696LL},{0xA264F7D9FD593B88LL},{0xA264F7D9FD593B88LL}},{{0x615B38D6AEAB6696LL},{0xC9F93B76F056E99FLL},{0x652F52174D4A52D8LL},{0xC9F93B76F056E99FLL},{0x615B38D6AEAB6696LL},{0xA264F7D9FD593B88LL},{0xA264F7D9FD593B88LL}}},{{{0xA264F7D9FD593B88LL},{18446744073709551611UL},{9UL},{18446744073709551611UL},{0xA264F7D9FD593B88LL},{0x652F52174D4A52D8LL},{0x652F52174D4A52D8LL}},{{0xA264F7D9FD593B88LL},{18446744073709551611UL},{9UL},{18446744073709551611UL},{0xA264F7D9FD593B88LL},{0x652F52174D4A52D8LL},{0x652F52174D4A52D8LL}},{{0xA264F7D9FD593B88LL},{18446744073709551611UL},{9UL},{18446744073709551611UL},{0xA264F7D9FD593B88LL},{0x652F52174D4A52D8LL},{0x652F52174D4A52D8LL}},{{0xA264F7D9FD593B88LL},{18446744073709551611UL},{9UL},{18446744073709551611UL},{0xA264F7D9FD593B88LL},{0x652F52174D4A52D8LL},{0x652F52174D4A52D8LL}},{{0xA264F7D9FD593B88LL},{18446744073709551611UL},{9UL},{18446744073709551611UL},{0xA264F7D9FD593B88LL},{0x652F52174D4A52D8LL},{0x652F52174D4A52D8LL}},{{0xA264F7D9FD593B88LL},{18446744073709551611UL},{9UL},{18446744073709551611UL},{0xA264F7D9FD593B88LL},{0x652F52174D4A52D8LL},{0x652F52174D4A52D8LL}},{{0xA264F7D9FD593B88LL},{18446744073709551611UL},{9UL},{18446744073709551611UL},{0xA264F7D9FD593B88LL},{0x652F52174D4A52D8LL},{0x652F52174D4A52D8LL}}}};
    int8_t *l_674 = &g_675;
    int32_t l_698 = 0x82FED734L;
    int32_t l_699 = 0xEB87D749L;
    union U3 l_701 = {0};
    int i, j, k;
    for (g_2 = 0; (g_2 == 18); g_2 = safe_add_func_int32_t_s_s(g_2, 8))
    { 
        int32_t l_32[4];
        int8_t *l_58 = (void*)0;
        int32_t *l_94 = &g_49;
        uint16_t *l_696 = &l_59[1][1][5].f3;
        int32_t *l_697[6];
        union U3 l_700 = {0};
        int i;
        for (i = 0; i < 4; i++)
            l_32[i] = 0x0CAAD901L;
        for (i = 0; i < 6; i++)
            l_697[i] = &g_532.f1.f4;
        l_698 &= (((*l_696) = func_5((safe_sub_func_int16_t_s_s(g_2, (g_2 | (((g_13 == (void*)0) , func_15(((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((g_14 || func_24(func_30(((*l_94) = ((l_32[2] , func_33(((+func_38(func_44(g_46), l_58, &g_14, g_49, l_59[1][1][5])) < 0x74835F01DA63D7FDLL), (*g_13), &g_14)) , g_14))), g_13, l_59[1][1][5].f2, g_2, g_13)), l_59[1][1][5].f2)), l_59[1][1][5].f0)), l_59[1][1][5].f3)) , 5UL), g_13)) == l_674)))), g_247, l_674, l_58, l_674)) & 0xFC70L);
        l_699 |= ((*l_94) = l_698);
        return l_700;
    }
    return l_701;
}



static uint16_t  func_5(uint16_t  p_6, uint8_t  p_7, int8_t * p_8, int8_t * p_9, const int8_t * p_10)
{ 
    int32_t *l_678 = (void*)0;
    int32_t l_680 = 0x9FCFE0CCL;
    const int32_t l_686[5] = {2L,2L,2L,2L,2L};
    union U2 *l_689 = &g_532;
    int i;
    for (g_49 = 0; (g_49 == 2); ++g_49)
    { 
        int32_t **l_679 = &g_160;
        int32_t l_690 = 0xA92B8D6CL;
        int32_t l_695 = (-1L);
        (*l_679) = l_678;
        if (l_680)
            continue;
        for (g_83 = 1; (g_83 == 33); ++g_83)
        { 
            uint32_t *l_687 = &g_688;
            int32_t *l_694[5];
            int i;
            for (i = 0; i < 5; i++)
                l_694[i] = &g_532.f1.f4;
            l_695 &= (safe_unary_minus_func_int32_t_s((safe_mul_func_int16_t_s_s(((((*l_687) = (l_686[4] , g_247)) , (p_7 >= (l_689 != (void*)0))) <= l_690), (((*g_13) = (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint8_t_u_s(l_680, 4))))) < p_6)))));
            return p_6;
        }
    }
    return p_7;
}



static int8_t * func_15(uint32_t  p_16, int8_t * p_17)
{ 
    uint8_t l_630 = 255UL;
    struct S0 l_636 = {0x473707DAL,0x1166L,0x880460F77A0A881BLL,0xE5629344L,0xE5D90679L,0xE781L};
    int32_t l_659 = (-2L);
    int32_t l_660[1];
    int16_t l_663 = 0x0022L;
    int32_t *l_672 = &g_381[4];
    int8_t *l_673 = (void*)0;
    int i;
    for (i = 0; i < 1; i++)
        l_660[i] = 0xF984032AL;
    for (g_55 = 0; (g_55 <= 1); g_55 += 1)
    { 
        uint64_t *l_645 = &g_101;
        int32_t l_648 = (-3L);
        int32_t *l_649 = &g_54;
        struct S0 l_650 = {0x4314B790L,1L,0x8E5CBEFCCC60D012LL,0L,0xD14E6493L,0UL};
        struct S0 *l_651 = &l_650;
        int32_t *l_652 = &l_650.f4;
        int32_t *l_653 = &l_636.f4;
        int32_t *l_654 = (void*)0;
        int32_t *l_655 = &g_536.f4;
        int32_t *l_656 = &l_648;
        int32_t *l_657 = &l_648;
        int32_t *l_658[2][7][3];
        int64_t l_662 = 0x2EC21A535033817FLL;
        uint32_t l_664[6] = {0xF983B3CFL,0UL,0xF983B3CFL,0xF983B3CFL,0UL,0xF983B3CFL};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 3; k++)
                    l_658[i][j][k] = &g_49;
            }
        }
        (*l_649) |= ((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_630, ((safe_rshift_func_int16_t_s_u((((~((safe_add_func_uint8_t_u_u((l_636 , ((((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((p_16 < ((*p_17) <= 0x1FL)) , ((safe_sub_func_int64_t_s_s(g_55, ((*l_645)++))) , l_636.f1)), 0x3508L)), p_16)) && l_648) && (-1L)) & p_16)), 0L)) ^ (-1L))) < g_506) | 0x465E764FL), l_636.f4)) && l_648))), l_648)), 1UL)) < g_2);
        (*l_651) = l_650;
        --l_664[3];
        for (g_51 = 1; (g_51 >= 0); g_51 -= 1)
        { 
            int i;
            (*l_652) ^= (&g_220[g_55] == &g_220[g_51]);
        }
    }
    for (l_636.f2 = 23; (l_636.f2 == 30); l_636.f2 = safe_add_func_uint16_t_u_u(l_636.f2, 3))
    { 
        int16_t l_669 = 0x1059L;
        struct S0 *l_671 = &g_536;
        struct S0 **l_670 = &l_671;
        if (l_669)
            break;
        (*l_670) = &g_536;
    }
    l_672 = &l_659;
    return l_673;
}



static uint16_t  func_24(uint16_t  p_25, int8_t * p_26, int8_t  p_27, uint64_t  p_28, int8_t * p_29)
{ 
    int8_t l_294[4][4][7] = {{{(-1L),5L,4L,4L,6L,0xDDL,1L},{6L,0x7CL,0xB6L,4L,5L,0xD8L,0x67L},{0x67L,1L,0L,0x58L,0L,1L,0x67L},{9L,(-1L),1L,0L,0x67L,0xD5L,1L}},{{(-1L),0x58L,0xD8L,6L,0x7CL,0xB6L,4L},{5L,1L,1L,5L,4L,(-1L),0L},{(-1L),(-9L),0L,0L,(-9L),(-1L),0xDDL},{4L,6L,0xB6L,0x67L,(-1L),0xB6L,5L}},{{(-9L),0xDDL,4L,0x7CL,0L,0xD5L,0x7CL},{(-1L),6L,9L,4L,0L,1L,1L},{0L,(-9L),0xB6L,(-9L),0L,0xD8L,(-1L)},{0x58L,1L,4L,(-1L),0L,0xDDL,0x58L}},{{9L,0x58L,0xDDL,0L,(-1L),4L,1L},{0x58L,(-1L),0xD8L,0L,(-9L),0xB6L,(-9L)},{0L,1L,1L,0L,4L,9L,6L},{(-1L),0x7CL,0xD5L,0L,0x7CL,4L,0xDDL}}};
    int32_t l_295 = 1L;
    int32_t l_296 = 6L;
    int32_t l_297 = (-5L);
    int32_t l_298[4] = {1L,1L,1L,1L};
    int64_t l_299 = 0xFE410DAA97D91556LL;
    int64_t l_345[2][2] = {{(-3L),(-3L)},{(-3L),(-3L)}};
    uint16_t l_397 = 1UL;
    uint32_t l_405 = 0x5E2410F8L;
    uint16_t l_455 = 9UL;
    int16_t **l_464 = &g_457;
    uint16_t l_498 = 0xB26FL;
    union U2 *l_531 = &g_532;
    struct S0 l_537 = {-1L,-1L,0x00BDE55F1E793531LL,-5L,0L,0xA2D7L};
    uint16_t *l_548 = &g_136.f3;
    uint16_t **l_547[7][3] = {{&l_548,&l_548,&l_548},{&l_548,&l_548,(void*)0},{&l_548,&l_548,&l_548},{&l_548,(void*)0,&l_548},{&l_548,&l_548,&l_548},{(void*)0,(void*)0,(void*)0},{&l_548,(void*)0,&l_548}};
    union U1 *l_565 = &g_136;
    uint64_t **l_605 = &g_604;
    struct S0 *l_620 = &g_536;
    int32_t **l_622[2];
    int32_t *l_623 = &l_295;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_622[i] = &g_160;
    for (g_101 = 16; (g_101 <= 11); g_101 = safe_sub_func_int64_t_s_s(g_101, 1))
    { 
        int32_t *l_289 = &g_49;
        int32_t *l_290 = &g_52;
        int32_t *l_291 = &g_49;
        int32_t *l_292 = &g_52;
        int32_t *l_293[5][2][4] = {{{&g_49,(void*)0,&g_49,&g_52},{&g_49,&g_49,&g_49,&g_49}},{{&g_49,&g_49,&g_49,&g_52},{&g_49,(void*)0,&g_49,&g_49}},{{&g_54,&g_54,&g_54,&g_54},{&g_54,&g_52,&g_49,&g_54}},{{&g_49,&g_54,&g_49,&g_52},{&g_49,&g_54,&g_49,&g_52}},{{&g_49,&g_54,&g_49,&g_54},{&g_49,&g_52,&g_54,&g_54}}};
        int16_t l_300 = 1L;
        union U3 l_306[5] = {{0},{0},{0},{0},{0}};
        uint64_t *l_355 = &g_247;
        uint64_t **l_354 = &l_355;
        uint16_t l_393 = 6UL;
        int16_t l_400 = (-3L);
        int64_t l_401 = (-7L);
        int16_t * const l_505 = &g_506;
        int16_t * const *l_504 = &l_505;
        int16_t * const **l_503 = &l_504;
        int8_t *l_530[3][3] = {{&l_294[2][1][3],&l_294[2][1][3],&l_294[2][1][3]},{&l_294[2][1][3],&l_294[2][1][3],&l_294[2][1][3]},{&l_294[2][1][3],&l_294[2][1][3],&l_294[2][1][3]}};
        struct S0 l_534 = {1L,0xDE31L,0UL,0xC9EF93D8L,1L,8UL};
        uint16_t **l_564 = &l_548;
        int64_t l_580[5][3][6] = {{{(-8L),0x0C59D2DFAF3CF900LL,0xD278E7F56782A205LL,(-8L),0x695079AC77C1F53BLL,0xD278E7F56782A205LL},{(-8L),0x695079AC77C1F53BLL,0xD278E7F56782A205LL,0xD278E7F56782A205LL,0x695079AC77C1F53BLL,(-8L)},{(-8L),0x0C59D2DFAF3CF900LL,0xD278E7F56782A205LL,(-8L),0x695079AC77C1F53BLL,0xD278E7F56782A205LL}},{{(-8L),0x695079AC77C1F53BLL,0xD278E7F56782A205LL,0xD278E7F56782A205LL,0x695079AC77C1F53BLL,(-8L)},{(-8L),0x0C59D2DFAF3CF900LL,0xD278E7F56782A205LL,(-8L),0x695079AC77C1F53BLL,0xD278E7F56782A205LL},{(-8L),0x695079AC77C1F53BLL,0xD278E7F56782A205LL,0xD278E7F56782A205LL,0x695079AC77C1F53BLL,(-8L)}},{{(-8L),0x0C59D2DFAF3CF900LL,0xD278E7F56782A205LL,(-8L),0x695079AC77C1F53BLL,0xD278E7F56782A205LL},{(-8L),0x695079AC77C1F53BLL,0xD278E7F56782A205LL,0xD278E7F56782A205LL,0x695079AC77C1F53BLL,(-8L)},{(-8L),0x0C59D2DFAF3CF900LL,0xD278E7F56782A205LL,(-8L),0x695079AC77C1F53BLL,0xD278E7F56782A205LL}},{{(-8L),0x695079AC77C1F53BLL,0xD278E7F56782A205LL,0xD278E7F56782A205LL,0x695079AC77C1F53BLL,(-8L)},{(-8L),0x0C59D2DFAF3CF900LL,0xD278E7F56782A205LL,(-8L),0x695079AC77C1F53BLL,0xD278E7F56782A205LL},{(-8L),0x695079AC77C1F53BLL,0xD278E7F56782A205LL,0xD278E7F56782A205LL,0x695079AC77C1F53BLL,(-8L)}},{{(-8L),0x0C59D2DFAF3CF900LL,0xD278E7F56782A205LL,(-8L),0x695079AC77C1F53BLL,0xD278E7F56782A205LL},{(-8L),0x695079AC77C1F53BLL,0xD278E7F56782A205LL,0xD278E7F56782A205LL,0x695079AC77C1F53BLL,(-8L)},{(-8L),0x0C59D2DFAF3CF900LL,0xD278E7F56782A205LL,(-8L),0x695079AC77C1F53BLL,0xD278E7F56782A205LL}}};
        const union U1 l_586 = {0x431FDD65A2FA4A60LL};
        uint32_t l_619 = 4294967295UL;
        int i, j, k;
        g_301--;
        for (p_25 = 0; (p_25 >= 32); p_25 = safe_add_func_uint16_t_u_u(p_25, 8))
        { 
            uint32_t l_320 = 1UL;
            union U1 l_323 = {18446744073709551606UL};
            int32_t l_329 = (-7L);
            int32_t l_340 = 2L;
            int32_t l_344 = (-8L);
            int32_t l_347[4][5][1] = {{{0xF9471E4BL},{1L},{0xF9471E4BL},{0L},{0xF9471E4BL}},{{1L},{0xF9471E4BL},{0L},{0xF9471E4BL},{1L}},{{0xF9471E4BL},{0L},{0xF9471E4BL},{1L},{0xF9471E4BL}},{{0L},{0xF9471E4BL},{1L},{0xF9471E4BL},{0L}}};
            uint32_t l_351 = 0UL;
            uint8_t l_370 = 0x02L;
            int16_t *l_387[3];
            int16_t **l_386 = &l_387[2];
            uint32_t l_402 = 1UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_387[i] = &l_300;
            if (l_298[0])
            { 
                int8_t l_319[1][1][5];
                int32_t l_331 = 3L;
                int32_t l_336 = 0xECA5AEEDL;
                int32_t l_337 = 0x715C263FL;
                int32_t l_338 = 0xA5828DF3L;
                int32_t l_339 = 9L;
                int32_t l_341 = 0x8ADCD1A5L;
                int32_t l_342 = 0xF1B26142L;
                int32_t l_343 = (-6L);
                int32_t l_346[6] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
                uint16_t l_348[2];
                uint64_t l_371[7][2][3] = {{{7UL,0xBE91D5544E20458BLL,18446744073709551606UL},{18446744073709551615UL,18446744073709551615UL,0x750C9763BD001C5ELL}},{{0x4791866EBD144804LL,18446744073709551606UL,0x34A8E8ADBD2BE888LL},{18446744073709551615UL,18446744073709551606UL,18446744073709551615UL}},{{0x3EF2993F3C37F6B4LL,0x750C9763BD001C5ELL,0x750C9763BD001C5ELL},{0x1BFDFCFA7CB2DCA1LL,18446744073709551608UL,0x750C9763BD001C5ELL}},{{18446744073709551612UL,0x6AA43C8851D700FCLL,18446744073709551615UL},{0x34A8E8ADBD2BE888LL,18446744073709551612UL,5UL}},{{6UL,4UL,18446744073709551608UL},{7UL,18446744073709551612UL,0x21BAA7C36D6C550FLL}},{{0x4791866EBD144804LL,0x6AA43C8851D700FCLL,0x3EF2993F3C37F6B4LL},{18446744073709551608UL,18446744073709551608UL,18446744073709551612UL}},{{18446744073709551608UL,0x750C9763BD001C5ELL,7UL},{0x4791866EBD144804LL,18446744073709551606UL,18446744073709551615UL}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_319[i][j][k] = 0x47L;
                    }
                }
                for (i = 0; i < 2; i++)
                    l_348[i] = 1UL;
                l_320 = (l_297 = ((l_306[1] , ((((~(safe_div_func_int16_t_s_s(g_51, (safe_rshift_func_int16_t_s_u(l_298[2], 3))))) < 0x2F02CFCB363515B0LL) <= ((safe_mul_func_int16_t_s_s(p_27, (safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_unary_minus_func_int64_t_s(((l_297 <= p_28) || 0x98C7L))), 4294967291UL)), g_136.f0)))) | l_319[0][0][3])) != l_319[0][0][3])) > g_117[2][0].f3));
                l_329 |= ((safe_rshift_func_int8_t_s_u((8L && (((l_323 , (*g_13)) && (((safe_unary_minus_func_int32_t_s((p_27 | (safe_mul_func_int8_t_s_s((l_323.f2 ^ (safe_rshift_func_int8_t_s_s((p_27 || (g_117[2][0].f0 ^ 0xBF600C539A55307FLL)), 2))), 0L))))) == g_53) || g_14)) , 0UL)), 5)) && p_28);
                if (p_25)
                { 
                    int8_t l_330 = 1L;
                    int32_t l_332 = (-1L);
                    int32_t l_333 = 0xA404D156L;
                    int32_t l_334 = 0xF8BFF30CL;
                    int32_t l_335[2][7][5];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 7; j++)
                        {
                            for (k = 0; k < 5; k++)
                                l_335[i][j][k] = 0xF9B802A2L;
                        }
                    }
                    (*l_290) = ((*l_289) = p_25);
                    l_348[1]--;
                }
                else
                { 
                    uint64_t **l_356 = &l_355;
                    int32_t l_363[7][2][6] = {{{0x389F3DD7L,0x7BD40F76L,1L,(-1L),(-1L),0xFED448E6L},{0x0B42ED20L,0x389F3DD7L,0L,0xFED448E6L,0x3AA49889L,0x0B42ED20L}},{{0L,2L,(-5L),1L,0L,(-4L)},{4L,0x53151024L,(-1L),(-10L),(-10L),(-1L)}},{{(-5L),(-5L),(-10L),1L,7L,0x3AA49889L},{8L,0L,0xF8B86B34L,0L,4L,(-10L)}},{{0x0B42ED20L,8L,0xF8B86B34L,2L,(-5L),0x3AA49889L},{1L,2L,(-10L),(-4L),(-1L),(-1L)}},{{(-4L),(-1L),(-1L),0xFED448E6L,0x389F3DD7L,(-4L)},{(-1L),0x0B42ED20L,(-5L),1L,(-5L),0x0B42ED20L}},{{(-5L),0x53151024L,0L,1L,4L,0xFED448E6L},{(-5L),(-5L),1L,0x389F3DD7L,0x856B24E4L,0x3AA49889L}},{{0L,(-5L),8L,(-1L),4L,0x6FFCF7B3L},{(-4L),0x53151024L,0L,2L,(-5L),1L}}};
                    uint32_t *l_372 = &g_225;
                    int i, j, k;
                    ++l_351;
                    if (l_343)
                        break;
                    l_356 = l_354;
                    l_363[1][1][2] = (safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(g_52, ((*l_372) ^= ((((*p_26) >= (safe_lshift_func_uint8_t_u_s(((6L <= l_363[1][1][2]) , g_55), (((safe_rshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_u((((safe_add_func_int64_t_s_s((p_25 == g_117[2][0].f2), (-1L))) , l_370) == p_28), 1)) & p_25) | p_25), p_28)) , l_371[3][1][1]) == (*p_26))))) , (*p_29)) <= 0x28L)))), (*l_289)));
                    return p_28;
                }
            }
            else
            { 
                uint32_t l_383 = 0UL;
                int32_t l_396[2][1][3] = {{{0x4EA5EAFDL,7L,7L}},{{0x4EA5EAFDL,7L,7L}}};
                int i, j, k;
                for (l_296 = 1; (l_296 >= 0); l_296 -= 1)
                { 
                    int64_t *l_375 = &g_53;
                    int32_t l_380 = 0x30DDB2ABL;
                    uint16_t *l_382 = &g_238;
                    int16_t **l_384 = (void*)0;
                    int16_t ***l_385[5][2][3] = {{{&l_384,&l_384,&l_384},{&l_384,&l_384,&l_384}},{{(void*)0,&l_384,&l_384},{(void*)0,(void*)0,&l_384}},{{&l_384,&l_384,&l_384},{&l_384,&l_384,&l_384}},{{&l_384,&l_384,&l_384},{(void*)0,&l_384,&l_384}},{{(void*)0,(void*)0,&l_384},{&l_384,&l_384,&l_384}}};
                    const uint32_t * const ***l_391 = &g_388;
                    int32_t l_392 = (-1L);
                    int i, j, k;
                    (*l_290) = ((safe_rshift_func_uint8_t_u_u((((*l_375) = p_27) & (((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(((l_380 | 255UL) & (((*l_291) | ((g_381[4] , l_382) != ((l_383 ^ l_323.f3) , (void*)0))) != (-1L))), g_381[2])), 2)) == p_28) & (*g_13))), l_340)) , l_380);
                    l_386 = l_384;
                    (*l_391) = g_388;
                    --l_393;
                }
                ++l_397;
                if (p_25)
                    break;
            }
            if (p_25)
                break;
            ++l_402;
            ++l_405;
        }
        for (g_49 = 0; (g_49 >= 17); g_49 = safe_add_func_uint16_t_u_u(g_49, 1))
        { 
            union U3 **l_410[1];
            int32_t l_416 = 1L;
            union U2 l_469 = {0};
            uint64_t l_499 = 0x78823943C7C1CE8FLL;
            int8_t *l_542 = &l_294[2][1][3];
            uint32_t l_562 = 0xDE01BB68L;
            int32_t l_588 = 1L;
            int32_t l_610 = 8L;
            int32_t l_611 = 0x009B0B09L;
            int32_t l_612 = 0x4B471D85L;
            int32_t l_613 = 0xB0CCC1CCL;
            int32_t l_614 = (-5L);
            int32_t l_615 = 0xD2482F94L;
            int i;
            for (i = 0; i < 1; i++)
                l_410[i] = (void*)0;
            g_411[1] = &g_46;
        }
    }
    l_623 = &l_298[3];
    return p_27;
}



static uint16_t  func_30(int32_t  p_31)
{ 
    int32_t l_95[5];
    union U1 *l_135[4][7][6] = {{{&g_136,&g_136,&g_136,&g_136,&g_136,(void*)0},{(void*)0,&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,(void*)0,&g_136,&g_136,&g_136,(void*)0},{&g_136,&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,(void*)0,&g_136,&g_136,(void*)0},{&g_136,&g_136,&g_136,&g_136,&g_136,&g_136}},{{&g_136,(void*)0,&g_136,&g_136,(void*)0,&g_136},{(void*)0,&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136,(void*)0,&g_136,(void*)0},{&g_136,(void*)0,(void*)0,&g_136,&g_136,&g_136},{(void*)0,&g_136,&g_136,&g_136,(void*)0,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136,&g_136}},{{&g_136,(void*)0,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,(void*)0,&g_136,&g_136,(void*)0},{&g_136,&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136,(void*)0,&g_136,&g_136},{&g_136,(void*)0,(void*)0,&g_136,&g_136,&g_136}},{{(void*)0,&g_136,&g_136,&g_136,&g_136,(void*)0},{&g_136,&g_136,&g_136,(void*)0,(void*)0,&g_136},{&g_136,&g_136,(void*)0,&g_136,&g_136,(void*)0},{&g_136,(void*)0,&g_136,&g_136,&g_136,(void*)0},{&g_136,&g_136,&g_136,&g_136,&g_136,(void*)0},{&g_136,&g_136,(void*)0,&g_136,(void*)0,&g_136},{&g_136,(void*)0,&g_136,&g_136,&g_136,(void*)0}}};
    const int32_t *l_162 = &g_117[2][0].f2;
    const int32_t **l_161 = &l_162;
    uint64_t l_177[3][6][6] = {{{18446744073709551607UL,18446744073709551607UL,0xBB33706F73C81C1ELL,0x7327B72E676B47F3LL,0x8AD59A9D03927B1FLL,6UL},{6UL,0x0EF34A033656F6DELL,18446744073709551607UL,0x2A2667AAD10FCB54LL,18446744073709551606UL,0xBB33706F73C81C1ELL},{4UL,6UL,18446744073709551607UL,0x54EEA5D277E2D952LL,18446744073709551607UL,6UL},{18446744073709551615UL,0x54EEA5D277E2D952LL,0xBB33706F73C81C1ELL,2UL,18446744073709551615UL,0x7327B72E676B47F3LL},{2UL,18446744073709551615UL,0x7327B72E676B47F3LL,18446744073709551607UL,0x884385FFE76D6E16LL,18446744073709551609UL},{0xF65639792C5CF526LL,18446744073709551615UL,0x8AD59A9D03927B1FLL,0x8AD59A9D03927B1FLL,18446744073709551615UL,0xF65639792C5CF526LL}},{{18446744073709551615UL,0x54EEA5D277E2D952LL,6UL,0x0EF34A033656F6DELL,18446744073709551607UL,0x2A2667AAD10FCB54LL},{0x8AD59A9D03927B1FLL,6UL,0x884385FFE76D6E16LL,4UL,18446744073709551606UL,0xBA57B682B91D3D6DLL},{0x8AD59A9D03927B1FLL,0x0EF34A033656F6DELL,4UL,0x0EF34A033656F6DELL,0x8AD59A9D03927B1FLL,18446744073709551607UL},{18446744073709551615UL,18446744073709551607UL,18446744073709551606UL,0x8AD59A9D03927B1FLL,0xBA57B682B91D3D6DLL,18446744073709551615UL},{0xF65639792C5CF526LL,0x2A2667AAD10FCB54LL,0x8AD59A9D03927B1FLL,4UL,0x7327B72E676B47F3LL,0x7327B72E676B47F3LL},{18446744073709551615UL,0x884385FFE76D6E16LL,0x884385FFE76D6E16LL,18446744073709551615UL,0xBB33706F73C81C1ELL,4UL}},{{0x7327B72E676B47F3LL,0x2A2667AAD10FCB54LL,0x54EEA5D277E2D952LL,2UL,18446744073709551607UL,0x8AD59A9D03927B1FLL},{0x54EEA5D277E2D952LL,0x0EF34A033656F6DELL,0xBA57B682B91D3D6DLL,0xF65639792C5CF526LL,18446744073709551607UL,0xF65639792C5CF526LL},{18446744073709551609UL,0x2A2667AAD10FCB54LL,18446744073709551609UL,18446744073709551615UL,0xBB33706F73C81C1ELL,0x0EF34A033656F6DELL},{4UL,0x884385FFE76D6E16LL,6UL,0x8AD59A9D03927B1FLL,0x7327B72E676B47F3LL,0xBB33706F73C81C1ELL},{2UL,0xF65639792C5CF526LL,18446744073709551615UL,0x8AD59A9D03927B1FLL,0x8AD59A9D03927B1FLL,18446744073709551615UL},{4UL,4UL,0x2A2667AAD10FCB54LL,18446744073709551615UL,6UL,18446744073709551609UL}}};
    union U1 **l_188 = &l_135[2][2][5];
    union U1 **l_204 = &g_185;
    union U1 ***l_203 = &l_204;
    int16_t *l_222 = &g_223;
    uint16_t *l_237 = &g_238;
    int16_t *l_246 = (void*)0;
    int8_t *l_265 = &g_14;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_95[i] = 0x8E690DFAL;
    for (g_49 = 0; (g_49 <= 4); g_49 += 1)
    { 
        uint32_t *l_96 = &g_46.f2;
        uint32_t *l_97 = (void*)0;
        uint32_t *l_98 = &g_46.f2;
        uint32_t *l_99 = &g_46.f2;
        uint64_t *l_100 = &g_101;
        int32_t l_118 = 0x6BE94C56L;
        union U1 **l_194 = (void*)0;
        union U1 ***l_193 = &l_194;
        int32_t *l_241 = &g_52;
        int16_t *l_242[1];
        int32_t l_274 = (-1L);
        int i;
        for (i = 0; i < 1; i++)
            l_242[i] = &g_223;
        if (((l_95[2] &= g_14) < (p_31 > ((p_31 , ((*l_100)--)) == g_14))))
        { 
            int32_t *l_105 = &g_54;
            int32_t **l_147 = (void*)0;
            int32_t **l_148 = &l_105;
            int16_t l_163 = 0xBC61L;
            int32_t *l_164 = &g_52;
            int32_t *l_165 = &l_95[3];
            int32_t *l_166 = (void*)0;
            int32_t *l_167 = &l_118;
            int32_t *l_168 = (void*)0;
            int32_t *l_169 = &g_54;
            int32_t *l_170 = (void*)0;
            int32_t *l_171 = &g_54;
            int32_t *l_172 = (void*)0;
            int32_t *l_173 = &l_95[0];
            int32_t *l_174 = (void*)0;
            int32_t *l_175 = &l_118;
            int32_t *l_176[6] = {&g_52,&g_52,&g_52,&g_52,&g_52,&g_52};
            int i;
            for (p_31 = 3; (p_31 >= 0); p_31 -= 1)
            { 
                int16_t l_104 = 0L;
                if (g_51)
                { 
                    int i;
                    l_95[p_31] = l_104;
                    return l_104;
                }
                else
                { 
                    uint64_t l_106 = 8UL;
                    int32_t *l_116 = &g_54;
                    if (p_31)
                        break;
                    l_105 = &l_95[0];
                    if (l_106)
                        continue;
                    (*l_116) = (safe_div_func_uint8_t_u_u(p_31, (safe_add_func_int64_t_s_s((safe_div_func_uint8_t_u_u(((((*l_105) = 0x40BD20A5L) < (g_55 || (+p_31))) > ((g_2 && (0x8C892F93L ^ (safe_add_func_int8_t_s_s(((l_106 || l_104) , 0L), 246UL)))) > (-1L))), l_104)), p_31))));
                    if ((*l_116))
                        continue;
                }
                g_54 = ((g_117[2][0] , ((l_118 & 0x8EFB8CC5L) || (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((0xE8L <= 255UL), 2)), ((g_123 = &g_14) != (g_117[2][0].f2 , (void*)0)))))) == (-7L));
                if (((void*)0 == &l_104))
                { 
                    return p_31;
                }
                else
                { 
                    const int16_t l_128 = 0x0CA8L;
                    uint8_t *l_131 = (void*)0;
                    uint8_t *l_132 = &g_55;
                    union U1 **l_137 = &l_135[2][0][5];
                    int32_t **l_138 = &l_105;
                    (*l_137) = (((safe_div_func_int64_t_s_s(((p_31 == (safe_add_func_int32_t_s_s((p_31 && (0x06L != l_128)), (safe_mod_func_uint8_t_u_u((p_31 ^ ((((((*l_132) |= l_95[4]) && (--(*l_132))) == ((-1L) & (*l_105))) <= g_117[2][0].f2) < 1L)), p_31))))) | 0xAEL), g_54)) >= p_31) , l_135[2][0][5]);
                    (*l_138) = &g_49;
                }
                for (g_53 = 0; (g_53 > (-20)); g_53 = safe_sub_func_int16_t_s_s(g_53, 6))
                { 
                    int32_t *l_146 = &g_52;
                    (*l_146) = (safe_mod_func_uint32_t_u_u((~((*l_105) && 1UL)), (safe_div_func_int32_t_s_s(0xB27AD419L, (-1L)))));
                    (*l_146) = g_54;
                }
            }
            (*l_148) = &p_31;
            (*l_164) ^= (safe_mul_func_int16_t_s_s(0x8C39L, (((safe_rshift_func_int8_t_s_s(p_31, (safe_sub_func_int16_t_s_s(l_118, (((((0L < ((((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((g_136.f0 != 18446744073709551615UL), ((g_159[1][1] != l_161) || l_118))), p_31)) , g_136.f1) , 0xAB2D383E86663A56LL) <= g_117[2][0].f0)) , p_31) & l_163) >= g_51) || 0x54E63AD9L))))) , p_31) > (*g_13))));
            if (p_31)
                continue;
            ++l_177[1][5][5];
        }
        else
        { 
            int32_t l_205 = (-1L);
            int32_t l_207 = 0L;
            uint16_t l_209[7] = {0x9D1DL,0x9D1DL,0x9D1DL,0x9D1DL,0x9D1DL,0x9D1DL,0x9D1DL};
            int16_t l_212 = 0x0233L;
            int i;
            for (g_55 = 0; (g_55 <= 2); g_55 += 1)
            { 
                union U1 ***l_186 = (void*)0;
                union U1 ***l_187[1][3][1];
                union U1 ****l_195 = &l_193;
                int32_t l_196 = 0L;
                uint16_t *l_200 = &g_136.f3;
                uint16_t **l_199 = &l_200;
                uint16_t ***l_198 = &l_199;
                uint16_t ****l_197[2];
                int32_t l_208[2][4] = {{0x7665E0C9L,0x7665E0C9L,0x7665E0C9L,0x7665E0C9L},{0x7665E0C9L,0x7665E0C9L,0x7665E0C9L,0x7665E0C9L}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_187[i][j][k] = (void*)0;
                    }
                }
                for (i = 0; i < 2; i++)
                    l_197[i] = &l_198;
                l_95[0] &= (safe_mod_func_uint32_t_u_u((1UL ^ ((safe_lshift_func_int16_t_s_s((((g_184 != (l_188 = (void*)0)) ^ (g_136.f2 <= (p_31 > ((safe_mul_func_int16_t_s_s((((*l_195) = l_193) != (((g_201[5][0] = ((65535UL | l_196) , (void*)0)) == &g_202) , l_203)), 0xC88DL)) < p_31)))) | 0x2FL), l_205)) , p_31)), (*l_162)));
                for (l_118 = 0; (l_118 <= 2); l_118 += 1)
                { 
                    (*l_161) = &p_31;
                    p_31 ^= ((void*)0 == l_200);
                }
                for (g_54 = 0; (g_54 <= 2); g_54 += 1)
                { 
                    int32_t *l_206[3][6] = {{&g_54,&l_95[3],&g_54,&l_95[3],&g_54,&l_95[3]},{&g_54,&l_95[3],&g_54,&l_95[3],&g_54,&l_95[3]},{&g_54,&l_95[3],&g_54,&l_95[3],&g_54,&l_95[3]}};
                    int i, j;
                    (*l_161) = &l_196;
                    p_31 |= 0x4D00D91CL;
                    ++l_209[3];
                }
                return l_212;
            }
        }
        for (g_83 = 0; (g_83 <= 4); g_83 += 1)
        { 
            uint8_t l_229 = 0x26L;
            uint16_t * const l_234 = &g_83;
            uint16_t *l_235 = (void*)0;
            int32_t l_239 = 0xC0D8A3B9L;
            uint16_t * const **l_248 = (void*)0;
            uint32_t *l_257 = &g_225;
            int32_t *l_272 = (void*)0;
            int32_t *l_273[4];
            uint8_t l_275 = 0xDCL;
            int i;
            for (i = 0; i < 4; i++)
                l_273[i] = &l_118;
            for (l_118 = 1; (l_118 <= 4); l_118 += 1)
            { 
                uint32_t l_213 = 0xA170B35BL;
                return l_213;
            }
            if (p_31)
            { 
                int16_t *l_224 = &g_223;
                uint16_t *l_228[3];
                int32_t **l_233 = &g_160;
                uint16_t **l_236[7][2] = {{&l_228[0],&l_228[2]},{&l_228[0],&l_228[2]},{&l_228[0],&l_228[2]},{&l_228[0],&l_228[2]},{&l_228[0],&l_228[2]},{&l_228[0],&l_228[2]},{&l_228[0],&l_228[2]}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_228[i] = &g_136.f3;
                for (g_55 = 0; (g_55 <= 4); g_55 += 1)
                { 
                    int i, j;
                    (*l_161) = (*l_161);
                    g_220[1] = ((((!(g_101++)) < (+(*g_13))) | (p_31 && (((safe_lshift_func_uint16_t_u_u(p_31, 0)) == (g_220[0] != &g_221)) ^ ((*l_224) &= (g_46 , (l_222 != l_224)))))) , &g_221);
                    if (g_225)
                        continue;
                }
                if (p_31)
                    continue;
                l_229 &= (safe_rshift_func_uint16_t_u_s((l_95[0] &= 65533UL), (**l_161)));
                for (p_31 = 0; (p_31 <= 1); p_31 += 1)
                { 
                    int32_t *l_230 = &g_54;
                    (*l_230) |= (-7L);
                    return p_31;
                }
                if ((safe_mul_func_uint16_t_u_u(((((*l_233) = &l_118) != (*l_161)) & p_31), (l_239 = ((((*g_185) , l_234) != (l_237 = l_235)) , p_31)))))
                { 
                    int32_t *l_240[2][3][7] = {{{&l_95[1],&l_95[1],&g_54,&g_52,&g_54,&l_95[1],&l_95[1]},{(void*)0,&l_239,(void*)0,&l_239,(void*)0,(void*)0,&l_239},{&g_52,(void*)0,&g_52,&g_54,&g_54,&g_52,(void*)0}},{{&l_239,&g_54,(void*)0,(void*)0,&g_54,&l_239,&g_54},{&g_52,&g_54,&g_54,&g_52,(void*)0,&g_52,&g_54},{(void*)0,(void*)0,&l_239,(void*)0,&l_239,(void*)0,(void*)0}}};
                    int i, j, k;
                    (*l_233) = (l_241 = (l_240[0][1][2] = &l_118));
                    return l_239;
                }
                else
                { 
                    uint64_t l_243 = 0xCD0BF88848957202LL;
                    (*l_241) ^= (0x06B0FEA9B3E444B3LL >= (l_242[0] == ((((**l_233) = 0x4194L) > (l_243++)) , l_246)));
                    if (g_247)
                        continue;
                }
            }
            else
            { 
                uint32_t l_251 = 0x311D744DL;
                uint8_t *l_254 = &l_229;
                uint32_t **l_258 = &l_98;
                uint16_t * const * const *l_270 = (void*)0;
                for (g_14 = 4; (g_14 >= 1); g_14 -= 1)
                { 
                    if (p_31)
                        break;
                    (*l_161) = &p_31;
                    (*l_161) = &p_31;
                }
                if (p_31)
                    break;
                (*l_241) = (&g_88 != l_248);
                if (((safe_rshift_func_uint16_t_u_u(((*l_241) <= l_251), 9)) == (g_51 ^ (((safe_rshift_func_int16_t_s_u(((--(*l_254)) > (p_31 || (l_257 == ((*l_258) = &g_225)))), 7)) != (*l_241)) != 3UL))))
                { 
                    (*l_241) |= p_31;
                }
                else
                { 
                    union U1 ****l_269 = &l_193;
                    union U1 *****l_268 = &l_269;
                    (*l_161) = &p_31;
                    (*l_241) |= (safe_sub_func_uint16_t_u_u((l_95[0] = ((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((func_33(g_136.f2, p_31, l_265) , (void*)0) == g_266), ((((((*l_268) = (void*)0) != (void*)0) & 0x21C0B2DCL) <= (-2L)) , (*g_13)))), p_31)) <= g_223)), 7UL));
                }
                for (g_225 = 0; (g_225 <= 4); g_225 += 1)
                { 
                    uint16_t ** const * const l_271[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    (*l_241) |= l_251;
                    (*l_241) |= (l_270 == (g_247 , l_271[0]));
                    if (p_31)
                        continue;
                }
            }
            ++l_275;
            for (l_274 = 0; (l_274 <= 4); l_274 += 1)
            { 
                int8_t l_280 = 0x80L;
                l_95[4] = (safe_rshift_func_int8_t_s_s(p_31, p_31));
                return l_280;
            }
            for (g_14 = 4; (g_14 >= 0); g_14 -= 1)
            { 
                for (g_51 = 3; (g_51 >= 0); g_51 -= 1)
                { 
                    uint16_t * const ***l_281 = &l_248;
                    (*l_281) = l_248;
                    return p_31;
                }
            }
        }
        if ((**l_161))
            continue;
    }
    for (p_31 = 0; (p_31 == 5); p_31 = safe_add_func_uint32_t_u_u(p_31, 5))
    { 
        int32_t *l_285 = (void*)0;
        int32_t *l_286 = &g_54;
        (*l_286) &= (g_284 = 0xF0FC9F82L);
    }
    return p_31;
}



static union U2  func_33(uint32_t  p_34, int8_t  p_35, int8_t * p_36)
{ 
    int32_t **l_90 = (void*)0;
    int32_t *l_92 = &g_49;
    int32_t **l_91 = &l_92;
    union U2 l_93 = {0};
    (*l_91) = &g_54;
    return l_93;
}



static uint64_t  func_38(int8_t * const  p_39, int8_t * p_40, const int8_t * p_41, uint8_t  p_42, union U1  p_43)
{ 
    int16_t l_74 = 0x74D0L;
    int8_t *l_79 = &g_14;
    uint16_t *l_80[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_81 = 0L;
    uint64_t l_82 = 0x14CD5900A0D1F898LL;
    int16_t *l_84 = &l_74;
    const uint16_t ***l_89[5] = {&g_88,&g_88,&g_88,&g_88,&g_88};
    int i;
    if ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((safe_div_func_int32_t_s_s((-6L), (safe_rshift_func_int16_t_s_s(((*l_84) = (safe_div_func_int8_t_s_s((safe_div_func_int64_t_s_s(g_14, (safe_rshift_func_uint16_t_u_u((g_83 = ((l_74 | (255UL >= ((safe_mul_func_uint16_t_u_u((l_81 = (safe_div_func_uint8_t_u_u((((void*)0 != l_79) && g_51), p_43.f0))), g_52)) != g_49))) ^ l_82)), 12)))), (*p_39)))), g_14)))), g_54)), g_14)))
    { 
        int32_t *l_85 = (void*)0;
        int32_t *l_86 = (void*)0;
        int32_t *l_87[7][7][5] = {{{&g_49,&g_54,&l_81,&g_2,&g_52},{&g_52,&g_54,(void*)0,(void*)0,&g_54},{&g_52,(void*)0,&g_52,(void*)0,&g_2},{&g_49,(void*)0,&g_52,&g_54,(void*)0},{&g_54,&g_2,(void*)0,&g_54,&g_54},{(void*)0,&g_54,&g_52,&g_2,&g_2},{&g_54,&g_54,&g_52,&g_52,&g_52}},{{&l_81,&g_54,&l_81,(void*)0,(void*)0},{&g_49,&g_2,&g_2,&g_2,&g_54},{&l_81,&g_49,&g_2,&g_49,&l_81},{&l_81,&l_81,&g_2,&g_54,&g_49},{&g_2,&g_54,&l_81,&g_52,&g_2},{(void*)0,&g_49,&g_52,&l_81,&g_2},{(void*)0,&g_49,&g_49,&g_2,(void*)0}},{{&g_52,&g_2,&l_81,(void*)0,(void*)0},{&l_81,&g_2,&g_2,&g_2,&g_54},{&l_81,(void*)0,(void*)0,&g_49,&g_54},{&g_49,&l_81,&g_2,&g_54,&g_54},{&g_52,(void*)0,&g_54,&g_2,&g_54},{&l_81,&g_2,&g_2,&g_54,(void*)0},{&g_2,&g_54,&g_2,&g_54,(void*)0}},{{&g_52,&g_54,&g_54,&g_52,&g_2},{&g_54,&l_81,&g_2,&g_2,&g_2},{&g_54,&g_54,&g_52,&g_54,&g_49},{&g_2,&g_52,(void*)0,&g_54,&l_81},{&g_2,&l_81,&g_54,&l_81,&g_54},{&g_2,&g_52,&g_2,&g_54,(void*)0},{(void*)0,&g_54,(void*)0,&g_52,&g_52}},{{&g_54,&l_81,&g_54,&g_54,&g_54},{&g_54,&g_54,(void*)0,&g_2,&g_2},{&g_54,&g_54,&l_81,(void*)0,(void*)0},{&g_52,&g_2,&g_2,&g_49,&g_2},{&g_2,(void*)0,&g_52,&g_2,&g_54},{&g_52,&l_81,&g_49,&g_2,&g_49},{&g_54,(void*)0,(void*)0,&g_49,&g_52}},{{(void*)0,&g_2,&g_54,(void*)0,(void*)0},{&g_2,&g_2,&g_52,&g_2,&g_54},{(void*)0,&g_49,&g_2,&g_54,&g_2},{&g_2,&g_49,&g_52,&g_52,&g_49},{&l_81,&g_54,&l_81,&g_54,&g_49},{&g_54,&l_81,&g_49,&l_81,(void*)0},{&g_2,&g_49,&l_81,&g_54,(void*)0}},{{&g_54,&g_2,&g_54,&g_54,&g_54},{&l_81,&g_54,&g_52,&g_2,&g_52},{&g_2,&g_54,&g_52,(void*)0,&g_54},{(void*)0,(void*)0,&l_81,&g_54,&g_2},{&g_49,&g_54,&g_54,&l_81,(void*)0},{(void*)0,&g_54,&g_49,(void*)0,(void*)0},{&g_2,&g_2,&g_52,&l_81,&g_49}}};
        int i, j, k;
        g_54 = l_82;
    }
    else
    { 
        return p_43.f3;
    }
    g_88 = g_88;
    return g_54;
}



static int8_t * func_44(union U3  p_45)
{ 
    int32_t *l_47 = (void*)0;
    int32_t *l_48 = &g_49;
    int32_t *l_50[1];
    int i;
    for (i = 0; i < 1; i++)
        l_50[i] = (void*)0;
    g_55++;
    return &g_14;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_117[i][j].f0, "g_117[i][j].f0", print_hash_value);
            transparent_crc(g_117[i][j].f1, "g_117[i][j].f1", print_hash_value);
            transparent_crc(g_117[i][j].f2, "g_117[i][j].f2", print_hash_value);
            transparent_crc(g_117[i][j].f3, "g_117[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_136.f0, "g_136.f0", print_hash_value);
    transparent_crc(g_136.f1, "g_136.f1", print_hash_value);
    transparent_crc(g_136.f2, "g_136.f2", print_hash_value);
    transparent_crc(g_136.f3, "g_136.f3", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_381[i], "g_381[i]", print_hash_value);

    }
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_536.f0, "g_536.f0", print_hash_value);
    transparent_crc(g_536.f1, "g_536.f1", print_hash_value);
    transparent_crc(g_536.f2, "g_536.f2", print_hash_value);
    transparent_crc(g_536.f3, "g_536.f3", print_hash_value);
    transparent_crc(g_536.f4, "g_536.f4", print_hash_value);
    transparent_crc(g_536.f5, "g_536.f5", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    transparent_crc(g_688, "g_688", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
