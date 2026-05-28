// SPDX-License-Identifier: MIT
// cctest_csmith_682a8d3f.c --- cctest case csmith_682a8d3f (csmith seed 1747619135)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfdcb4b97 */
/* @exp_ticks 0x4b9f */

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

// Options:   -s 1747619135 -o /tmp/csmith_gen_2n6u6fjt/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int8_t  f1;
   uint32_t  f2;
};
#pragma pack(pop)

struct S1 {
   int32_t  f0;
   uint64_t  f1;
   int32_t  f2;
   const int8_t  f3;
};

struct S2 {
   uint64_t  f0;
   const int32_t  f1;
   const struct S1  f2;
   uint64_t  f3;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
   struct S1  f0;
   struct S2  f1;
   int64_t  f2;
   int32_t  f3;
   const struct S2  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S4 {
   struct S2  f0;
};
#pragma pack(pop)

struct S5 {
   uint8_t  f0;
   uint16_t  f1;
   int64_t  f2;
   struct S2  f3;
};

union U6 {
   int8_t  f0;
   const int32_t  f1;
   struct S0  f2;
   int16_t  f3;
};


static int8_t g_2 = (-4L);
static int64_t g_5 = 0L;
static uint16_t g_12 = 0x6493L;
static const struct S5 g_36[5] = {{255UL,0x8B13L,0L,{4UL,0xD0016D17L,{-3L,18446744073709551615UL,-3L,0L},0xE9B1CC8FFCACAF8ALL}},{255UL,0x8B13L,0L,{4UL,0xD0016D17L,{-3L,18446744073709551615UL,-3L,0L},0xE9B1CC8FFCACAF8ALL}},{255UL,0x8B13L,0L,{4UL,0xD0016D17L,{-3L,18446744073709551615UL,-3L,0L},0xE9B1CC8FFCACAF8ALL}},{255UL,0x8B13L,0L,{4UL,0xD0016D17L,{-3L,18446744073709551615UL,-3L,0L},0xE9B1CC8FFCACAF8ALL}},{255UL,0x8B13L,0L,{4UL,0xD0016D17L,{-3L,18446744073709551615UL,-3L,0L},0xE9B1CC8FFCACAF8ALL}}};
static uint32_t g_56 = 4294967289UL;
static int8_t g_57 = (-1L);
static uint32_t g_61 = 18446744073709551615UL;
static int32_t g_66[2] = {0L,0L};
static int8_t g_67[4] = {(-2L),(-2L),(-2L),(-2L)};
static int16_t g_84 = 7L;
static int8_t g_107 = 0L;
static uint64_t g_108 = 1UL;
static int32_t g_124 = 0x37AD1066L;
static uint64_t g_132[3][1] = {{3UL},{3UL},{3UL}};
static uint16_t g_133 = 65535UL;
static struct S4 g_174 = {{0UL,0xD19666DBL,{0x8D82316BL,0xF5D29D3D43A10804LL,0xB8D8FEC6L,-2L},0xD21F283B0DCFB84FLL}};
static uint32_t g_175 = 18446744073709551612UL;
static uint32_t g_180[3][1] = {{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}};
static struct S0 g_186 = {0x133B268FL,0x16L,18446744073709551609UL};
static union U6 g_192 = {0xD8L};
static uint32_t g_212 = 0UL;
static struct S3 g_233 = {{3L,0x6E1F477871494E06LL,1L,0L},{1UL,1L,{0xB009086BL,0x8A3830032A996439LL,0xA0857287L,0L},18446744073709551615UL},1L,0x40EEDF8BL,{0UL,0x6DB16A5FL,{0xAA7BE89EL,0x8DAE93E954DD2813LL,0x182850D0L,0L},0x8FFD3D122B539002LL}};
static uint64_t g_271 = 0x91362AE0AB808DE3LL;



static struct S2  func_1(void);
static int16_t  func_23(int32_t  p_24, struct S0  p_25, int32_t  p_26, int16_t  p_27);
static struct S0  func_28(int32_t  p_29);
static int32_t  func_30(const struct S5  p_31, int64_t  p_32, const struct S1  p_33, uint32_t  p_34, struct S4  p_35);




static struct S2  func_1(void)
{ 
    int32_t l_6 = 1L;
    int32_t l_7 = 0x2E755073L;
    struct S4 l_40 = {{1UL,0L,{-3L,0xBE471A24E302138ELL,0x473CB195L,0x2EL},0UL}};
    uint64_t l_227 = 18446744073709551609UL;
    int32_t l_228 = 0xFCD3D24EL;
    const struct S0 l_244 = {18446744073709551615UL,0x6BL,0xFE6C16D6L};
    uint16_t l_245[2][2][5] = {{{7UL,65535UL,65535UL,7UL,65535UL},{7UL,7UL,0x33C1L,7UL,7UL}},{{65535UL,7UL,65535UL,65535UL,7UL},{7UL,65535UL,65535UL,7UL,65535UL}}};
    int i, j, k;
    l_7 = (g_2 >= ((safe_sub_func_int64_t_s_s((g_5 = 0x3F1571C097BC8B42LL), 18446744073709551615UL)) , l_6));
    for (l_6 = 0; (l_6 >= 25); l_6 = safe_add_func_uint16_t_u_u(l_6, 3))
    { 
        int16_t l_38 = 0L;
        int32_t l_91 = 0x3B7989D1L;
        int64_t l_260 = 9L;
        if ((g_12 ^= (safe_rshift_func_int8_t_s_s(g_5, g_5))))
        { 
            const struct S1 l_39 = {-8L,0xDADEE2DE598C2FCBLL,0xF78F0145L,0x6FL};
            int32_t l_259 = (-9L);
            l_228 = ((safe_div_func_uint16_t_u_u((((l_7 ^= 4294967294UL) , ((((safe_div_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(func_23(g_12, func_28((l_91 = func_30(g_36[3], ((((!l_38) > 0xFC7DL) ^ 2L) | 1UL), l_39, l_38, l_40))), g_36[3].f3.f2.f3, l_39.f3), g_107)) | l_227), 0xE8L)), 3)) < 0xE471D8DB5BBBAEF6LL), 0x75CB1126L)) , l_39.f0) < 7UL) ^ l_39.f1)) == g_36[3].f2), g_36[3].f3.f1)) > l_38);
            for (g_175 = 0; (g_175 < 12); ++g_175)
            { 
                int16_t l_236 = 0L;
                int32_t l_237 = 0L;
                l_237 = ((safe_rshift_func_uint16_t_u_s((g_233 , ((g_174 , (safe_lshift_func_uint16_t_u_s((g_61 <= ((((l_236 > l_39.f3) > 0x74L) ^ 0L) || (-1L))), g_175))) >= g_61)), 12)) | l_38);
                g_233.f0.f0 = (safe_add_func_int32_t_s_s(l_91, (safe_rshift_func_uint16_t_u_u(((l_237 = ((0UL > (g_66[1] |= ((((safe_sub_func_uint16_t_u_u(0x6E87L, 0xA4DBL)) == 0xFCL) >= g_2) <= 0xABA19FD082DB463ELL))) & g_175)) , l_227), 4))));
                g_186 = l_244;
            }
            g_66[1] = (((l_245[1][1][1] && g_233.f4.f0) | (((((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((!(g_233.f2 = ((g_132[0][0] &= (l_259 = ((safe_rshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((g_84 ^= ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((g_233 , (g_56 = ((0x25D61B83L < g_36[3].f3.f2.f0) || g_174.f0.f3))) < g_2) && 1L), l_39.f0)), 14)) >= 0x3A6BL)), g_233.f0.f1)) , g_108), l_39.f0)) & l_38))) >= l_91))), l_260)), 0xE8L)) , (-9L)) | l_39.f1) & 0xD83D83071FFFA7BALL) != g_192.f0)) < 0xB9L);
        }
        else
        { 
            uint64_t l_270 = 0x01C8258AFF4077BFLL;
            g_233.f0.f2 = (g_192 , ((~(safe_rshift_func_uint8_t_u_s(((safe_add_func_uint64_t_u_u((9L | (g_12++)), (safe_add_func_int32_t_s_s(((((l_40.f0.f3 >= (l_270 ^= g_180[0][0])) < 255UL) | g_271) || 1L), g_84)))) , l_270), g_36[3].f3.f2.f2))) < g_56));
            g_233.f0.f0 = (g_174.f0 , g_186.f2);
            for (l_260 = 26; (l_260 == (-19)); l_260 = safe_sub_func_uint32_t_u_u(l_260, 2))
            { 
                g_233.f0.f2 &= 0xA74D5875L;
            }
        }
    }
    return g_36[3].f3;
}



static int16_t  func_23(int32_t  p_24, struct S0  p_25, int32_t  p_26, int16_t  p_27)
{ 
    int32_t l_121 = 0xAADDF2FAL;
    int32_t l_122 = 0L;
    int32_t l_123[3][5][4] = {{{0x106F392BL,0L,0x8A95B55BL,6L},{0x62F837EAL,0L,0L,0x106F392BL},{0x3209DC75L,0x1793055CL,0L,0xF169F865L},{0x140B01D3L,0x9836C0E9L,0L,8L},{0x9836C0E9L,0xC1CAB3F2L,(-1L),0x9836C0E9L}},{{(-1L),0xB18AD37FL,(-1L),(-10L)},{0x9836C0E9L,0L,0L,0x140B01D3L},{0x140B01D3L,(-1L),0L,(-1L)},{0L,(-1L),(-10L),(-10L)},{8L,8L,0x106F392BL,0L}},{{0xB18AD37FL,0xC1CAB3F2L,0xF169F865L,0x3209DC75L},{0L,0L,0L,0xF169F865L},{(-1L),0L,0L,0x3209DC75L},{0L,0xC1CAB3F2L,0x8A95B55BL,0L},{(-1L),8L,0xC1CAB3F2L,(-10L)}}};
    uint64_t l_125 = 7UL;
    struct S0 l_199 = {18446744073709551606UL,0xB3L,0xE9902BEBL};
    int i, j, k;
lbl_187:
    ++l_125;
    if ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((g_133 = (g_132[1][0] = 0x8DL)), 252UL)), ((((safe_lshift_func_int8_t_s_u(((+(l_123[2][4][2] = ((safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((((safe_div_func_int16_t_s_s(((l_123[1][2][2] && (g_36[3].f0 > 0L)) & p_25.f1), p_25.f2)) & p_26) | l_123[2][1][3]), 6)), (-4L))), p_27)), l_125)), l_125)) | p_24))) >= 0UL), 4)) > l_125) == 0xF43F5762L) < 0x45C12D51D326F639LL))))
    { 
        int8_t l_157 = 0xEAL;
        int32_t l_162 = 0x7209D690L;
        int32_t l_163 = 0xB46C47A4L;
        struct S0 l_226 = {7UL,0x37L,1UL};
        if (((g_133 |= (g_12 &= (safe_lshift_func_uint8_t_u_s(1UL, 5)))) >= (safe_sub_func_int32_t_s_s(p_25.f2, p_26))))
        { 
            uint32_t l_160 = 0x54CE0AEBL;
            int32_t l_161 = (-2L);
            int32_t l_164 = 9L;
            if ((safe_mod_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u(l_157, (l_160 = (l_123[2][4][3] = ((l_157 >= 0xCDBAL) ^ ((g_12 ^= (safe_mod_func_int16_t_s_s(l_121, 0xE116L))) ^ 0x5DE3L)))))) , 0x98FE168063154A3FLL), 0xA1B547D56D9DE8EELL)))
            { 
                uint16_t l_165 = 0UL;
                uint32_t l_173 = 0xE209C98DL;
                ++l_165;
                l_163 = ((safe_lshift_func_int16_t_s_u((+l_164), (((g_56 ^= (1L == (l_121 | (safe_rshift_func_int16_t_s_s((l_173 = 1L), 13))))) <= 0x0FC52F8FL) , 65535UL))) > g_36[3].f1);
                g_180[0][0] = ((g_174 , (((g_175 &= p_27) > (safe_rshift_func_uint16_t_u_u(l_157, 14))) , (safe_sub_func_int32_t_s_s((-4L), g_67[2])))) && p_25.f0);
            }
            else
            { 
                p_26 = (safe_lshift_func_int16_t_s_s((g_174.f0.f2.f0 & (g_36[3].f3.f0 && ((safe_lshift_func_int16_t_s_u((g_36[3] , (safe_unary_minus_func_int64_t_s(0L))), 9)) & 1L))), p_24));
                g_186 = func_28(g_36[3].f3.f2.f1);
                if (g_174.f0.f2.f3)
                    goto lbl_187;
            }
            g_186 = func_28(((l_164 &= 1L) < (((safe_sub_func_int16_t_s_s(l_122, (safe_mul_func_int16_t_s_s((g_192 , ((((safe_sub_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(((0x80L ^ l_161) | 1L), p_25.f0)) & g_186.f2), 0x6DF552267BA3AC30LL)) == g_36[3].f0) == 0x9A6C5E243C7E615FLL) <= 65528UL)), g_192.f0)))) | g_5) & 0xA6B9L)));
            return l_157;
        }
        else
        { 
            uint32_t l_207 = 0xFD6BD2BFL;
            struct S0 l_217 = {0xC915AAD5L,0xADL,9UL};
            int32_t l_223[3][4][4] = {{{0xAFA36092L,(-6L),0x12CE60B5L,0x4E837665L},{(-5L),(-6L),(-5L),(-6L)},{0x12CE60B5L,0xC7559ADEL,(-5L),1L},{(-5L),0x1FF2BF14L,0x12CE60B5L,1L}},{{0xAFA36092L,0xC7559ADEL,0xAFA36092L,(-6L)},{0xAFA36092L,(-6L),0x12CE60B5L,0x4E837665L},{(-5L),(-6L),(-5L),(-6L)},{0x12CE60B5L,0xC7559ADEL,(-5L),1L}},{{(-5L),0x1FF2BF14L,0x12CE60B5L,1L},{0xAFA36092L,0xC7559ADEL,0xAFA36092L,(-6L)},{0xAFA36092L,(-6L),0x12CE60B5L,0x4E837665L},{(-5L),(-6L),(-5L),(-6L)}}};
            int i, j, k;
            for (g_84 = 0; (g_84 <= 25); g_84++)
            { 
                int32_t l_202[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_202[i] = 0x9BB9FF98L;
                l_199 = p_25;
                p_24 |= (safe_sub_func_uint32_t_u_u((((g_212 = (l_202[0] > ((safe_rshift_func_int16_t_s_s(g_36[3].f3.f1, 8)) , (((safe_mul_func_uint16_t_u_u((++l_207), ((safe_mod_func_int16_t_s_s((-6L), p_26)) , p_25.f1))) < p_26) > l_202[0])))) > p_25.f0) && g_36[3].f3.f2.f1), 0x823630FBL));
                p_25 = g_186;
            }
            l_223[0][1][2] = ((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_217 , (safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((l_217.f2 , (-3L)), (((~(p_27 = (l_121 >= 0x68EEL))) < (-1L)) != l_122))) == p_25.f2), g_186.f1))), (-1L))), p_25.f0)) , g_124);
            for (g_12 = 0; (g_12 >= 53); g_12 = safe_add_func_uint16_t_u_u(g_12, 1))
            { 
                l_217 = (l_226 = func_28(p_26));
            }
        }
    }
    else
    { 
        g_186 = p_25;
        p_24 = p_25.f1;
    }
    return l_125;
}



static struct S0  func_28(int32_t  p_29)
{ 
    uint8_t l_94[4] = {7UL,7UL,7UL,7UL};
    int32_t l_97 = 0xDC4BF33FL;
    int32_t l_98 = 7L;
    int32_t l_99 = 0xC2A7CE75L;
    int32_t l_100 = 3L;
    int32_t l_101 = 1L;
    int32_t l_102 = (-1L);
    int32_t l_103 = 0x436B3751L;
    int32_t l_104 = 0xF0D073A5L;
    int32_t l_105 = 0x106A97DFL;
    int32_t l_106[3][5] = {{0L,0L,0xEBBB3518L,0x2515ED50L,1L},{0x5F837D81L,0xCEEECAB0L,0xCEEECAB0L,0x5F837D81L,0L},{0x5F837D81L,0x2515ED50L,0x47C8C7C7L,0x47C8C7C7L,0x2515ED50L}};
    struct S4 l_119 = {{5UL,0x70AB6919L,{0x3C95D73FL,8UL,0x340B5CEBL,-1L},2UL}};
    struct S0 l_120[1] = {{4UL,0xF6L,0x1E92AA66L}};
    int i, j;
    for (g_84 = 8; (g_84 > (-15)); g_84 = safe_sub_func_int64_t_s_s(g_84, 5))
    { 
        --l_94[3];
    }
    ++g_108;
    g_66[0] &= ((l_99 = ((((l_97 ^= l_99) != (l_101 = ((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(p_29, (l_119 , l_99))) <= p_29), 0xF1L)) & 0UL))) && 1UL) || l_119.f0.f3)) , l_119.f0.f2.f0);
    return l_120[0];
}



static int32_t  func_30(const struct S5  p_31, int64_t  p_32, const struct S1  p_33, uint32_t  p_34, struct S4  p_35)
{ 
    int32_t l_55 = 0x63F48BF6L;
    int32_t l_68 = 0x879AB5F6L;
    g_57 |= (((safe_mod_func_uint32_t_u_u(((((((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(g_36[3].f3.f2.f0, 4)), (safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((((g_36[3].f3.f2 , (safe_lshift_func_uint8_t_u_s(((g_56 = (((p_35 , ((p_31.f2 ^ p_35.f0.f3) > 4294967289UL)) != g_36[3].f3.f2.f0) || l_55)) , 0x9CL), l_55))) || l_55) || 65526UL), 6)) && 0L), 1UL)), l_55)))) && p_35.f0.f2.f2) >= 0x74066B75L) & p_31.f2) < g_36[3].f3.f3) && 0L) < 255UL) | 0x82C4BD6597F7B615LL), l_55)) | l_55) && 8L);
    for (g_56 = 0; (g_56 > 39); ++g_56)
    { 
        int32_t l_60 = 0x6CEB5FFDL;
        if (l_60)
            break;
        --g_61;
        g_67[1] = ((l_55 = (-10L)) , ((l_55 ^ (g_66[0] = (safe_rshift_func_int8_t_s_u(l_60, (((g_36[3].f1 <= g_61) < 0xC2BAF610L) <= p_35.f0.f2.f1))))) & l_60));
    }
    if ((l_68 &= l_55))
    { 
        int8_t l_82 = (-1L);
        int32_t l_83 = 0xB02A76EDL;
        int32_t l_86[5] = {0x75C66F32L,0x75C66F32L,0x75C66F32L,0x75C66F32L,0x75C66F32L};
        int i;
        for (p_35.f0.f0 = 7; (p_35.f0.f0 != 31); p_35.f0.f0 = safe_add_func_uint8_t_u_u(p_35.f0.f0, 4))
        { 
            int16_t l_81 = 0x7281L;
            struct S2 l_85 = {18446744073709551611UL,1L,{0xF159DA38L,0xB2D0C04BEFBA41DALL,0xE33F4106L,0xCBL},18446744073709551615UL};
            int32_t l_87 = 9L;
            l_68 |= g_36[3].f1;
            g_84 &= (safe_lshift_func_uint16_t_u_s((l_83 &= (safe_sub_func_uint64_t_u_u(((l_81 |= (g_66[0] = (((safe_div_func_int16_t_s_s((safe_mod_func_int16_t_s_s(p_31.f3.f2.f1, 0x0DE5L)), g_2)) && (safe_mod_func_int8_t_s_s((p_33 , p_35.f0.f2.f2), l_55))) < 0xE4AB8F1B91DFB358LL))) < p_35.f0.f1), l_82))), g_67[0]));
            l_55 = (p_35.f0.f2.f3 , ((l_87 ^= (g_56 && ((l_86[3] |= (l_83 = ((l_85 , p_31.f3.f2.f0) < p_31.f3.f2.f3))) ^ l_68))) || p_31.f1));
        }
    }
    else
    { 
        l_55 |= (p_31.f0 ^ (safe_lshift_func_uint8_t_u_u((+p_31.f3.f2.f3), 3)));
    }
    return l_68;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_36[i].f0, "g_36[i].f0", print_hash_value);
        transparent_crc(g_36[i].f1, "g_36[i].f1", print_hash_value);
        transparent_crc(g_36[i].f2, "g_36[i].f2", print_hash_value);
        transparent_crc(g_36[i].f3.f0, "g_36[i].f3.f0", print_hash_value);
        transparent_crc(g_36[i].f3.f1, "g_36[i].f3.f1", print_hash_value);
        transparent_crc(g_36[i].f3.f2.f0, "g_36[i].f3.f2.f0", print_hash_value);
        transparent_crc(g_36[i].f3.f2.f1, "g_36[i].f3.f2.f1", print_hash_value);
        transparent_crc(g_36[i].f3.f2.f2, "g_36[i].f3.f2.f2", print_hash_value);
        transparent_crc(g_36[i].f3.f2.f3, "g_36[i].f3.f2.f3", print_hash_value);
        transparent_crc(g_36[i].f3.f3, "g_36[i].f3.f3", print_hash_value);

    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_66[i], "g_66[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_67[i], "g_67[i]", print_hash_value);

    }
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_132[i][j], "g_132[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_174.f0.f0, "g_174.f0.f0", print_hash_value);
    transparent_crc(g_174.f0.f1, "g_174.f0.f1", print_hash_value);
    transparent_crc(g_174.f0.f2.f0, "g_174.f0.f2.f0", print_hash_value);
    transparent_crc(g_174.f0.f2.f1, "g_174.f0.f2.f1", print_hash_value);
    transparent_crc(g_174.f0.f2.f2, "g_174.f0.f2.f2", print_hash_value);
    transparent_crc(g_174.f0.f2.f3, "g_174.f0.f2.f3", print_hash_value);
    transparent_crc(g_174.f0.f3, "g_174.f0.f3", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_180[i][j], "g_180[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_186.f0, "g_186.f0", print_hash_value);
    transparent_crc(g_186.f1, "g_186.f1", print_hash_value);
    transparent_crc(g_186.f2, "g_186.f2", print_hash_value);
    transparent_crc(g_192.f0, "g_192.f0", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_233.f0.f0, "g_233.f0.f0", print_hash_value);
    transparent_crc(g_233.f0.f1, "g_233.f0.f1", print_hash_value);
    transparent_crc(g_233.f0.f2, "g_233.f0.f2", print_hash_value);
    transparent_crc(g_233.f0.f3, "g_233.f0.f3", print_hash_value);
    transparent_crc(g_233.f1.f0, "g_233.f1.f0", print_hash_value);
    transparent_crc(g_233.f1.f1, "g_233.f1.f1", print_hash_value);
    transparent_crc(g_233.f1.f2.f0, "g_233.f1.f2.f0", print_hash_value);
    transparent_crc(g_233.f1.f2.f1, "g_233.f1.f2.f1", print_hash_value);
    transparent_crc(g_233.f1.f2.f2, "g_233.f1.f2.f2", print_hash_value);
    transparent_crc(g_233.f1.f2.f3, "g_233.f1.f2.f3", print_hash_value);
    transparent_crc(g_233.f1.f3, "g_233.f1.f3", print_hash_value);
    transparent_crc(g_233.f2, "g_233.f2", print_hash_value);
    transparent_crc(g_233.f3, "g_233.f3", print_hash_value);
    transparent_crc(g_233.f4.f0, "g_233.f4.f0", print_hash_value);
    transparent_crc(g_233.f4.f1, "g_233.f4.f1", print_hash_value);
    transparent_crc(g_233.f4.f2.f0, "g_233.f4.f2.f0", print_hash_value);
    transparent_crc(g_233.f4.f2.f1, "g_233.f4.f2.f1", print_hash_value);
    transparent_crc(g_233.f4.f2.f2, "g_233.f4.f2.f2", print_hash_value);
    transparent_crc(g_233.f4.f2.f3, "g_233.f4.f2.f3", print_hash_value);
    transparent_crc(g_233.f4.f3, "g_233.f4.f3", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
