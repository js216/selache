// SPDX-License-Identifier: MIT
// cctest_csmith_d79b0607.c --- cctest case csmith_d79b0607 (csmith seed 3617261063)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf74a4eb8 */
/* @exp_ticks 0x40b4 */

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

// Options:   -s 3617261063 -o /tmp/csmith_gen_j_jixp3g/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int16_t  f1;
   int64_t  f2;
   uint64_t  f3;
   uint32_t  f4;
};
#pragma pack(pop)

struct S1 {
   int32_t  f0;
   uint8_t  f1;
   int64_t  f2;
   uint64_t  f3;
   int64_t  f4;
   int64_t  f5;
};

union U2 {
   int32_t  f0;
   int32_t  f1;
};


static uint8_t g_22 = 1UL;
static union U2 g_23 = {0x7E9F21C9L};
static struct S1 g_33 = {3L,3UL,0x3087C3CB87840EF1LL,0UL,0x6851CC0D6813F8C5LL,0x7FCE3BADF38E70E9LL};
static uint64_t g_51 = 0x1560F218D362EA1ELL;
static int32_t g_59 = (-2L);
static uint16_t g_67 = 65530UL;
static int32_t g_74 = 0xFB9A3054L;
static int8_t g_76[4] = {0x01L,0x01L,0x01L,0x01L};
static int64_t g_83[4] = {7L,7L,7L,7L};
static int8_t g_84 = 0L;
static uint8_t g_86 = 0x5FL;
static uint16_t g_103 = 0x7714L;
static struct S0 g_105 = {-1L,0x7385L,1L,0xFF7F8D1F2F80B5ADLL,0UL};
static uint64_t g_112 = 18446744073709551615UL;
static struct S0 g_121[4] = {{0xEDB1328FL,0x7E60L,6L,18446744073709551615UL,0xF795CCE4L},{0xEDB1328FL,0x7E60L,6L,18446744073709551615UL,0xF795CCE4L},{0xEDB1328FL,0x7E60L,6L,18446744073709551615UL,0xF795CCE4L},{0xEDB1328FL,0x7E60L,6L,18446744073709551615UL,0xF795CCE4L}};
static uint64_t g_122 = 6UL;
static uint16_t g_138 = 65529UL;
static uint8_t g_147 = 0UL;
static uint16_t g_148 = 0UL;
static int64_t g_160 = 1L;
static int64_t g_163 = (-1L);
static uint8_t g_164[4][2] = {{255UL,0UL},{0UL,255UL},{0UL,0UL},{255UL,0UL}};



static int64_t  func_1(void);
static int32_t  func_2(int32_t  p_3, uint8_t  p_4, int8_t  p_5, struct S1  p_6);
static const uint8_t  func_12(uint32_t  p_13);
static uint32_t  func_18(uint8_t  p_19, union U2  p_20, const struct S0  p_21);




static int64_t  func_1(void)
{ 
    uint32_t l_7 = 0x3880E033L;
    int32_t l_73 = (-5L);
    struct S1 l_75 = {0x2595B8C6L,0x8FL,0xA9DB3BFA59640E15LL,0x7BE735B57BD3F66FLL,0L,-5L};
    struct S0 l_104 = {9L,-8L,0L,18446744073709551615UL,7UL};
    uint16_t l_111 = 65535UL;
    uint16_t l_130 = 65534UL;
    uint8_t l_136 = 0UL;
    int32_t l_158 = (-5L);
    if (func_2(l_7, (g_74 |= (safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(func_12(l_7), (l_73 = (safe_mod_func_uint8_t_u_u(g_33.f2, l_7))))), l_7))), g_33.f2, l_75))
    { 
        uint32_t l_110 = 2UL;
        g_105 = l_104;
        g_112 &= ((safe_sub_func_uint32_t_u_u(((((safe_lshift_func_int16_t_s_u(((g_23 , (0x7EL == ((g_51 , 0L) | 18446744073709551615UL))) > 0UL), 10)) , g_33.f1) | 3UL) , l_110), 1L)) < l_111);
    }
    else
    { 
        uint32_t l_118 = 0UL;
        const int64_t l_129 = 1L;
        int32_t l_131 = 0x0F49ACE3L;
        struct S0 l_142 = {2L,-1L,1L,6UL,0xF277EB8EL};
lbl_117:
        l_73 = ((g_33.f1 = g_83[0]) ^ 247UL);
        if ((safe_lshift_func_uint16_t_u_u(65530UL, 6)))
        { 
            for (g_33.f4 = 0; (g_33.f4 >= 15); g_33.f4 = safe_add_func_uint32_t_u_u(g_33.f4, 8))
            { 
                if (g_74)
                    goto lbl_117;
            }
        }
        else
        { 
            --l_118;
            for (g_105.f2 = 0; (g_105.f2 <= 3); g_105.f2 += 1)
            { 
                g_121[1] = g_105;
                g_122 = 4L;
            }
        }
        if ((((safe_sub_func_int32_t_s_s(g_105.f1, (l_73 = ((safe_add_func_int32_t_s_s(((g_112 , (l_131 &= (safe_lshift_func_int16_t_s_s(((l_129 , ((((((1UL >= l_129) && l_130) , 0x1C69L) & l_129) <= 0UL) , 0x84L)) || l_118), g_83[0])))) != l_75.f3), g_33.f0)) & g_74)))) >= l_118) >= g_67))
        { 
            uint32_t l_157 = 0UL;
            for (g_23.f1 = 7; (g_23.f1 <= (-26)); g_23.f1 = safe_sub_func_int64_t_s_s(g_23.f1, 1))
            { 
                int32_t l_137[3];
                uint32_t l_159 = 1UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_137[i] = 0x70D91B73L;
                g_138 = (((((safe_add_func_uint8_t_u_u(l_136, 1L)) < (((0xD782557159C7574ELL != l_104.f1) != g_84) != g_84)) <= l_137[1]) < l_104.f4) | 0xEC5D80E8L);
                g_148 = ((safe_mul_func_int16_t_s_s(((~l_131) ^ (l_73 ^= (l_142 , ((l_137[1] ^= (safe_lshift_func_uint16_t_u_s((g_86 || (safe_sub_func_uint8_t_u_u(((((((0x269BC1C9L > 4294967295UL) >= 0L) < g_33.f2) == 0xEEL) , l_75.f2) ^ 0x32FEL), 1UL))), l_118))) == 0x6AL)))), g_147)) <= 0xE690L);
                g_160 = ((safe_add_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(0x2AL, l_157)), (l_158 = (g_23 , ((g_33.f0 < l_130) >= (-1L)))))), 5)) || 0x62L), 0xCEL)) || l_159);
            }
        }
        else
        { 
            for (l_111 = (-29); (l_111 > 25); ++l_111)
            { 
                g_163 = 0L;
                l_131 |= g_105.f0;
            }
        }
    }
    g_121[1] = l_104;
    --g_164[2][1];
    return g_33.f4;
}



static int32_t  func_2(int32_t  p_3, uint8_t  p_4, int8_t  p_5, struct S1  p_6)
{ 
    uint64_t l_78 = 6UL;
    int32_t l_81 = 0xF63B645CL;
    int32_t l_85[5];
    int i;
    for (i = 0; i < 5; i++)
        l_85[i] = 0xF93A2F24L;
lbl_77:
    for (g_23.f1 = 3; (g_23.f1 >= 0); g_23.f1 -= 1)
    { 
        int i;
        return g_76[g_23.f1];
    }
    if (p_4)
    { 
        if (p_4)
            goto lbl_77;
        l_78++;
    }
    else
    { 
        int8_t l_82 = 1L;
        --g_86;
    }
    g_103 = (safe_div_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u(l_81, (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((p_6.f0 & 0x9D43L) & (--g_67)), (safe_lshift_func_int16_t_s_u((l_85[1] | l_85[0]), 12)))), g_83[1])))) < l_85[4]) >= g_22), p_6.f3)) == 65535UL), 0xB4645870CA50A4B5LL));
    return p_6.f4;
}



static const uint8_t  func_12(uint32_t  p_13)
{ 
    int8_t l_16 = 0x50L;
    const int32_t l_17 = 0L;
    const struct S0 l_24[2][4] = {{{0xCD021AA2L,0x10A8L,0L,0UL,6UL},{-9L,-1L,0xA30B91300D3B51ADLL,0xB481D3EFE35FE57BLL,8UL},{-9L,-1L,0xA30B91300D3B51ADLL,0xB481D3EFE35FE57BLL,8UL},{0xCD021AA2L,0x10A8L,0L,0UL,6UL}},{{-9L,-1L,0xA30B91300D3B51ADLL,0xB481D3EFE35FE57BLL,8UL},{0xCD021AA2L,0x10A8L,0L,0UL,6UL},{-9L,-1L,0xA30B91300D3B51ADLL,0xB481D3EFE35FE57BLL,8UL},{-9L,-1L,0xA30B91300D3B51ADLL,0xB481D3EFE35FE57BLL,8UL}}};
    int32_t l_35 = 0xCA82E93BL;
    struct S0 l_53 = {5L,0x8B5EL,0L,0x4657C2A8B70F5D96LL,0x2A5332CFL};
    int i, j;
    if (((l_35 &= (254UL < (safe_sub_func_int32_t_s_s(((l_16 = 18446744073709551615UL) <= (l_17 , ((func_18(g_22, g_23, l_24[1][2]) <= 0x919E5419L) & l_24[1][2].f4))), p_13)))) , (-1L)))
    { 
        int64_t l_44 = 0x5C408CDC70526E61LL;
        int32_t l_45 = (-8L);
        struct S0 l_52[1][3] = {{{-1L,0x8552L,-5L,9UL,0x5EA776A2L},{-1L,0x8552L,-5L,9UL,0x5EA776A2L},{-1L,0x8552L,-5L,9UL,0x5EA776A2L}}};
        int i, j;
        l_35 &= (l_45 = (safe_add_func_int8_t_s_s(6L, ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((((safe_add_func_uint32_t_u_u(l_44, 0x45CCAEA4L)) == p_13) < 0xB939845FL), 18446744073709551615UL)), l_44)) ^ p_13))));
        g_51 &= ((safe_lshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s((0x2284L >= 0UL), (+g_33.f2))), 1)) && ((p_13 != l_45) ^ p_13));
        l_53 = l_52[0][1];
    }
    else
    { 
        int32_t l_54 = 0L;
        union U2 l_57 = {0xB8AB48F0L};
        l_54 ^= 0x90AD7A22L;
        if (g_23.f1)
            goto lbl_60;
lbl_60:
        g_59 = (safe_lshift_func_int16_t_s_u((l_57 , (((l_57 , (g_33.f5 , ((!(g_33.f2 <= g_33.f5)) > 1UL))) , g_33.f0) && g_33.f2)), p_13));
        l_54 = (((safe_lshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(g_33.f5, (safe_rshift_func_uint16_t_u_s(((g_33.f1 ^ (g_67 = p_13)) || (!((l_35 |= ((safe_div_func_uint16_t_u_u(g_23.f0, g_33.f4)) || g_33.f0)) != 0xABDB3BF0L))), 0)))), g_33.f0)) || g_51) , 0xF33C0571L);
    }
    return l_16;
}



static uint32_t  func_18(uint8_t  p_19, union U2  p_20, const struct S0  p_21)
{ 
    uint32_t l_25 = 0x00273942L;
    int32_t l_32 = 0x5ABFEDE0L;
    struct S1 l_34 = {0L,0UL,-1L,18446744073709551607UL,0x23EBAA2DF500C330LL,0x0E3CEC334572090FLL};
    l_25 &= 4L;
    for (p_20.f0 = 0; (p_20.f0 < 13); p_20.f0 = safe_add_func_uint64_t_u_u(p_20.f0, 6))
    { 
        uint64_t l_30[2];
        int32_t l_31[1];
        int i;
        for (i = 0; i < 2; i++)
            l_30[i] = 0UL;
        for (i = 0; i < 1; i++)
            l_31[i] = 0L;
        l_31[0] = (p_21.f3 | (7L <= ((safe_add_func_uint8_t_u_u(((l_30[1] <= l_30[1]) && p_21.f4), 0x76L)) < 18446744073709551608UL)));
        l_31[0] = (65535UL <= (l_32 &= g_23.f1));
    }
    l_34 = g_33;
    return l_34.f3;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
    transparent_crc(g_23.f1, "g_23.f1", print_hash_value);
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_33.f1, "g_33.f1", print_hash_value);
    transparent_crc(g_33.f2, "g_33.f2", print_hash_value);
    transparent_crc(g_33.f3, "g_33.f3", print_hash_value);
    transparent_crc(g_33.f4, "g_33.f4", print_hash_value);
    transparent_crc(g_33.f5, "g_33.f5", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_76[i], "g_76[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_83[i], "g_83[i]", print_hash_value);

    }
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105.f0, "g_105.f0", print_hash_value);
    transparent_crc(g_105.f1, "g_105.f1", print_hash_value);
    transparent_crc(g_105.f2, "g_105.f2", print_hash_value);
    transparent_crc(g_105.f3, "g_105.f3", print_hash_value);
    transparent_crc(g_105.f4, "g_105.f4", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_121[i].f0, "g_121[i].f0", print_hash_value);
        transparent_crc(g_121[i].f1, "g_121[i].f1", print_hash_value);
        transparent_crc(g_121[i].f2, "g_121[i].f2", print_hash_value);
        transparent_crc(g_121[i].f3, "g_121[i].f3", print_hash_value);
        transparent_crc(g_121[i].f4, "g_121[i].f4", print_hash_value);

    }
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_164[i][j], "g_164[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
