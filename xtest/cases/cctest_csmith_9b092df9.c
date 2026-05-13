// SPDX-License-Identifier: MIT
// cctest_csmith_9b092df9.c --- cctest case csmith_9b092df9 (csmith seed 2601070073)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2ff7aaba */

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

// Options:   -s 2601070073 -o /tmp/csmith_gen_t1xzgsbp/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   int32_t  f1;
   int32_t  f2;
   const int32_t  f3;
};
#pragma pack(pop)

struct S1 {
   int32_t  f0;
   uint32_t  f1;
};

union U2 {
   uint8_t  f0;
   struct S1  f1;
};

union U3 {
   int64_t  f0;
   uint16_t  f1;
};


static int32_t g_2 = 0xD4F2887CL;
static uint32_t g_25 = 0xCCCAEA0AL;
static union U3 g_27[5] = {{9L},{9L},{9L},{9L},{9L}};
static uint32_t g_35 = 18446744073709551606UL;
static uint32_t g_36[2] = {6UL,6UL};
static uint16_t g_38 = 0x07B3L;
static int8_t g_42 = 0x9CL;
static struct S1 g_43[5] = {{0x889B05F6L,0UL},{0x889B05F6L,0UL},{0x889B05F6L,0UL},{0x889B05F6L,0UL},{0x889B05F6L,0UL}};
static int8_t g_53[5][2][1] = {{{0xD8L},{0xD8L}},{{0x3EL},{0xC3L}},{{0x3EL},{0xD8L}},{{0xD8L},{0x3EL}},{{0xC3L},{0x3EL}}};
static union U3 g_60 = {0x4995FB43C6211EE1LL};
static int16_t g_61 = (-9L);
static int16_t g_73 = 1L;
static uint16_t g_82 = 0x5B34L;
static int32_t g_83 = 0xF73BC91AL;
static int32_t g_92 = 1L;
static int64_t g_110 = 0xC9C96BA6EED5AC3CLL;
static uint64_t g_111 = 0x0B645EBEAA1EDCFELL;
static int64_t g_112 = 0xD30BDFC586C6A208LL;
static int16_t g_126 = (-6L);
static struct S0 g_131 = {0x05B716F66F7480E9LL,-8L,-4L,0xF8146101L};
static uint16_t g_163 = 1UL;
static uint16_t g_167 = 0xF85DL;
static union U2 g_204 = {0x7CL};
static uint16_t g_205[3] = {0xC208L,0xC208L,0xC208L};
static uint64_t g_214 = 0xCCD7554994F792DALL;
static int32_t g_240 = 1L;
static uint8_t g_241[2][1] = {{255UL},{255UL}};



static uint32_t  func_1(void);
static int32_t  func_5(int8_t  p_6, int32_t  p_7, uint64_t  p_8);
static int8_t  func_9(struct S0  p_10, int16_t  p_11, int8_t  p_12, const uint32_t  p_13, struct S1  p_14);
static uint32_t  func_18(int64_t  p_19, int32_t  p_20, int64_t  p_21, int8_t  p_22, union U3  p_23);




static uint32_t  func_1(void)
{ 
    struct S0 l_15 = {0x8D96378555145CCBLL,0L,0x245F5B1BL,0xFD43DDCAL};
    struct S1 l_40 = {0xB167D3D8L,0x1CE43C7DL};
    uint64_t l_323 = 0xBBA61E40FFE85CD8LL;
    for (g_2 = (-20); (g_2 != 28); g_2 = safe_add_func_uint16_t_u_u(g_2, 1))
    { 
        uint32_t l_26 = 1UL;
        const int32_t l_39[3][3][4] = {{{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}}};
        struct S1 l_331 = {0x2C0651DEL,8UL};
        int i, j, k;
        l_15.f1 = func_5(func_9(l_15, (g_38 = (l_15.f1 != (safe_add_func_uint32_t_u_u(func_18(g_2, (l_26 = (~(g_25 &= g_2))), g_2, g_2, g_27[4]), l_15.f0)))), l_15.f3, l_39[0][0][1], l_40), g_2, g_27[4].f0);
        for (g_240 = 0; (g_240 > (-9)); g_240--)
        { 
            int16_t l_330 = 0xB879L;
            if ((safe_mod_func_uint16_t_u_u((0x4EL != (((((((l_323 != (((0x393EL && (safe_rshift_func_uint8_t_u_s((g_241[1][0] = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(((g_27[4] = g_27[3]) , 5L), 11)), l_330))), g_214))) & l_15.f1) > 6L)) != 0xC381A5ED34DC5816LL) , 0x60L) != 254UL) >= g_131.f3) != g_60.f1) >= 0L)), l_39[2][2][2])))
            { 
                if (g_43[3].f0)
                    break;
                return g_53[3][1][0];
            }
            else
            { 
                struct S1 l_332 = {-1L,0xF2C8D41CL};
                l_332 = l_331;
                if (l_39[2][0][3])
                    break;
            }
        }
        for (g_126 = 0; (g_126 < (-10)); g_126--)
        { 
            uint32_t l_335 = 18446744073709551611UL;
            l_335 = g_241[1][0];
        }
    }
    return l_15.f1;
}



static int32_t  func_5(int8_t  p_6, int32_t  p_7, uint64_t  p_8)
{ 
    uint64_t l_47[5];
    int32_t l_48 = 0xE1C21029L;
    int8_t l_80 = (-1L);
    int64_t l_81 = 0x73440B9FCDB2BF7FLL;
    uint16_t l_90 = 0x15A1L;
    int8_t l_124[4];
    uint32_t l_125 = 0x0FD48341L;
    struct S1 l_215 = {0x76F3A889L,4294967295UL};
    struct S1 l_216 = {1L,0UL};
    struct S0 l_219 = {18446744073709551615UL,0x422BFBABL,-7L,0xF50AE741L};
    uint8_t l_246 = 0x81L;
    union U2 l_303 = {0x18L};
    int i;
    for (i = 0; i < 5; i++)
        l_47[i] = 0UL;
    for (i = 0; i < 4; i++)
        l_124[i] = 0L;
    if ((g_53[3][1][0] = (+(safe_div_func_int16_t_s_s(p_8, (0x2FC3L ^ ((l_48 = l_47[0]) | (safe_div_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(g_38, g_38)) & l_47[4]), l_47[2])))))))))
    { 
        int32_t l_58[3];
        int32_t l_59 = (-5L);
        int i;
        for (i = 0; i < 3; i++)
            l_58[i] = 0x08D7EBC4L;
        for (g_35 = 0; (g_35 <= 0); g_35 += 1)
        { 
            uint16_t l_62 = 65535UL;
            g_61 = (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(0x2EL, 3)) | (l_58[1] |= g_38)), ((l_59 , (g_60 , l_47[1])) == 0xE3B5L)));
            for (p_7 = 0; (p_7 <= 0); p_7 += 1)
            { 
                l_62++;
            }
        }
        g_73 &= (safe_rshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((l_58[1] <= (safe_mod_func_int64_t_s_s(p_7, g_43[3].f0))) || (g_43[3].f0 > 0x0D26BC8BL)), 14)), 0x22F5L)) < p_6), 10));
        p_7 = ((0x40BBFB6FL != (((p_6 == g_73) < ((safe_add_func_uint8_t_u_u(((((safe_add_func_int8_t_s_s((((((g_42 , g_38) != g_53[2][0][0]) == 0x13B6624E94FA9F1ELL) & 0L) <= l_80), l_58[1])) && l_47[1]) | 0x8B36L) || g_60.f1), g_27[4].f0)) == l_81)) >= l_47[2])) != l_47[4]);
    }
    else
    { 
        uint16_t l_84 = 0x91EEL;
        int32_t l_97[1];
        int i;
        for (i = 0; i < 1; i++)
            l_97[i] = 0xF170B72FL;
        for (p_6 = 1; (p_6 >= 0); p_6 -= 1)
        { 
            int i;
            p_7 = (g_82 = l_47[(p_6 + 3)]);
            for (l_81 = 0; (l_81 <= 0); l_81 += 1)
            { 
                union U3 l_89 = {1L};
                uint64_t l_91 = 0x39639DBCFCC2E186LL;
                int i;
                l_84++;
                p_7 &= g_36[p_6];
                g_92 = (((((p_8 <= (((((safe_sub_func_uint8_t_u_u(0x07L, (l_89 , (l_90 ^= ((p_7 ^ 6UL) | g_36[p_6]))))) && 0xF1C2FFF4405564ACLL) , l_91) <= p_8) > p_7)) != p_8) >= g_35) >= p_8) != 0xFEE68117L);
            }
        }
        for (g_60.f0 = 1; (g_60.f0 <= 4); g_60.f0 += 1)
        { 
            uint32_t l_106 = 3UL;
            int32_t l_109 = 0xB3FD2CF1L;
            for (l_48 = 0; (l_48 <= 4); l_48 += 1)
            { 
                int16_t l_107 = 0x3906L;
                int32_t l_108 = 0x37F146A4L;
                g_111 = (g_110 ^= (p_7 = (safe_lshift_func_int16_t_s_s((1L | (((safe_lshift_func_uint16_t_u_s(0xDB0AL, (l_97[0] = g_36[1]))) > (safe_mul_func_int16_t_s_s((l_109 = ((l_108 &= (safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s(l_106, p_7)), g_27[4].f1)), l_107))) < p_8)), g_43[3].f1))) ^ 0x71CFL)), l_84))));
                g_112 = l_97[0];
                g_126 = (l_109 <= (~(((p_6 == (safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((0x64D79107L != (safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((l_81 || 2L) < 0x1AL), l_97[0])), l_84))), l_124[3])), l_125)), g_61))) >= g_27[4].f0) != (-6L))));
            }
            p_7 |= 0x52E2A0ADL;
        }
    }
    if (((safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_90, p_6)), p_7)) <= (((g_131 , l_47[1]) < l_48) ^ g_82)))
    { 
        struct S0 l_138 = {0xDA5772CEC79C0CF3LL,0x239E70C8L,-4L,-7L};
        if ((safe_mul_func_int8_t_s_s((((((safe_lshift_func_int8_t_s_u((0x929A3F8350F044E6LL != (safe_rshift_func_int16_t_s_u(p_7, 1))), 4)) && (l_138 , ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((l_48 = l_138.f1), g_131.f3)), 1)), l_138.f3)), 6)) , 4L))) <= 7UL) == p_7) == g_53[2][0][0]), l_124[3])))
        { 
            int64_t l_161 = 0xC76D5E06014FA95BLL;
            int32_t l_162 = (-1L);
            int32_t l_165[2];
            int i;
            for (i = 0; i < 2; i++)
                l_165[i] = 0x8CB1B8CCL;
            for (g_61 = (-8); (g_61 >= 2); g_61 = safe_add_func_uint8_t_u_u(g_61, 6))
            { 
                uint16_t l_151 = 0x4AACL;
                p_7 = (safe_lshift_func_uint8_t_u_s(g_131.f1, l_151));
            }
            for (l_138.f1 = 3; (l_138.f1 >= 0); l_138.f1 -= 1)
            { 
                uint8_t l_164 = 0x85L;
                int32_t l_166 = 4L;
                g_131.f1 &= 0x636CF237L;
                l_165[0] |= ((p_7 = (safe_mod_func_uint8_t_u_u((l_164 = (g_163 = (l_162 = (g_131 , ((safe_div_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((l_161 = (safe_rshift_func_int16_t_s_s(((((g_112 &= ((1L <= ((~l_138.f0) , 0x7B2BL)) , 0x2647FD4F96F3BD68LL)) , g_42) < 0x414D135FL) > 1UL), g_35))), l_81)) && p_7), g_38)) > 8UL))))), 0x64L))) < g_42);
                g_167--;
            }
            for (g_112 = 23; (g_112 < 28); g_112++)
            { 
                int32_t l_174 = 0x1E43403CL;
                int32_t l_190[4] = {0xC4B41F84L,0xC4B41F84L,0xC4B41F84L,0xC4B41F84L};
                int32_t l_191 = 7L;
                int i;
                p_7 &= (((safe_mod_func_int32_t_s_s((0x295CL != (((l_138.f1 ^= g_35) > l_174) >= ((safe_mul_func_int16_t_s_s(((((l_162 |= 0x8EL) , g_131.f3) , g_53[0][0][0]) && 0x7DL), p_8)) == g_61))), l_47[0])) & 0UL) , g_167);
                g_131.f1 ^= (safe_sub_func_uint32_t_u_u((p_8 && (((safe_add_func_uint32_t_u_u(((l_190[3] &= (~((g_131.f0 = (safe_mul_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((l_174 = ((safe_div_func_int32_t_s_s(g_110, g_92)) , p_8)), g_131.f3)), l_125)) <= 1UL), (-3L)))) == 0xD4EF8352AC2D4355LL))) != l_47[0]), l_191)) & p_6) , g_36[0])), g_27[4].f1));
            }
        }
        else
        { 
            uint32_t l_201 = 0xAC483EC6L;
            g_131.f1 ^= ((safe_add_func_int64_t_s_s((-10L), ((safe_lshift_func_uint8_t_u_s((l_124[3] , (((!(((safe_rshift_func_int16_t_s_s(p_8, (((safe_add_func_uint16_t_u_u(65535UL, l_201)) , g_60.f0) , 0xD3F7L))) && g_43[3].f1) <= p_7)) == l_47[4]) || 0x12AAL)), p_6)) >= p_8))) | p_8);
        }
        if (((l_90 <= p_6) == (safe_lshift_func_int16_t_s_u((g_204 , (((p_7 = p_7) , l_124[2]) > l_47[0])), 15))))
        { 
            int8_t l_213 = 1L;
            g_205[2]--;
            for (g_92 = 0; (g_92 == 20); g_92++)
            { 
                g_214 ^= (+(g_131.f1 = (safe_mod_func_uint16_t_u_u(g_43[3].f0, l_213))));
                l_48 = (0xD2ABL || (l_213 || (((l_138.f1 = 0UL) && (p_7 = 0x0BB03CE5L)) & g_43[3].f1)));
            }
            l_216 = (g_43[3] = ((p_8 || p_8) , l_215));
        }
        else
        { 
            uint16_t l_222[4];
            int i;
            for (i = 0; i < 4; i++)
                l_222[i] = 0xCE2FL;
            if (((safe_rshift_func_int16_t_s_u((0L & (l_219 , p_7)), 6)) || (safe_div_func_uint16_t_u_u(0xC25DL, 6L))))
            { 
                g_43[1] = g_43[3];
                return l_222[3];
            }
            else
            { 
                uint16_t l_223[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_223[i] = 8UL;
                l_223[2] = p_7;
            }
        }
    }
    else
    { 
        int32_t l_236 = 2L;
        struct S1 l_244 = {0x65F52896L,4294967287UL};
        int32_t l_245 = 0L;
        union U3 l_262 = {0L};
        struct S0 l_268 = {0xB949037EE49142F9LL,0x578CB152L,1L,0x0AD5FBB0L};
        int32_t l_304 = 0x4B632DDBL;
        if (g_92)
        { 
            struct S1 l_227 = {0xC80609C4L,0xC9F8D510L};
            uint32_t l_238 = 18446744073709551615UL;
            if (g_131.f3)
            { 
                g_131.f1 |= g_126;
                p_7 = ((0x54A653397D4F8AA3LL && p_6) && ((g_35 , (~(safe_mul_func_int16_t_s_s(0L, p_7)))) < p_6));
            }
            else
            { 
                const uint32_t l_237 = 4294967289UL;
                int32_t l_239 = 1L;
                l_238 = (((g_43[1] = (g_204.f1 = l_227)) , (+(p_6 < ((((p_6 == (safe_add_func_uint64_t_u_u(((safe_div_func_uint8_t_u_u((((+(g_43[3].f1 = (safe_rshift_func_uint8_t_u_s(p_8, 5)))) & l_236) != g_27[4].f0), p_7)) & l_237), 0x443E91BF3A08C533LL))) , l_227.f1) || g_53[3][1][0]) , g_204.f1.f0)))) != 0xAA7DC95DA5780539LL);
                g_241[1][0]++;
            }
            l_215 = l_244;
        }
        else
        { 
            uint32_t l_267 = 0xAB4C20C9L;
            g_131.f1 = 0xFD6FEA03L;
            l_246++;
            p_7 = (safe_sub_func_int8_t_s_s(((!(safe_mul_func_int16_t_s_s((l_245 , (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((0xFDA3CCD9C671D187LL < (safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((l_262 , ((safe_add_func_uint64_t_u_u((((l_267 &= (((safe_lshift_func_uint16_t_u_u(g_205[0], g_240)) || 0xAD02DB24L) != l_236)) & 252UL) , 0x65507AC6EEFEC2FFLL), 1UL)) == 0xDBCCL)) & p_6), g_241[1][0])) == 1UL), 65535UL))), 9)), 255UL))), 0x96B8L))) > 0xA563L), 0x36L));
        }
        p_7 |= (g_240 ^= (l_219.f1 >= ((l_268 , 0x9DAA66EDL) == p_6)));
        if ((safe_unary_minus_func_uint8_t_u(((((safe_lshift_func_int16_t_s_s((p_7 >= ((l_219.f1 = (safe_unary_minus_func_uint32_t_u(((g_214 |= g_2) || (safe_mul_func_int8_t_s_s(1L, p_8)))))) ^ g_36[0])), 2)) , g_92) < p_8) || (-1L)))))
        { 
            int64_t l_305 = 4L;
            int32_t l_306 = 0x703A3690L;
lbl_310:
            for (l_216.f0 = 4; (l_216.f0 >= 0); l_216.f0 -= 1)
            { 
                int64_t l_307 = (-9L);
                uint32_t l_308 = 18446744073709551609UL;
                int8_t l_309 = 0x07L;
                if (p_6)
                    break;
                if (g_38)
                    goto lbl_310;
                l_309 = (safe_add_func_uint8_t_u_u((((((((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((((((-1L) & (((((safe_mul_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((l_306 = (safe_mul_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((l_304 = ((((((l_245 | ((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_80 || (safe_mod_func_int32_t_s_s(((g_61 = (((-9L) ^ g_25) & 18446744073709551615UL)) , g_240), p_6))), g_36[1])), l_124[3])) || (-4L)), p_7)) <= p_8)) , l_303) , p_8) , g_163) > p_6) > 0x6C7ACA80L)) && l_305), p_8)), l_262.f1)), p_6)) > 4294967290UL) ^ l_215.f0) < 255UL), p_8))), 0x62E3C5A3L)) != 6UL), 0x8FL)) ^ p_7) < g_131.f3) <= 0xAB9F46A099E6CCCALL) < p_8)) , g_38) <= g_240) <= p_6), 0xC902FF42L)) , g_214), g_131.f3)), l_219.f3)) , g_36[0]) && g_60.f1) == l_307) & l_262.f1) & g_36[0]) ^ l_308), l_308));
            }
            p_7 = 0x10CD837AL;
            for (g_83 = 14; (g_83 >= 2); g_83 = safe_sub_func_int16_t_s_s(g_83, 1))
            { 
                int64_t l_313 = 1L;
                l_313 |= l_305;
            }
        }
        else
        { 
            uint32_t l_314 = 0xE1DBADABL;
            --l_314;
        }
    }
    l_48 ^= 1L;
    return p_7;
}



static int8_t  func_9(struct S0  p_10, int16_t  p_11, int8_t  p_12, const uint32_t  p_13, struct S1  p_14)
{ 
    uint32_t l_41[3][5][1] = {{{3UL},{0xAB883EB9L},{4294967292UL},{0xAB883EB9L},{3UL}},{{0x1E173482L},{0x1E173482L},{3UL},{0xAB883EB9L},{4294967292UL}},{{0xAB883EB9L},{3UL},{0x1E173482L},{0x1E173482L},{3UL}}};
    int i, j, k;
    g_42 |= (l_41[2][1][0] &= (g_27[4].f0 && (p_14.f1 < p_10.f3)));
    g_43[3] = p_14;
    return p_10.f2;
}



static uint32_t  func_18(int64_t  p_19, int32_t  p_20, int64_t  p_21, int8_t  p_22, union U3  p_23)
{ 
    int64_t l_37 = 0L;
    g_36[0] = (~(0x390F3BD7L == (g_27[4].f0 && (g_35 = (safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((g_27[4].f1 != (safe_add_func_int32_t_s_s((g_25 ^ p_21), 0x015E0C0AL))), p_23.f1)), g_27[4].f1))))));
    return l_37;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_27[i].f0, "g_27[i].f0", print_hash_value);
        transparent_crc(g_27[i].f1, "g_27[i].f1", print_hash_value);

    }
    transparent_crc(g_35, "g_35", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_36[i], "g_36[i]", print_hash_value);

    }
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_43[i].f0, "g_43[i].f0", print_hash_value);
        transparent_crc(g_43[i].f1, "g_43[i].f1", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_53[i][j][k], "g_53[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_60.f1, "g_60.f1", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_131.f0, "g_131.f0", print_hash_value);
    transparent_crc(g_131.f1, "g_131.f1", print_hash_value);
    transparent_crc(g_131.f2, "g_131.f2", print_hash_value);
    transparent_crc(g_131.f3, "g_131.f3", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_205[i], "g_205[i]", print_hash_value);

    }
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_241[i][j], "g_241[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
