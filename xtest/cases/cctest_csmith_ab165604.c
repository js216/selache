// SPDX-License-Identifier: MIT
// cctest_csmith_ab165604.c --- cctest case csmith_ab165604 (csmith seed 2870367748)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2a94a684 */
/* @exp_ticks 0x39cd */

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

// Options:   -s 2870367748 -o /tmp/csmith_gen_lhodruqp/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint32_t  f0;
   int8_t  f1;
   int16_t  f2;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
};


static uint32_t g_3 = 0x71867B8FL;
static int16_t g_11[3] = {6L,6L,6L};
static int32_t g_32 = 1L;
static int16_t g_59 = (-7L);
static union U1 g_74 = {{1UL,0L,0xB776L}};
static int64_t g_92 = 0x7F8E48205443EFFALL;
static int8_t g_93[4] = {(-6L),(-6L),(-6L),(-6L)};
static int32_t g_102 = 0x1BE15C8DL;
static uint8_t g_104[3][4] = {{0x87L,0x87L,0x4BL,0x87L},{0x87L,251UL,251UL,0x87L},{251UL,0x87L,251UL,251UL}};
static int32_t g_130 = 0x0DE8C290L;
static int32_t g_204[3] = {0xA302D848L,0xA302D848L,0xA302D848L};
static int16_t g_205 = (-5L);
static int8_t g_207 = 0L;
static int64_t g_208 = 5L;
static int32_t g_209 = 0L;
static uint16_t g_212[5] = {65534UL,65534UL,65534UL,65534UL,65534UL};
static uint32_t g_253 = 7UL;
static int8_t g_286 = 0xDEL;
static int32_t g_287 = 0x85B44177L;
static int32_t g_288 = 0x32DF4A33L;



static int8_t  func_1(void);
static int8_t  func_20(uint32_t  p_21, const uint16_t  p_22);
static int16_t  func_46(uint16_t  p_47, uint32_t  p_48, struct S0  p_49);
static struct S0  func_64(int16_t  p_65, int32_t  p_66);




static int8_t  func_1(void)
{ 
    int64_t l_2 = 2L;
    int8_t l_4 = (-1L);
    int16_t l_7 = 7L;
    int32_t l_8 = 0x959C45C1L;
    struct S0 l_262 = {0x0373C028L,-4L,-6L};
    l_8 = ((l_2 >= (((((l_4 |= (g_3 ^= l_2)) >= (l_7 &= (safe_lshift_func_uint8_t_u_u((l_2 ^ 0x65E3L), l_2)))) , l_4) && g_3) && 0xB3L)) > l_2);
    for (l_7 = (-3); (l_7 == (-18)); l_7 = safe_sub_func_int64_t_s_s(l_7, 9))
    { 
        uint32_t l_12 = 18446744073709551615UL;
        int32_t l_281 = 9L;
        uint32_t l_285 = 0xA03C78DFL;
        int32_t l_289[5][2][2] = {{{0x1C668768L,0x1C668768L},{0x1C668768L,0x1C668768L}},{{0x1C668768L,0x1C668768L},{0x1C668768L,0x1C668768L}},{{0x1C668768L,0x1C668768L},{0x1C668768L,0x1C668768L}},{{0x1C668768L,0x1C668768L},{0x1C668768L,0x1C668768L}},{{0x1C668768L,0x1C668768L},{0x1C668768L,0x1C668768L}}};
        int i, j, k;
        --l_12;
        for (l_2 = 2; (l_2 >= 0); l_2 -= 1)
        { 
            union U1 l_23 = {{1UL,-4L,-1L}};
            int i;
            if ((g_11[l_2] & (!g_11[1])))
            { 
                int16_t l_254 = 0x1723L;
                g_253 &= (safe_mul_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(func_20((l_23 , 4294967295UL), ((+251UL) != (safe_mod_func_uint16_t_u_u((g_11[1] != l_12), g_11[0])))), g_208)) & l_12) != 0xC8E7L), 65535UL));
                l_8 = ((g_204[0] != (l_254 < ((safe_mod_func_int32_t_s_s(l_12, ((safe_sub_func_uint32_t_u_u(g_104[0][2], l_2)) , g_204[2]))) <= g_204[1]))) || g_208);
            }
            else
            { 
                return g_32;
            }
            for (g_32 = 2; (g_32 >= 0); g_32 -= 1)
            { 
                uint32_t l_259 = 18446744073709551608UL;
                l_259 = 0x0C650B9EL;
            }
        }
        l_289[3][1][1] ^= (safe_add_func_int64_t_s_s(((g_288 = ((l_262 , (safe_add_func_uint16_t_u_u(((((safe_add_func_uint64_t_u_u(((safe_unary_minus_func_uint64_t_u(l_2)) > ((((safe_mul_func_uint16_t_u_u(((((g_93[2] &= ((((--g_104[1][0]) == (safe_mul_func_uint16_t_u_u(((((l_281 = (g_287 = (g_286 = ((!(g_102 ^= ((((safe_mod_func_uint64_t_u_u((((safe_div_func_uint16_t_u_u((g_212[0]++), 1UL)) && (~l_281)) > l_285), g_3)) , g_205) > l_12) >= 0xA28CL))) == 0L)))) ^ g_92) && l_285) == 0L), g_3))) & g_74.f0.f0) != g_204[1])) != 0xE9L) & g_74.f0.f1) != 0xF3D79FE8L), g_253)) ^ 0xCF4FL) > (-2L)) <= l_12)), 2UL)) | g_74.f0.f1) > g_11[1]) == l_12), l_262.f2))) <= g_74.f0.f0)) || g_130), g_204[1]));
    }
    return l_262.f1;
}



static int8_t  func_20(uint32_t  p_21, const uint16_t  p_22)
{ 
    int32_t l_31 = 1L;
    int32_t l_33[4] = {0x05DBD55AL,0x05DBD55AL,0x05DBD55AL,0x05DBD55AL};
    uint64_t l_58 = 18446744073709551615UL;
    struct S0 l_185[2] = {{1UL,-1L,-1L},{1UL,-1L,-1L}};
    uint16_t l_249 = 1UL;
    union U1 l_250[1][2][3] = {{{{{0x90424AEAL,0x2EL,0xF269L}},{{0x90424AEAL,0x2EL,0xF269L}},{{0x90424AEAL,0x2EL,0xF269L}}},{{{0x90424AEAL,0x2EL,0xF269L}},{{0x90424AEAL,0x2EL,0xF269L}},{{0x90424AEAL,0x2EL,0xF269L}}}}};
    int i, j, k;
    for (g_3 = 0; (g_3 >= 35); g_3 = safe_add_func_uint32_t_u_u(g_3, 3))
    { 
        uint32_t l_35 = 1UL;
        for (p_21 = 0; (p_21 < 42); p_21 = safe_add_func_int64_t_s_s(p_21, 7))
        { 
            int64_t l_34 = 0x8A87EA82BC906383LL;
            struct S0 l_60 = {0UL,0xC2L,0x1006L};
            l_35--;
            for (g_32 = 8; (g_32 >= (-27)); g_32--)
            { 
                if (g_32)
                    break;
                g_130 = ((safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(0UL, l_34)), func_46((!(!(((safe_sub_func_int64_t_s_s(((g_32 < ((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((g_3 , g_11[1]), g_3)), g_11[2])) < 0xE5FF1FC5BFF9046ELL)) <= g_11[1]), l_35)) == l_58) >= g_3))), g_59, l_60))), l_60.f0)) == p_22);
            }
        }
    }
    for (g_59 = 0; (g_59 == 27); g_59++)
    { 
        g_130 |= (g_32 ^ g_74.f0.f0);
    }
    if ((safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((safe_mod_func_int64_t_s_s((l_58 || g_11[1]), ((((safe_lshift_func_int8_t_s_u(0x43L, 5)) >= p_22) <= 0x9A6A1C6E98833D7ALL) ^ l_58))), l_33[1])) == l_58), 4)), 0xC1EA649016727E77LL)), g_32)))
    { 
        int64_t l_177 = (-5L);
        int32_t l_206[3][3][2] = {{{0L,0xB91DEDA0L},{0L,0xB91DEDA0L},{0L,0xB91DEDA0L}},{{0L,0xB91DEDA0L},{0L,0xB91DEDA0L},{0L,0xB91DEDA0L}},{{0L,0xB91DEDA0L},{0L,0xB91DEDA0L},{0L,0xB91DEDA0L}}};
        int i, j, k;
        for (l_31 = (-27); (l_31 == (-12)); l_31 = safe_add_func_uint8_t_u_u(l_31, 2))
        { 
            uint64_t l_180 = 0xEB03636E33FDBF33LL;
            int32_t l_203 = (-4L);
            int8_t l_211 = 1L;
            g_130 = (safe_sub_func_int16_t_s_s(l_177, g_102));
            if (((safe_add_func_int64_t_s_s((l_180 < ((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((0L && 0L) , l_185[0]) , l_177), g_104[1][1])), p_21)) , l_177)), p_22)) || 0x0B20075B0AE68E36LL))
            { 
                uint16_t l_191 = 65528UL;
                int32_t l_202 = 0x7A201F26L;
                int32_t l_210 = 0x53381E5CL;
                l_202 = (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((safe_div_func_int64_t_s_s((g_92 |= (((((l_191 , ((safe_mul_func_uint8_t_u_u(g_74.f0.f0, ((l_177 , (safe_div_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(p_21, 7)) | 1L), g_74.f0.f2)) <= 0xA41B78C417BC7242LL), p_22)) && 6UL), 0xABL))) , 0x8FL))) && 0L)) <= l_177) | p_22) != p_21) <= g_32)), l_33[1])))), g_74.f0.f2));
                l_203 = l_202;
                --g_212[0];
            }
            else
            { 
                l_206[0][2][0] &= (g_102 = g_3);
            }
            return l_58;
        }
        for (g_32 = (-19); (g_32 < (-16)); ++g_32)
        { 
            uint8_t l_217 = 255UL;
            if ((p_21 , (g_130 = 0xE5196A25L)))
            { 
                l_217++;
                if (l_217)
                    continue;
                if (p_21)
                    break;
            }
            else
            { 
                int8_t l_220 = (-1L);
                l_220 = l_217;
                l_33[1] ^= (p_21 < 0L);
            }
        }
    }
    else
    { 
        uint16_t l_240 = 1UL;
        int32_t l_251 = 0x5526950CL;
        uint16_t l_252 = 0xBC87L;
        for (g_3 = 0; (g_3 == 32); ++g_3)
        { 
            int64_t l_237[1];
            int32_t l_238 = 0xA8C73E31L;
            int64_t l_239 = 0xCD2A7965D118C778LL;
            int i;
            for (i = 0; i < 1; i++)
                l_237[i] = 2L;
            l_33[1] = ((g_11[2] |= ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(g_205, (safe_lshift_func_int8_t_s_s(p_22, (safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(g_102, (((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((l_237[0] = (l_185[0].f1 == g_204[1])), 4)), 11)) && 1L) < 0x9BL))), l_238)))))), g_130)) != p_21)) >= p_22);
            l_240++;
        }
        l_31 = (((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((l_33[3] = 0xD74377B0L) > ((((l_251 = (safe_lshift_func_uint16_t_u_u((((l_249 = (0x08L & p_22)) <= (l_250[0][1][0] , p_22)) >= p_22), 8))) < l_185[0].f2) == 0x44B8FFC6L) < l_240)) >= 2UL), 0x667DL)), l_252)) >= 0xC4AD1FBBA7C66632LL) >= 0xE0FD6618L);
    }
    return l_185[0].f1;
}



static int16_t  func_46(uint16_t  p_47, uint32_t  p_48, struct S0  p_49)
{ 
    int8_t l_76 = 6L;
    int32_t l_77 = 0x72D30A93L;
    uint16_t l_120 = 6UL;
    uint32_t l_121 = 0x8FF3A18FL;
    union U1 l_146 = {{4294967294UL,-8L,0xE77AL}};
    for (p_49.f2 = 0; (p_49.f2 != 0); p_49.f2 = safe_add_func_uint16_t_u_u(p_49.f2, 7))
    { 
        const uint32_t l_75 = 18446744073709551606UL;
        int32_t l_108 = 0xC289E414L;
        uint64_t l_131 = 0xBA6DCB14003707C2LL;
        int32_t l_135 = 0xC25D2621L;
        int32_t l_137 = (-1L);
        int32_t l_138 = 0xE5ECD179L;
        if ((g_104[1][1] = (p_49.f1 | (+((func_64((g_59 , (safe_add_func_uint16_t_u_u(((l_77 ^= ((~(((((safe_mul_func_uint16_t_u_u((++p_47), (((g_74 , (-9L)) <= g_11[1]) , 0x0F9AL))) & l_75) == g_3) <= p_49.f0) <= l_76)) , 1UL)) != p_49.f0), g_3))), l_76) , l_75) && 0L)))))
        { 
            uint32_t l_119[4][1];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_119[i][j] = 0x4C166604L;
            }
            if (g_74.f0.f2)
            { 
                uint8_t l_109[2][3][2] = {{{255UL,0xD6L},{255UL,0xD6L},{255UL,0xD6L}},{{255UL,0xD6L},{255UL,0xD6L},{255UL,0xD6L}}};
                int i, j, k;
                l_108 &= ((l_75 == (!0x908AL)) && (g_74 , (safe_sub_func_int16_t_s_s(l_75, p_49.f2))));
                if (l_109[1][0][0])
                    break;
            }
            else
            { 
                uint32_t l_118 = 4294967292UL;
                l_121 &= (l_108 = ((((safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_32, ((safe_add_func_uint16_t_u_u((((l_76 & p_48) || (p_49.f1 ^ l_108)) && l_118), p_49.f0)) > 0x94L))), g_3)), g_92)) > l_119[3][0]) == l_120) < p_49.f1));
            }
        }
        else
        { 
            int32_t l_136 = 0x5089D572L;
            int32_t l_141 = 0xF7F33B7EL;
            l_141 ^= (safe_lshift_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((g_3 || ((l_108 = (--l_131)) || (+g_59))) > ((((g_104[0][0]--) & (l_75 && 0UL)) != p_49.f0) , p_49.f0)), 0x6F59E05BB15C0646LL)), 3)) <= l_135), 0x62L)) != l_136), g_11[1]));
            for (l_76 = 0; (l_76 <= 2); l_76 += 1)
            { 
                int i;
                l_108 = (safe_lshift_func_int8_t_s_s(g_93[l_76], (safe_mul_func_int16_t_s_s((g_74 , p_48), ((l_146 , l_77) | 0UL)))));
            }
        }
    }
    for (g_59 = 0; (g_59 <= 3); g_59 += 1)
    { 
        int16_t l_158 = 0xC38EL;
        for (l_120 = 0; (l_120 <= 3); l_120 += 1)
        { 
            int i;
            if (((0x91DA39B3L & (((safe_mul_func_uint16_t_u_u((((+(-7L)) && ((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(((2UL == ((((safe_mul_func_int16_t_s_s(g_93[g_59], l_120)) >= p_49.f0) ^ p_49.f1) > p_47)) || g_74.f0.f2), l_146.f0.f2)) <= 252UL) < l_158), g_93[g_59])), g_93[g_59])) && l_146.f0.f1)) ^ p_49.f2), 65535UL)) , p_47) <= 0xC1BBL)) & 8UL))
            { 
                return l_146.f0.f0;
            }
            else
            { 
                return p_49.f2;
            }
        }
    }
    return g_11[2];
}



static struct S0  func_64(int16_t  p_65, int32_t  p_66)
{ 
    uint8_t l_85 = 0x85L;
    int16_t l_90 = (-3L);
    int32_t l_91 = 0x5DCB4352L;
    struct S0 l_103 = {4294967290UL,0xD4L,-10L};
    for (g_59 = 19; (g_59 < 24); g_59 = safe_add_func_uint8_t_u_u(g_59, 1))
    { 
        return g_74.f0;
    }
    g_93[2] = (!(g_92 ^= (((g_74.f0.f2 <= (l_91 = (((safe_div_func_int64_t_s_s(6L, (safe_div_func_int32_t_s_s(l_85, ((((safe_mul_func_int8_t_s_s(((((((safe_div_func_uint8_t_u_u(((((((0x8EE6L >= p_65) <= p_66) , p_65) != 0x15L) || l_85) ^ p_65), l_90)) >= l_85) < p_65) , l_90) != 0x4FL) == l_85), g_11[1])) != p_65) , 0xA32D9FB0L) , g_11[1]))))) ^ 0L) , g_74.f0.f0))) && 4294967295UL) > g_11[2])));
    g_102 ^= ((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((0x3B6D3E8DL & l_85), (l_91 = (safe_lshift_func_uint16_t_u_s(((g_32 , ((((safe_div_func_int16_t_s_s((p_65 != l_90), 0x1D57L)) & 0x27L) & l_90) && 0x68L)) == 0x2CCD07D1F8735943LL), l_91))))), l_85)) , g_74.f0.f2);
    return l_103;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);

    }
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_74.f0.f0, "g_74.f0.f0", print_hash_value);
    transparent_crc(g_74.f0.f1, "g_74.f0.f1", print_hash_value);
    transparent_crc(g_74.f0.f2, "g_74.f0.f2", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_93[i], "g_93[i]", print_hash_value);

    }
    transparent_crc(g_102, "g_102", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_104[i][j], "g_104[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_130, "g_130", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_204[i], "g_204[i]", print_hash_value);

    }
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_212[i], "g_212[i]", print_hash_value);

    }
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
