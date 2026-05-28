// SPDX-License-Identifier: MIT
// cctest_csmith_64f9832b.c --- cctest case csmith_64f9832b (csmith seed 1694073643)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3ec178ed */
/* @exp_ticks 0x454d */

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

// Options:   -s 1694073643 -o /tmp/csmith_gen_ler4a3tc/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int8_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
   uint32_t  f1;
};


static uint64_t g_15 = 0x7CD95DA2282D564CLL;
static int8_t g_34 = (-8L);
static uint8_t g_61 = 6UL;
static int32_t g_63 = 0x2EA9177CL;
static uint32_t g_85 = 0x56CF859EL;
static uint32_t g_94[1][2] = {{0x697C72F7L,0x697C72F7L}};
static uint32_t g_99 = 0xE9127F4FL;
static int8_t g_101[2] = {0xC2L,0xC2L};
static uint8_t g_105[4][4] = {{255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL}};
static int32_t g_112 = 1L;
static int32_t g_149 = 0x06941ECEL;
static uint8_t g_152 = 4UL;
static uint32_t g_158 = 4294967290UL;
static union U2 g_160 = {1L};
static int32_t g_180 = 6L;
static int16_t g_198 = 9L;
static struct S0 g_203 = {0xDDL};
static struct S1 g_205 = {0x9B22A78FL};
static int64_t g_208 = 0x4D31E59140E63735LL;
static uint16_t g_210 = 0x54C5L;
static uint8_t g_302 = 0xBAL;
static int32_t g_324 = 0x92E5B338L;
static uint8_t g_326[1] = {0xE0L};
static uint32_t g_378 = 4294967295UL;
static int64_t g_381 = 1L;
static uint32_t g_382[4] = {2UL,2UL,2UL,2UL};
static int32_t g_439 = (-6L);
static int32_t g_474 = 4L;
static int64_t g_475 = 7L;
static int32_t g_544[2][4][3] = {{{(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L)}},{{(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L)}}};
static int32_t g_568 = 0xAD507E42L;



static int16_t  func_1(void);
static int32_t  func_2(int32_t  p_3, int32_t  p_4, int16_t  p_5, uint32_t  p_6, int8_t  p_7);
static int32_t  func_26(uint32_t  p_27, const int64_t  p_28, uint64_t  p_29, int32_t  p_30, int64_t  p_31);
static int32_t  func_53(int16_t  p_54, int32_t  p_55, uint8_t  p_56, int16_t  p_57, const int8_t  p_58);




static int16_t  func_1(void)
{ 
    uint32_t l_8 = 0xD2D672A8L;
    int32_t l_157 = 1L;
    struct S0 l_179[1] = {{-4L}};
    int8_t l_204 = (-1L);
    int32_t l_254 = 0x96B2D16AL;
    uint64_t l_282 = 0x176A08454084CDB1LL;
    uint32_t l_307[4][4] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
    const uint8_t l_320 = 252UL;
    int8_t l_329 = (-1L);
    int64_t l_362[4][1][2];
    int64_t l_377 = 0L;
    uint32_t l_412 = 0xFF92C7C0L;
    struct S0 l_446 = {0x39L};
    union U2 l_471 = {0x75FB35C9L};
    uint32_t l_476[4][3][2] = {{{5UL,5UL},{5UL,5UL},{5UL,5UL}},{{5UL,5UL},{5UL,5UL},{5UL,5UL}},{{5UL,5UL},{5UL,5UL},{5UL,5UL}},{{5UL,5UL},{5UL,5UL},{5UL,5UL}}};
    int32_t l_515 = 1L;
    const int32_t l_518 = 0x6D6041ADL;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_362[i][j][k] = 0xCB2E228B8E5CF127LL;
        }
    }
lbl_451:
    if (func_2((l_8 < (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(((g_158 &= ((safe_sub_func_uint8_t_u_u((l_157 = (g_105[1][1] = (g_15 & (safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((((((safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((func_26((0x162C5D177CCE45D7LL & l_8), g_15, l_8, l_8, g_15) ^ g_15) >= 0xDA45L), l_8)), g_149)) | 0xE931907E6BEB08D4LL) , l_8) || g_105[1][1]) && g_61), g_149)), l_8)), g_15))))), 0x52L)) || l_157)) || l_8), 6)), l_8))), l_8, l_8, g_15, l_8))
    { 
        int8_t l_178[3][3] = {{0xA2L,0xA2L,0xA2L},{1L,1L,1L},{0xA2L,0xA2L,0xA2L}};
        int32_t l_207[1][1];
        uint8_t l_244 = 0x06L;
        struct S1 l_261[4] = {{0x9C39E361L},{0x9C39E361L},{0x9C39E361L},{0x9C39E361L}};
        uint64_t l_277 = 0x2663875D3E32F461LL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_207[i][j] = 0x18868046L;
        }
        if (g_101[1])
        { 
            return g_94[0][0];
        }
        else
        { 
            uint16_t l_165 = 65535UL;
            uint32_t l_177 = 0x0677AA02L;
            if (g_160.f0)
            { 
                const int32_t l_175 = (-1L);
                uint16_t l_176[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_176[i] = 0xD8A0L;
                l_165 = g_101[0];
                g_112 = (((g_61 & (g_160.f1 <= ((safe_sub_func_uint8_t_u_u((((((((safe_unary_minus_func_uint64_t_u((l_176[1] = (safe_add_func_uint64_t_u_u(((0xDDL <= ((l_165 != 0xEAL) , l_175)) ^ g_15), g_160.f1))))) & l_165) != 9L) || l_157) <= g_158) ^ 0UL) | l_177), l_178[2][1])) < 0UL))) , g_112) , g_152);
            }
            else
            { 
                g_112 = ((g_105[3][3] , l_179[0]) , (-2L));
                g_180 = 2L;
            }
            for (l_165 = 0; (l_165 != 42); ++l_165)
            { 
                uint32_t l_191[1];
                int32_t l_197 = 1L;
                int i;
                for (i = 0; i < 1; i++)
                    l_191[i] = 0x6D0B45DCL;
                g_112 ^= (g_160 , (safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((--l_191[0]) > ((g_198 = (safe_div_func_uint32_t_u_u(l_8, (~(((((-1L) == (((g_63 != l_197) <= 0L) != g_101[0])) > g_180) != 0xD186L) , l_177))))) & g_34)), (-2L))), l_179[0].f0)), (-6L))), g_105[0][0])));
            }
        }
        if ((l_204 = (safe_add_func_int64_t_s_s(g_15, ((g_160.f0 || (safe_mod_func_uint64_t_u_u((g_203 , (l_178[2][1] | 18446744073709551613UL)), 0x79EB32EB6C46BC49LL))) != l_157)))))
        { 
            g_205 = g_205;
        }
        else
        { 
            int32_t l_206 = 0xB3155C3DL;
            int32_t l_209 = 0x9080DE7FL;
            g_210--;
            l_207[0][0] = ((safe_lshift_func_int16_t_s_s(((g_160.f0 && (safe_rshift_func_int16_t_s_u((((safe_add_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((l_206 = ((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(((safe_lshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((g_15 = g_210), 1UL)), (safe_add_func_uint8_t_u_u((g_61 |= ((-6L) < l_204)), l_209)))), 7)) | g_180))), g_203.f0)) != l_207[0][0])), (-6L))) == 5L), g_99)) != l_209) <= g_112), 3))) == g_160.f0), 3)) <= g_105[1][1]);
            g_180 = 0x90B164A0L;
        }
        if ((l_207[0][0] = 0xDC15FB23L))
        { 
            int16_t l_242 = 0xF8F9L;
            g_180 = (safe_rshift_func_uint16_t_u_s(0xCA45L, (safe_sub_func_uint64_t_u_u((g_15 = l_157), 18446744073709551614UL))));
            if ((0xE6BB7969L & l_8))
            { 
                uint32_t l_236 = 0xA7BB412DL;
                uint8_t l_243 = 255UL;
                l_236 &= g_160.f0;
                l_207[0][0] = (((g_85 , (safe_mul_func_uint16_t_u_u(0x7ED4L, g_152))) , (safe_div_func_int8_t_s_s((~((g_210 | 1UL) <= 0L)), g_160.f0))) > l_242);
                l_244 = l_243;
            }
            else
            { 
                g_180 = (-1L);
                return l_242;
            }
        }
        else
        { 
            struct S1 l_245 = {0x6ACA0D50L};
            int32_t l_257 = 1L;
            if ((0x874B10D0L >= 0x3AEC1A99L))
            { 
                uint64_t l_260 = 0xC271D09A1BDC9895LL;
                l_245 = g_205;
                l_207[0][0] = 1L;
                g_160.f0 = ((safe_sub_func_int8_t_s_s(0x11L, g_180)) | (((g_152 = ((g_198 = ((((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_div_func_uint8_t_u_u((g_105[3][3] = l_244), ((((g_94[0][0]--) & (((((g_15++) <= 0xDAE8A341D8F6A000LL) > 9L) , g_149) <= 0x7EC9DE8AL)) < g_208) ^ l_260))), l_204)), g_101[1])) ^ 1L) == g_203.f0) != 0x2BL)) , 0UL)) > l_260) && l_254));
            }
            else
            { 
                struct S1 l_262 = {4UL};
                int32_t l_271 = (-1L);
                int16_t l_276 = 1L;
                l_262 = l_261[2];
                l_271 |= ((g_203.f0 ^= (!(safe_div_func_uint64_t_u_u(g_101[1], (((safe_mod_func_int8_t_s_s(((g_205.f0 < (((l_261[2].f0 == (safe_sub_func_uint8_t_u_u((~0x8030L), l_179[0].f0))) >= g_198) | (-1L))) && l_207[0][0]), 3UL)) != g_112) ^ g_61))))) <= 3UL);
                g_160.f0 ^= (g_205.f0 , (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(1L, (l_276 >= (l_257 , g_208)))), l_277)));
            }
        }
    }
    else
    { 
        const int8_t l_285 = 4L;
        int32_t l_286 = 0x9FD57E78L;
        struct S1 l_299 = {4294967295UL};
        int32_t l_335 = 0xC2D40B3AL;
        if (((safe_div_func_int16_t_s_s(((l_254 <= (safe_mul_func_int8_t_s_s(((g_112 = (l_286 &= ((g_101[0] > l_282) <= (((((safe_div_func_uint64_t_u_u(((g_203 , 1UL) , l_285), g_105[0][1])) , 1L) >= 0x67L) >= 0xA3AA631CL) == (-1L))))) >= 0x818F363EL), 0xD2L))) & 3UL), 1UL)) == l_285))
        { 
            uint8_t l_297 = 255UL;
            int32_t l_301 = 1L;
            if (((g_160.f1 , (safe_mul_func_int8_t_s_s((g_85 <= ((safe_mul_func_int16_t_s_s(1L, (l_282 || l_204))) ^ 0x4350L)), g_198))) == l_285))
            { 
                int16_t l_296 = 0L;
                struct S0 l_298 = {0L};
                l_297 &= (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_99, l_282)), (((((!g_180) ^ 2UL) , l_296) , 0x1E4C70D5L) , g_160.f1)));
                l_298 = g_203;
            }
            else
            { 
                uint8_t l_300 = 0x48L;
                g_205 = l_299;
                g_160.f0 = l_300;
                --g_302;
            }
            l_307[2][2] ^= (safe_add_func_int64_t_s_s(((g_160 = g_160) , (l_301 = 0x53128589467803C6LL)), 0x0B4B0661EEF8BF8ALL));
        }
        else
        { 
            int8_t l_308 = (-8L);
            int32_t l_322[4] = {0x57686BE3L,0x57686BE3L,0x57686BE3L,0x57686BE3L};
            uint64_t l_330 = 0UL;
            int i;
            if (l_299.f0)
            { 
                uint16_t l_309 = 65529UL;
                int32_t l_321 = 7L;
                l_309--;
                l_286 ^= (g_160.f0 != l_299.f0);
                l_321 = (safe_sub_func_int32_t_s_s((-5L), (((safe_rshift_func_int16_t_s_u((((+((((((0x5DL != g_210) < (((safe_unary_minus_func_uint64_t_u(((safe_lshift_func_int8_t_s_s(((((g_205.f0 = g_105[1][1]) | (-6L)) != l_309) > 4294967287UL), l_308)) > l_308))) && l_8) , g_160.f1)) == (-8L)) < g_160.f1) , 0x96EFL) == l_320)) <= g_203.f0) | g_15), g_198)) >= l_308) != l_308)));
            }
            else
            { 
                int8_t l_323 = 1L;
                int32_t l_325 = 0x6D628401L;
                g_160.f0 = g_152;
                g_326[0]++;
            }
            --l_330;
        }
        for (g_203.f0 = (-30); (g_203.f0 <= (-21)); g_203.f0++)
        { 
            uint32_t l_336 = 0x6FE93697L;
            struct S1 l_343[2] = {{0xA5F7D971L},{0xA5F7D971L}};
            int16_t l_361 = 1L;
            int32_t l_368[1][4][2];
            int8_t l_413[2][4];
            uint16_t l_415 = 65535UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_368[i][j][k] = 1L;
                }
            }
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_413[i][j] = 0L;
            }
            --l_336;
            if ((safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((((l_343[0] = g_205) , ((safe_sub_func_int16_t_s_s(((safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s(g_99, ((safe_rshift_func_int16_t_s_u((1UL ^ ((g_198 |= (safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((g_210 = ((+(safe_sub_func_uint64_t_u_u((g_15--), (l_343[0].f0 > g_99)))) ^ l_343[0].f0)) & l_335), 65531UL)), g_94[0][0]))) > 7L)), 6)) , g_101[0]))), l_361)) & 18446744073709551606UL), 0xC302L)) <= 1UL)) <= g_160.f0), l_361)) <= l_362[3][0][1]), 7)))
            { 
                uint32_t l_363[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_363[i] = 1UL;
                --l_363[2];
            }
            else
            { 
                if (l_320)
                    break;
                l_368[0][1][0] = (safe_mod_func_uint8_t_u_u(1UL, 0xCCL));
            }
            if ((((g_94[0][0] > (l_286 = (g_94[0][0] != ((((0xEC93D442L | ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((l_8 , l_286), l_179[0].f0)), 5)) , g_85), 1)) , 0UL)) , l_286) , 9L) & l_307[2][2])))) | g_152) && l_285))
            { 
                g_160.f0 = g_210;
                --g_378;
            }
            else
            { 
                int16_t l_403[4];
                int32_t l_414 = 0xBBA9DA10L;
                int i;
                for (i = 0; i < 4; i++)
                    l_403[i] = 0x8B36L;
                --g_382[3];
                l_414 = ((safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((((((safe_add_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((g_34 |= (safe_rshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((l_329 ^ (l_403[1] >= ((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((g_205 , (((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(l_254, l_412)), 1)) <= g_61) && 0x561AL)), 0x3194L)), g_101[0])) | g_381))) , g_105[3][1]) == l_343[0].f0), 1L)), 0x8EL)) || g_94[0][1]), 9))), g_302)), 4)), g_101[0])), 0x9B08L)) <= g_210) , g_180) > g_63) & l_362[1][0][1]), g_149)) ^ g_99), l_413[1][0])) < l_285);
                l_415--;
            }
        }
        for (l_204 = 0; (l_204 >= 0); l_204 -= 1)
        { 
            int16_t l_418 = 1L;
            return l_418;
        }
    }
    if ((0x22L || ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((g_160 = g_160) , ((l_362[3][0][1] | (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((-1L), 8UL)), l_179[0].f0))) < 0xC548D682L)), 3)), g_61)) >= g_61)))
    { 
        int16_t l_429 = 0xD436L;
        for (g_198 = 0; (g_198 < 26); ++g_198)
        { 
            int16_t l_430 = 1L;
            int32_t l_431 = (-2L);
            uint8_t l_432 = 0x31L;
            l_432++;
        }
        g_180 = l_157;
    }
    else
    { 
        uint16_t l_440 = 0x5F0EL;
        int32_t l_441 = 0x69BFDA5EL;
        if ((18446744073709551615UL && g_324))
        { 
            for (g_198 = 3; (g_198 >= 0); g_198 -= 1)
            { 
                int i;
                return g_382[g_198];
            }
            return g_381;
        }
        else
        { 
            uint32_t l_437[2];
            int32_t l_438[1];
            int i;
            for (i = 0; i < 2; i++)
                l_437[i] = 3UL;
            for (i = 0; i < 1; i++)
                l_438[i] = 0xAE306835L;
            g_439 &= (l_179[0] , (safe_rshift_func_int8_t_s_u(l_8, ((((l_438[0] ^= (l_437[0] &= g_326[0])) | (l_157 = l_377)) & (-1L)) & 1L))));
            l_441 = (l_440 = g_15);
        }
        for (g_205.f0 = 20; (g_205.f0 > 2); --g_205.f0)
        { 
            return l_441;
        }
    }
    if ((((safe_mod_func_uint16_t_u_u(((((l_446 = l_446) , (safe_mod_func_uint64_t_u_u(g_99, 1UL))) | l_282) || l_8), l_8)) != 0x69L) == l_157))
    { 
        uint32_t l_466 = 0xBC06D509L;
        int32_t l_467[4][2] = {{0x815F8AACL,0x815F8AACL},{0L,0x815F8AACL},{0x815F8AACL,0L},{0x815F8AACL,0x815F8AACL}};
        int32_t l_468 = 0x69416652L;
        int i, j;
        for (g_112 = 0; (g_112 <= (-27)); g_112 = safe_sub_func_int8_t_s_s(g_112, 2))
        { 
            if (g_302)
            { 
                if (g_152)
                    goto lbl_451;
            }
            else
            { 
                if (l_377)
                    goto lbl_451;
                return g_382[3];
            }
        }
        if ((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((safe_div_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_u(g_152, 12)) == ((safe_add_func_int16_t_s_s(g_63, 0x38D3L)) | (l_468 = (((((~((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u((g_160 , 0xA0EE2407L))) | 0xAAL), l_466)) ^ l_467[0][0])) && l_362[3][0][1]) == l_377) , l_467[2][0]) >= 0UL)))), g_158)) <= 0xB590AB40L), 0UL)), 4294967295UL)))
        { 
            for (l_282 = 0; (l_282 <= 1); l_282 += 1)
            { 
                return g_158;
            }
        }
        else
        { 
            uint64_t l_469 = 0x19F553E666A5D62FLL;
            int32_t l_470 = (-10L);
            int32_t l_502[5][4] = {{0L,(-5L),0L,0x0662817EL},{0xE91593D3L,(-5L),0xCB72E411L,0x94574DB8L},{(-5L),0x5E07C7A1L,0x5E07C7A1L,(-5L)},{0L,0x94574DB8L,0x5E07C7A1L,0x0662817EL},{(-5L),0xE91593D3L,0xCB72E411L,0xE91593D3L}};
            int i, j;
            if (((l_469 = g_105[1][1]) & (g_205 , (l_468 &= (l_470 >= (l_471 , g_205.f0))))))
            { 
                int8_t l_472 = 1L;
                l_472 ^= g_15;
            }
            else
            { 
                int16_t l_473[3];
                int32_t l_499 = 0xBA598CCEL;
                int i;
                for (i = 0; i < 3; i++)
                    l_473[i] = 9L;
                --l_476[2][1][1];
                l_499 = (g_439 = ((g_208 = (safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(l_446.f0, ((1L == (safe_lshift_func_uint16_t_u_u((--g_210), 13))) < l_469))) , (g_203.f0 &= (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s((((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((l_476[2][1][1] || 1L), 1)), 0UL)) | 0x6FA0L) || g_15), g_198)) == g_382[0]), 9)), 0xBBF4L)))), l_469)), l_473[1]))) != g_160.f0));
                l_468 |= (safe_mul_func_uint8_t_u_u(l_362[0][0][0], l_8));
            }
            l_470 ^= g_99;
            l_502[4][1] = ((g_324 = l_320) , g_474);
        }
    }
    else
    { 
        const uint8_t l_526 = 0x73L;
        uint64_t l_527 = 0UL;
        uint8_t l_534[2][2];
        int32_t l_548 = 0xC87DFD15L;
        uint32_t l_572 = 4294967295UL;
        struct S1 l_574[5] = {{0x52937184L},{0x52937184L},{0x52937184L},{0x52937184L},{0x52937184L}};
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_534[i][j] = 0x98L;
        }
        l_471.f0 &= (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_152, 3)), ((safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((((safe_div_func_uint64_t_u_u((l_157 |= l_515), (g_381 = (g_61 , ((safe_add_func_int32_t_s_s(l_518, (-10L))) , l_204))))) >= l_476[2][1][1]) > l_254), l_204)), g_198)), g_474)) & g_101[0])));
        g_112 = (safe_mul_func_uint8_t_u_u(0x3CL, (l_307[3][0] || (((((((safe_sub_func_uint16_t_u_u((g_210 = ((safe_div_func_int64_t_s_s((~(((g_198 & (g_378 && g_208)) && l_526) || g_180)), 1UL)) , l_179[0].f0)), g_324)) , l_8) , l_471) , l_526) ^ l_527) , l_527) & g_105[1][1]))));
        for (g_302 = 0; (g_302 <= 3); g_302 += 1)
        { 
            uint16_t l_542 = 65535UL;
            int32_t l_543 = 0xBA38D604L;
            uint64_t l_553 = 1UL;
            struct S0 l_557 = {0x30L};
            int16_t l_573 = 1L;
            struct S1 l_575[5][1][2] = {{{{4294967295UL},{4294967295UL}}},{{{0xB3D8C43DL},{4294967295UL}}},{{{4294967295UL},{0xB3D8C43DL}}},{{{4294967295UL},{4294967295UL}}},{{{0xB3D8C43DL},{4294967295UL}}}};
            uint32_t l_576 = 0x6B8FB7B2L;
            int i, j, k;
            if ((safe_sub_func_int32_t_s_s((l_543 = (((((safe_div_func_int16_t_s_s((((safe_div_func_uint32_t_u_u((g_63 < l_534[1][1]), (g_94[0][0] = ((((((safe_unary_minus_func_uint16_t_u((((safe_mod_func_int64_t_s_s(((l_542 = (safe_mul_func_int8_t_s_s(0xE8L, ((safe_mod_func_int16_t_s_s(g_475, l_534[1][0])) <= (-7L))))) >= g_101[1]), l_534[1][0])) >= 0x7F81E8D55BE72913LL) >= g_149))) != 0x5E11F597L) | l_543) < 9L) | l_543) || l_518)))) , 0UL) != 1UL), g_544[0][2][1])) || 0x8C7CL) >= l_362[2][0][0]) && l_534[1][1]) ^ g_381)), l_534[0][1])))
            { 
                int16_t l_545 = 1L;
                const int32_t l_554 = 0xB57777DFL;
                g_544[1][1][0] = ((l_545 ^= g_205.f0) >= ((safe_mul_func_uint16_t_u_u(((g_105[1][1] ^= ((l_548 ^= g_203.f0) && 0x206DL)) > (safe_mul_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u(l_553, g_63)) == l_8), 1UL))), l_554)) != g_149));
            }
            else
            { 
                const int32_t l_560 = 0x51E5889AL;
                int32_t l_561 = 7L;
                l_561 = ((safe_mul_func_int8_t_s_s(l_534[0][1], ((((l_557 = g_203) , (safe_add_func_uint8_t_u_u(0xB3L, l_534[1][1]))) & l_560) ^ l_542))) < g_149);
                l_548 = ((((((0xA880L <= g_149) , (safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s(((safe_add_func_int16_t_s_s(g_568, (((((((safe_mod_func_uint32_t_u_u((((safe_unary_minus_func_uint64_t_u(0x33D9CB26241198BDLL)) ^ l_543) >= l_548), l_572)) > g_475) || l_548) | g_94[0][0]) | 0xC4L) , g_326[0]) , 65527UL))) || g_34), (-4L))), g_324))) > l_573) >= l_542) | 0x2A452AA7277EEC87LL) , g_382[3]);
            }
            l_575[2][0][0] = l_574[2];
            for (l_446.f0 = 0; (l_446.f0 <= 3); l_446.f0 += 1)
            { 
                struct S1 l_579 = {1UL};
                int32_t l_582[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_582[i] = 0xBBD3E6B5L;
                g_544[0][2][2] = l_307[g_302][g_302];
                l_576--;
                l_582[1] = (g_324 || (l_579 , (l_526 ^ ((safe_mul_func_int8_t_s_s((g_474 , l_557.f0), g_112)) >= l_8))));
            }
        }
    }
    return g_378;
}



static int32_t  func_2(int32_t  p_3, int32_t  p_4, int16_t  p_5, uint32_t  p_6, int8_t  p_7)
{ 
    struct S1 l_159 = {4294967286UL};
    int8_t l_163 = 0x65L;
    struct S0 l_164[5][1][3] = {{{{0x9FL},{0x9FL},{0x9FL}}},{{{0xC4L},{0xC4L},{0xC4L}}},{{{0x9FL},{0x9FL},{0x9FL}}},{{{0xC4L},{0xC4L},{0xC4L}}},{{{0x9FL},{0x9FL},{0x9FL}}}};
    int i, j, k;
    l_159 = l_159;
    l_164[4][0][1] = ((((g_160 , l_159) , (safe_rshift_func_uint16_t_u_u(g_112, 12))) && ((0x05F38113FD3603FALL || l_163) || l_159.f0)) , l_164[2][0][2]);
    return p_6;
}



static int32_t  func_26(uint32_t  p_27, const int64_t  p_28, uint64_t  p_29, int32_t  p_30, int64_t  p_31)
{ 
    int16_t l_46[1];
    int32_t l_47 = 1L;
    struct S0 l_89 = {0x09L};
    int32_t l_100 = (-2L);
    uint32_t l_143 = 0x38EC9152L;
    int32_t l_148[3];
    int i;
    for (i = 0; i < 1; i++)
        l_46[i] = 5L;
    for (i = 0; i < 3; i++)
        l_148[i] = 1L;
lbl_146:
    p_30 ^= (g_34 ^ 0L);
    if ((safe_mul_func_uint8_t_u_u(((!(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(p_28, (safe_add_func_int16_t_s_s((g_34 != g_15), (safe_lshift_func_int16_t_s_u((l_46[0] = 1L), 15)))))), 0)) > 0xD790F95848308FAALL) , p_29)) , p_30), l_47)))
    { 
        int8_t l_62 = 0x37L;
        int32_t l_67 = 0x5C71DA89L;
        uint8_t l_70 = 0xD0L;
        union U2 l_102 = {-1L};
        if ((((safe_rshift_func_int8_t_s_s(0xA4L, 5)) < (~0x7A05L)) != 0xAF19195CL))
        { 
            l_67 = (safe_mul_func_int8_t_s_s((func_53((g_61 = (p_28 & (safe_div_func_uint8_t_u_u(0UL, p_28)))), (g_63 = ((l_62 <= l_46[0]) < l_62)), g_34, g_15, g_15) && p_28), l_62));
            for (p_29 = 0; (p_29 < 33); ++p_29)
            { 
                if (l_70)
                    break;
            }
        }
        else
        { 
            uint32_t l_83 = 18446744073709551606UL;
            int8_t l_84 = 1L;
            struct S0 l_88 = {-1L};
            int32_t l_93 = 0x888BC06FL;
            if ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(0xE6L, 4)), ((((65532UL || (g_34 != ((((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(0xD9L, l_83)), l_83)), p_30)) | g_63) && p_31) , l_46[0]))) , 1L) <= 0x9846L) || l_84))), p_27)))
            { 
                uint32_t l_92 = 0UL;
                ++g_85;
                l_89 = l_88;
                l_93 |= (safe_add_func_int16_t_s_s(l_92, 65529UL));
            }
            else
            { 
                return g_85;
            }
            g_94[0][0] = (-1L);
            g_101[0] = ((safe_div_func_int64_t_s_s(((l_67 = (((safe_lshift_func_int8_t_s_s((-1L), (l_100 = ((g_99 = (((p_31 && (l_47 = 0xF8A1L)) == (l_93 = l_89.f0)) == p_30)) & 0x511EL)))) >= p_30) != 0x62L)) >= g_34), g_34)) ^ g_63);
        }
        if (l_100)
        { 
            int32_t l_129 = 0xD9272236L;
            g_105[1][1] |= (0x8BL || (((l_102 , g_94[0][0]) > ((safe_rshift_func_int8_t_s_s((-6L), 1)) >= g_94[0][0])) | g_85));
            g_112 &= (((safe_add_func_uint16_t_u_u((((l_67 |= (safe_mul_func_int16_t_s_s(p_28, 0x8B00L))) | 0xDA97B9B40DC3605ALL) || (safe_mul_func_uint16_t_u_u(((p_29 < l_102.f1) ^ l_62), g_101[0]))), g_101[1])) , g_63) != 0x36L);
            if ((safe_rshift_func_int8_t_s_s(((((((p_31 = (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((((g_101[0] , (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(g_61, ((((safe_lshift_func_uint16_t_u_u(l_129, 1)) > (p_27 = ((((((l_89 = l_89) , p_29) , g_105[1][1]) != p_30) || g_61) < 0x4C9DL))) >= 0UL) | g_34))), g_112)) , p_28), l_100))) && 0x7DDD9CFB06A0B719LL) & g_101[0]), l_67)), 0UL))) != 1UL) != p_29) < g_101[0]) , 0L) & g_99), 7)))
            { 
                g_112 |= l_102.f1;
            }
            else
            { 
                const int32_t l_131 = 1L;
                l_67 = ((l_102.f0 <= (3L != 0x06L)) <= (((!((g_99 <= g_94[0][0]) == l_131)) | (-3L)) != l_131));
            }
        }
        else
        { 
            int32_t l_139 = 0xAE47ACEDL;
            int32_t l_142 = 0xE7103E2EL;
            g_112 = (((((safe_lshift_func_int16_t_s_s(((!((l_89 , (p_29 = (safe_mul_func_int8_t_s_s((l_67 = ((safe_mul_func_int16_t_s_s((((p_27 ^ 1L) > (0xE983FE56077E5926LL <= 0xD4209ED79FF3D11BLL)) , 0x3FE9L), 0xD4BEL)) >= 1UL)), p_27)))) > 1L)) <= l_139), 12)) != 0xA1L) != g_85) , g_101[1]) != 0xE42614109486933DLL);
            for (l_47 = 0; (l_47 <= 0); l_47 = safe_add_func_uint64_t_u_u(l_47, 3))
            { 
                if (p_28)
                    break;
                return g_94[0][0];
            }
            --l_143;
        }
    }
    else
    { 
        int64_t l_147 = (-10L);
        int32_t l_150 = 7L;
        int32_t l_151 = 0L;
        g_112 &= p_27;
        if (g_105[1][2])
        { 
            if (l_143)
                goto lbl_146;
        }
        else
        { 
            p_30 = 0x0ADD41A2L;
        }
        --g_152;
    }
    g_112 &= ((p_28 ^ (l_47 &= (safe_div_func_int64_t_s_s(p_27, p_31)))) || ((l_100 &= (p_31 && g_101[1])) > l_46[0]));
    return g_85;
}



static int32_t  func_53(int16_t  p_54, int32_t  p_55, uint8_t  p_56, int16_t  p_57, const int8_t  p_58)
{ 
    uint32_t l_64 = 0x30AF36EAL;
    l_64++;
    return g_63;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_94[i][j], "g_94[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_99, "g_99", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_101[i], "g_101[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_105[i][j], "g_105[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_160.f0, "g_160.f0", print_hash_value);
    transparent_crc(g_160.f1, "g_160.f1", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_203.f0, "g_203.f0", print_hash_value);
    transparent_crc(g_205.f0, "g_205.f0", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_326[i], "g_326[i]", print_hash_value);

    }
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_382[i], "g_382[i]", print_hash_value);

    }
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_475, "g_475", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_544[i][j][k], "g_544[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_568, "g_568", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
