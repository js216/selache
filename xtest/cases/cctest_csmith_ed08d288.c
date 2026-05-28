// SPDX-License-Identifier: MIT
// cctest_csmith_ed08d288.c --- cctest case csmith_ed08d288 (csmith seed 3976778376)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55feaeca */
/* @exp_ticks 0xa48a */

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

// Options:   -s 3976778376 -o /tmp/csmith_gen_0nzsbu6y/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   int8_t  f1;
   const uint32_t  f2;
   uint32_t  f3;
   uint8_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint8_t  f0;
   uint32_t  f1;
   int32_t  f2;
   struct S0  f3;
};
#pragma pack(pop)

union U2 {
   const int16_t  f0;
};


static uint32_t g_6[4] = {0xD21F1EB3L,0xD21F1EB3L,0xD21F1EB3L,0xD21F1EB3L};
static union U2 g_10 = {5L};
static struct S0 g_24 = {0x29C214F1636717B3LL,0xE5L,0x61E33ECDL,0x0F1FA6F6L,0xEEL};
static int64_t g_25 = 0xF3C5A4A104ACD6BALL;
static int32_t g_29 = 0x9711F64DL;
static struct S1 g_31[3][4][4] = {{{{250UL,0x9A24791AL,0L,{1UL,0x73L,0xC36DE1F2L,0UL,8UL}},{255UL,0x2C352423L,-1L,{18446744073709551615UL,0xC5L,4294967295UL,0xD27FD735L,0xE5L}},{250UL,0x9A24791AL,0L,{1UL,0x73L,0xC36DE1F2L,0UL,8UL}},{247UL,0UL,0x1FB03350L,{0x90E7AF82577C8A60LL,0x10L,0x657D2A19L,0x8D7774CAL,0UL}}},{{255UL,0x2C352423L,-1L,{18446744073709551615UL,0xC5L,4294967295UL,0xD27FD735L,0xE5L}},{0xA6L,0x0AC80EABL,0x554C62B4L,{0x911659018101BC64LL,0xEEL,4294967295UL,0x1DC0AC77L,0xCAL}},{255UL,4294967288UL,-1L,{0x2FC9AEB9D3763964LL,0x48L,0x0C84A4E7L,18446744073709551615UL,255UL}},{0x4FL,0x20B25230L,0L,{1UL,-1L,7UL,8UL,0UL}}},{{0x4FL,0x20B25230L,0L,{1UL,-1L,7UL,8UL,0UL}},{246UL,0UL,1L,{0xCEEEC8559CE79000LL,0L,0x887E981CL,2UL,255UL}},{0UL,0xC4F31BC4L,0x38B1AAE8L,{0UL,0xD2L,7UL,18446744073709551607UL,0x60L}},{0xA6L,0x0AC80EABL,0x554C62B4L,{0x911659018101BC64LL,0xEEL,4294967295UL,0x1DC0AC77L,0xCAL}}},{{255UL,4UL,-1L,{18446744073709551607UL,1L,0UL,0x4340421AL,0UL}},{0UL,0xC4F31BC4L,0x38B1AAE8L,{0UL,0xD2L,7UL,18446744073709551607UL,0x60L}},{0UL,0xC4F31BC4L,0x38B1AAE8L,{0UL,0xD2L,7UL,18446744073709551607UL,0x60L}},{255UL,4UL,-1L,{18446744073709551607UL,1L,0UL,0x4340421AL,0UL}}}},{{{0x4FL,0x20B25230L,0L,{1UL,-1L,7UL,8UL,0UL}},{247UL,0UL,0x1FB03350L,{0x90E7AF82577C8A60LL,0x10L,0x657D2A19L,0x8D7774CAL,0UL}},{255UL,4294967288UL,-1L,{0x2FC9AEB9D3763964LL,0x48L,0x0C84A4E7L,18446744073709551615UL,255UL}},{250UL,0x9A24791AL,0L,{1UL,0x73L,0xC36DE1F2L,0UL,8UL}}},{{255UL,0x2C352423L,-1L,{18446744073709551615UL,0xC5L,4294967295UL,0xD27FD735L,0xE5L}},{0x5DL,0x9421A0E5L,0xC1F20CF6L,{1UL,0xC2L,4294967295UL,0x0E7B2E1DL,0x6EL}},{250UL,0x9A24791AL,0L,{1UL,0x73L,0xC36DE1F2L,0UL,8UL}},{5UL,0xD005767AL,-5L,{0xBD97C2923F8C0E5CLL,6L,0x9CF48B05L,18446744073709551615UL,0UL}}},{{250UL,0x9A24791AL,0L,{1UL,0x73L,0xC36DE1F2L,0UL,8UL}},{5UL,0xD005767AL,-5L,{0xBD97C2923F8C0E5CLL,6L,0x9CF48B05L,18446744073709551615UL,0UL}},{0xAFL,0x756627F1L,-1L,{0x39888327BC4A6B1FLL,1L,9UL,18446744073709551615UL,0x90L}},{5UL,0xD005767AL,-5L,{0xBD97C2923F8C0E5CLL,6L,0x9CF48B05L,18446744073709551615UL,0UL}}},{{0UL,0xC4F31BC4L,0x38B1AAE8L,{0UL,0xD2L,7UL,18446744073709551607UL,0x60L}},{0x5DL,0x9421A0E5L,0xC1F20CF6L,{1UL,0xC2L,4294967295UL,0x0E7B2E1DL,0x6EL}},{246UL,0UL,1L,{0xCEEEC8559CE79000LL,0L,0x887E981CL,2UL,255UL}},{250UL,0x9A24791AL,0L,{1UL,0x73L,0xC36DE1F2L,0UL,8UL}}}},{{{0UL,4294967288UL,-7L,{0x02F603F559CDE89CLL,-1L,4294967295UL,0x8791B167L,0UL}},{247UL,0UL,0x1FB03350L,{0x90E7AF82577C8A60LL,0x10L,0x657D2A19L,0x8D7774CAL,0UL}},{5UL,0xD005767AL,-5L,{0xBD97C2923F8C0E5CLL,6L,0x9CF48B05L,18446744073709551615UL,0UL}},{255UL,4UL,-1L,{18446744073709551607UL,1L,0UL,0x4340421AL,0UL}}},{{246UL,0UL,1L,{0xCEEEC8559CE79000LL,0L,0x887E981CL,2UL,255UL}},{0UL,0xC4F31BC4L,0x38B1AAE8L,{0UL,0xD2L,7UL,18446744073709551607UL,0x60L}},{0xA6L,0x0AC80EABL,0x554C62B4L,{0x911659018101BC64LL,0xEEL,4294967295UL,0x1DC0AC77L,0xCAL}},{0xA6L,0x0AC80EABL,0x554C62B4L,{0x911659018101BC64LL,0xEEL,4294967295UL,0x1DC0AC77L,0xCAL}}},{{246UL,0UL,1L,{0xCEEEC8559CE79000LL,0L,0x887E981CL,2UL,255UL}},{246UL,0UL,1L,{0xCEEEC8559CE79000LL,0L,0x887E981CL,2UL,255UL}},{255UL,0x2C352423L,-1L,{18446744073709551615UL,0xC5L,4294967295UL,0xD27FD735L,0xE5L}},{247UL,0UL,0x1FB03350L,{0x90E7AF82577C8A60LL,0x10L,0x657D2A19L,0x8D7774CAL,0UL}}},{{250UL,0x9A24791AL,0L,{1UL,0x73L,0xC36DE1F2L,0UL,8UL}},{0UL,0xC4F31BC4L,0x38B1AAE8L,{0UL,0xD2L,7UL,18446744073709551607UL,0x60L}},{5UL,0xD005767AL,-5L,{0xBD97C2923F8C0E5CLL,6L,0x9CF48B05L,18446744073709551615UL,0UL}},{0x5DL,0x9421A0E5L,0xC1F20CF6L,{1UL,0xC2L,4294967295UL,0x0E7B2E1DL,0x6EL}}}}};
static uint16_t g_43 = 0x4541L;
static uint32_t g_167 = 1UL;



static uint32_t  func_1(void);
static uint16_t  func_7(union U2  p_8, uint64_t  p_9);
static uint64_t  func_11(int64_t  p_12, struct S1  p_13, uint64_t  p_14);
static uint16_t  func_17(uint64_t  p_18, int8_t  p_19, struct S0  p_20, struct S0  p_21);




static uint32_t  func_1(void)
{ 
    uint32_t l_22 = 18446744073709551613UL;
    struct S0 l_23 = {18446744073709551615UL,0x0EL,0x2F37FC03L,0x6AE3D475L,0xE4L};
    uint32_t l_30 = 0x35653649L;
    uint32_t l_32[3];
    int i;
    for (i = 0; i < 3; i++)
        l_32[i] = 0x7F58E952L;
    g_31[2][0][3].f2 = (((safe_lshift_func_int16_t_s_u(((safe_div_func_int16_t_s_s(g_6[3], func_7(g_10, func_11((g_6[3] >= ((((g_29 = ((safe_sub_func_uint16_t_u_u(func_17(l_22, g_10.f0, l_23, g_24), g_10.f0)) || g_24.f3)) & l_30) == g_24.f4) && l_22)), g_31[2][0][3], l_32[2])))) >= g_31[2][0][3].f3.f1), 1)) == g_31[2][0][3].f3.f1) , g_31[2][0][3].f3.f2);
    return g_6[3];
}



static uint16_t  func_7(union U2  p_8, uint64_t  p_9)
{ 
    uint8_t l_45[4][3][4] = {{{1UL,0UL,0UL,1UL},{0x4BL,0UL,252UL,0UL},{0UL,255UL,252UL,252UL}},{{0x4BL,0x4BL,0UL,252UL},{1UL,255UL,1UL,0UL},{1UL,0UL,0UL,1UL}},{{0x4BL,0UL,252UL,0UL},{0UL,255UL,252UL,252UL},{0x4BL,0x4BL,0UL,252UL}},{{1UL,255UL,1UL,0UL},{1UL,0UL,0UL,1UL},{0x4BL,0UL,252UL,0UL}}};
    int32_t l_63 = 0x32462667L;
    int32_t l_91 = 0x1142F3EDL;
    uint32_t l_166 = 7UL;
    int i, j, k;
    for (g_24.f1 = 0; (g_24.f1 <= 2); g_24.f1 += 1)
    { 
        struct S0 l_81 = {0x0F06FB93DB6BE605LL,5L,1UL,18446744073709551615UL,0x4BL};
        int32_t l_82 = 0x9E3DC10EL;
        for (g_25 = 0; (g_25 <= 2); g_25 += 1)
        { 
            uint16_t l_46 = 5UL;
            l_46--;
            for (p_9 = 0; (p_9 <= 2); p_9 += 1)
            { 
                int32_t l_60[2][2] = {{1L,1L},{1L,1L}};
                int i, j, k;
                g_31[2][0][3].f2 = (l_45[g_24.f1][g_24.f1][(p_9 + 1)] == ((((((g_31[2][0][3].f3 , (~l_46)) != l_45[g_24.f1][g_24.f1][(p_9 + 1)]) , 18446744073709551608UL) == 0xE721FB129D736D3DLL) & g_31[2][0][3].f3.f0) , 0L));
                l_60[0][0] |= (safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(((254UL | (18446744073709551615UL > ((safe_lshift_func_int16_t_s_u(l_46, 13)) <= ((((safe_div_func_uint8_t_u_u(6UL, 249UL)) >= g_24.f3) ^ p_9) , p_8.f0)))) && p_8.f0), g_31[2][0][3].f1)), l_45[2][2][2]));
            }
        }
        for (p_9 = 0; (p_9 <= 2); p_9 += 1)
        { 
            int32_t l_72 = 0L;
            for (g_24.f4 = 0; (g_24.f4 <= 2); g_24.f4 += 1)
            { 
                int i, j, k;
                return l_45[g_24.f4][p_9][(g_24.f4 + 1)];
            }
            g_31[2][0][3].f2 = (safe_sub_func_int8_t_s_s((l_63 = g_31[2][0][3].f3.f4), (l_45[2][2][0] && (safe_rshift_func_int8_t_s_u(0xF1L, 5)))));
            for (l_63 = 0; (l_63 <= 2); l_63 += 1)
            { 
                int i, j, k;
                l_72 |= (((safe_lshift_func_uint8_t_u_u(l_45[p_9][p_9][(p_9 + 1)], 3)) != ((((safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((0xE5449298L & (-1L)) | (l_45[l_63][g_24.f1][(p_9 + 1)] >= 18446744073709551611UL)), 1)) | (-5L)), p_8.f0)) <= g_25) < g_6[0]) < g_29)) & 0x113D487EL);
                l_82 |= (safe_rshift_func_int16_t_s_u(((safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((g_31[2][0][3].f3 , p_8.f0), (1L >= (g_31[2][0][3].f1 = (l_81 , g_31[2][0][3].f3.f3))))), 7)) || 4294967294UL), p_9)) , 0x2B09L), p_8.f0));
                l_91 &= ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(((0xF77E7A5BL > ((((safe_mul_func_int16_t_s_s(g_31[2][0][3].f0, ((0UL < ((safe_mul_func_uint16_t_u_u(65535UL, g_24.f2)) < 2UL)) <= g_31[2][0][3].f3.f4))) , 0xC8823583L) & 0UL) < p_9)) != p_8.f0), 12)), 11)) ^ 0x6DL);
            }
        }
        for (g_24.f4 = 0; (g_24.f4 <= 2); g_24.f4 += 1)
        { 
            int64_t l_107 = 3L;
            if (g_10.f0)
                break;
            for (g_29 = 2; (g_29 >= 0); g_29 -= 1)
            { 
                int32_t l_106 = (-1L);
                int i, j, k;
                l_107 = ((g_31[2][0][3].f3.f0 = ((safe_div_func_int64_t_s_s((l_91 = ((((((safe_rshift_func_uint16_t_u_u(((((0UL ^ ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((l_106 = ((l_45[(g_29 + 1)][g_24.f4][g_24.f4] && (((safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(g_24.f3, p_8.f0)), g_24.f3)), l_45[(g_29 + 1)][g_24.f4][g_24.f4])) | g_31[2][0][3].f2) > g_24.f3)) <= 0xCCL)), p_8.f0)), 0x04B031DEL)) >= l_91)) >= l_81.f2) ^ l_81.f0) <= (-7L)), 12)) | l_45[(g_29 + 1)][g_24.f4][g_24.f4]) , 2L) >= l_91) | 4294967288UL) <= 1UL)), p_9)) & 0x45L)) ^ l_81.f1);
            }
            for (g_25 = 0; (g_25 <= 2); g_25 += 1)
            { 
                if (l_107)
                    break;
                l_91 = 0x2B23C0CBL;
                if (p_8.f0)
                    continue;
            }
        }
    }
    if ((p_8.f0 <= (p_9 ^ 0xBB79L)))
    { 
        int64_t l_131 = (-1L);
        union U2 l_142 = {0xDDF6L};
        int32_t l_144 = 0x69B646BDL;
        uint32_t l_155 = 0x05CEAB9BL;
        uint64_t l_158 = 0x5C4DCCB4D10AE1D0LL;
        int32_t l_159 = 1L;
        if (((safe_sub_func_uint16_t_u_u(((-4L) != (safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((+1L), (!l_63))), (safe_rshift_func_uint16_t_u_s(p_9, 7)))), g_24.f3)), l_45[1][2][1]))), p_9)) <= 1L))
        { 
            uint16_t l_136 = 0x736BL;
            const int32_t l_143 = (-4L);
            for (p_9 = (-26); (p_9 >= 20); ++p_9)
            { 
                const int64_t l_126 = (-10L);
                l_91 = (safe_add_func_int64_t_s_s(l_126, (((((safe_add_func_uint16_t_u_u((p_9 && (((safe_mul_func_int8_t_s_s(l_131, (++g_31[2][0][3].f0))) < g_24.f0) && 0x11D2L)), g_31[2][0][3].f2)) , g_29) < 0x0E445E5FL) || g_31[2][0][3].f3.f3) , g_31[2][0][3].f3.f4)));
            }
            l_63 |= (g_10 , ((l_144 = ((safe_add_func_uint32_t_u_u((l_136--), (~(safe_sub_func_uint32_t_u_u(((l_142 , l_143) > l_131), 1UL))))) , 0L)) >= 3UL));
            l_144 = g_24.f2;
        }
        else
        { 
            const uint16_t l_156[2] = {0xAB0FL,0xAB0FL};
            uint8_t l_157 = 0xEBL;
            int i;
            l_159 &= ((safe_lshift_func_int16_t_s_s((g_31[2][0][3].f1 ^ (((((((safe_unary_minus_func_int8_t_s(((safe_add_func_uint32_t_u_u((((-1L) && 0x7AEA757CB99A68D6LL) ^ (g_31[2][0][3].f0 = (((g_25 = (safe_div_func_uint64_t_u_u((((((!(safe_mod_func_int8_t_s_s(((l_144 |= p_8.f0) , 0x46L), l_155))) > g_43) > l_156[0]) , l_157) > 0xB2L), p_8.f0))) & p_9) , l_131))), l_131)) != 0x07B9L))) || l_91) <= l_45[2][0][0]) ^ 0L) > g_29) > g_24.f0) & l_158)), 5)) == g_31[2][0][3].f3.f4);
        }
        if (((safe_lshift_func_int8_t_s_u(0xCAL, ((l_91 & ((safe_sub_func_int64_t_s_s((((~(-1L)) > ((safe_unary_minus_func_uint64_t_u((l_63 = l_159))) & 0x5F00511DE0336C12LL)) == l_166), g_31[2][0][3].f2)) | 4294967290UL)) && g_31[2][0][3].f3.f2))) != 1L))
        { 
            g_167++;
        }
        else
        { 
            uint32_t l_170[5];
            int i;
            for (i = 0; i < 5; i++)
                l_170[i] = 0x30AC00ABL;
            return l_170[0];
        }
        l_144 = 0xCD160633L;
    }
    else
    { 
        uint32_t l_171[4];
        int i;
        for (i = 0; i < 4; i++)
            l_171[i] = 0x5B12CC52L;
        l_171[1] = g_31[2][0][3].f3.f3;
    }
    return g_31[2][0][3].f3.f2;
}



static uint64_t  func_11(int64_t  p_12, struct S1  p_13, uint64_t  p_14)
{ 
    uint8_t l_37[1];
    int32_t l_38 = 0x195E1C37L;
    int8_t l_44 = 4L;
    int i;
    for (i = 0; i < 1; i++)
        l_37[i] = 0UL;
    l_44 = (safe_mod_func_int8_t_s_s(((safe_mod_func_int64_t_s_s((l_38 &= l_37[0]), p_13.f3.f4)) || (g_31[2][0][3].f3.f4 , (((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((l_38 = (g_43 = p_14)), l_37[0])), 0x10L)) , l_38) > g_31[2][0][3].f0))), 0xA0L));
    return p_13.f0;
}



static uint16_t  func_17(uint64_t  p_18, int8_t  p_19, struct S0  p_20, struct S0  p_21)
{ 
    uint32_t l_26[2][1][2];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_26[i][j][k] = 1UL;
        }
    }
    l_26[0][0][0]++;
    return g_24.f2;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);

    }
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    transparent_crc(g_24.f2, "g_24.f2", print_hash_value);
    transparent_crc(g_24.f3, "g_24.f3", print_hash_value);
    transparent_crc(g_24.f4, "g_24.f4", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_31[i][j][k].f0, "g_31[i][j][k].f0", print_hash_value);
                transparent_crc(g_31[i][j][k].f1, "g_31[i][j][k].f1", print_hash_value);
                transparent_crc(g_31[i][j][k].f2, "g_31[i][j][k].f2", print_hash_value);
                transparent_crc(g_31[i][j][k].f3.f0, "g_31[i][j][k].f3.f0", print_hash_value);
                transparent_crc(g_31[i][j][k].f3.f1, "g_31[i][j][k].f3.f1", print_hash_value);
                transparent_crc(g_31[i][j][k].f3.f2, "g_31[i][j][k].f3.f2", print_hash_value);
                transparent_crc(g_31[i][j][k].f3.f3, "g_31[i][j][k].f3.f3", print_hash_value);
                transparent_crc(g_31[i][j][k].f3.f4, "g_31[i][j][k].f3.f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
