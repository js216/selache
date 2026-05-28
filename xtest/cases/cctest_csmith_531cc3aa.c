// SPDX-License-Identifier: MIT
// cctest_csmith_531cc3aa.c --- cctest case csmith_531cc3aa (csmith seed 1394394026)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe23784ec */
/* @exp_ticks 0x3636 */

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

// Options:   -s 1394394026 -o /tmp/csmith_gen_k9ul60o9/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   uint32_t  f1;
   uint64_t  f2;
   int16_t  f3;
   int64_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

struct S1 {
   uint64_t  f0;
   struct S0  f1;
   const uint64_t  f2;
};

union U3 {
   uint16_t  f0;
   struct S1  f1;
   int32_t  f2;
   int32_t  f3;
};


static const int16_t g_28 = (-1L);
static uint32_t g_36[4] = {4294967287UL,4294967287UL,4294967287UL,4294967287UL};
static struct S1 g_41 = {18446744073709551606UL,{4UL,0xB4FF5102L,0x2AEAFD71021F5EB7LL,4L,0xF6128B293C34F970LL,0x9802EEDAL},1UL};
static int32_t g_54 = 0x8984295AL;
static uint16_t g_56 = 0x1AC0L;
static int32_t g_82 = (-6L);
static uint8_t g_102 = 0x26L;
static int8_t g_103 = 0xA6L;
static union U3 g_150 = {0x43DCL};
static int8_t g_154 = 0xF6L;
static int32_t g_175[4] = {0L,0L,0L,0L};
static uint16_t g_177 = 1UL;
static int32_t g_202 = 0x1878783DL;
static int16_t g_205[1] = {5L};
static uint8_t g_209 = 255UL;
static int8_t g_214 = (-5L);
static uint32_t g_215 = 0x7EA0FBE6L;



static const struct S0  func_1(void);
static int32_t  func_3(int16_t  p_4, uint32_t  p_5, int16_t  p_6, uint8_t  p_7);
static uint8_t  func_11(union U3  p_12, uint32_t  p_13);
static union U3  func_14(struct S0  p_15, int8_t  p_16);




static const struct S0  func_1(void)
{ 
    int64_t l_8 = 2L;
    struct S0 l_17 = {18446744073709551615UL,0x628405CEL,0xD06BDE64F6CBCB1ALL,0xA81AL,8L,0x7E815F84L};
    int32_t l_194 = 0x1CBB092BL;
    int32_t l_208 = 1L;
    int32_t l_212[1];
    int8_t l_213 = 9L;
    int i;
    for (i = 0; i < 1; i++)
        l_212[i] = 0xE9411A3AL;
    l_194 &= ((+(func_3(l_8, ((safe_lshift_func_uint8_t_u_s(func_11(func_14(l_17, l_17.f2), g_28), l_17.f2)) | 7L), l_8, l_17.f5) <= 0x55A550E5L)) & (-10L));
    for (g_54 = (-1); (g_54 < 3); g_54++)
    { 
        int64_t l_201[1];
        int32_t l_204 = 0L;
        int32_t l_207 = 0xFD3AA2E6L;
        int i;
        for (i = 0; i < 1; i++)
            l_201[i] = 0xAB49656563EE52D5LL;
        for (g_150.f1.f0 = 0; (g_150.f1.f0 <= 10); ++g_150.f1.f0)
        { 
            return g_41.f1;
        }
        if ((g_82 = g_41.f1.f2))
        { 
            uint32_t l_199 = 1UL;
            g_82 = l_199;
            if (l_199)
            { 
                if (g_175[0])
                    break;
                g_82 = g_175[2];
            }
            else
            { 
                if (g_102)
                    break;
                g_41.f1 = g_41.f1;
            }
        }
        else
        { 
            int64_t l_200[5];
            int32_t l_203 = 0x7E4DA927L;
            int32_t l_206[3];
            int i;
            for (i = 0; i < 5; i++)
                l_200[i] = 0xBAC27B40A8872ADFLL;
            for (i = 0; i < 3; i++)
                l_206[i] = 0xBA0BCDD2L;
            g_41.f1 = g_41.f1;
            ++g_209;
        }
    }
    ++g_215;
    return g_41.f1;
}



static int32_t  func_3(int16_t  p_4, uint32_t  p_5, int16_t  p_6, uint8_t  p_7)
{ 
    for (g_154 = 3; (g_154 >= 0); g_154 -= 1)
    { 
        int i;
        return g_36[g_154];
    }
    return g_82;
}



static uint8_t  func_11(union U3  p_12, uint32_t  p_13)
{ 
    uint32_t l_151 = 0x00CB0D77L;
    int32_t l_157 = (-1L);
    int32_t l_164 = 0xBC4FE304L;
    int32_t l_168 = (-1L);
    int32_t l_174[2];
    int64_t l_176 = 0L;
    struct S0 l_193 = {0UL,0x804B5BECL,18446744073709551615UL,6L,0L,4UL};
    int i;
    for (i = 0; i < 2; i++)
        l_174[i] = 1L;
    l_151 ^= g_28;
    if (((safe_mod_func_uint32_t_u_u((p_13++), 0x65C7EDEBL)) <= (l_157 = (1L <= (((p_12.f0 ^ 0xDF3E0A31L) >= 0xE5L) , 4L)))))
    { 
        uint32_t l_160 = 18446744073709551614UL;
        int32_t l_169[3][5];
        uint8_t l_192 = 0x5CL;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 5; j++)
                l_169[i][j] = 0xDFE65A55L;
        }
        if ((((p_12.f0 && (safe_div_func_int8_t_s_s(l_160, (l_164 &= (safe_rshift_func_int8_t_s_u((l_157 = (safe_unary_minus_func_uint16_t_u(g_36[2]))), 5)))))) == (l_168 = (~(safe_add_func_uint16_t_u_u((((g_41.f0 >= g_82) < 0x6B1B60A8C9BA8F97LL) , l_160), g_56))))) >= 0x482CL))
        { 
            uint64_t l_170 = 1UL;
            int32_t l_173[3];
            int i;
            for (i = 0; i < 3; i++)
                l_173[i] = 1L;
            --l_170;
            g_177++;
        }
        else
        { 
            struct S0 l_180 = {5UL,18446744073709551610UL,0xF93AC7BCD1F54078LL,0x0EC1L,0x3001FCD465C56C76LL,0UL};
            l_180 = l_180;
        }
        l_192 ^= ((safe_div_func_int8_t_s_s((((((((g_28 >= (g_41.f1.f4 &= (safe_mod_func_int32_t_s_s(l_169[0][3], 0xD22D332AL)))) ^ (((~(safe_rshift_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(((safe_add_func_int64_t_s_s((g_36[1] || g_82), 0x4BCE8A264C335884LL)) != l_169[1][4]), (-8L))) , 18446744073709551611UL) ^ 0UL), p_12.f0))) != l_160) ^ g_54)) , 0x41L) , l_174[0]) == g_41.f1.f5) < g_28) <= 0UL), 8L)) ^ 0xE4584C0B326B5A98LL);
        g_150.f1.f1 = g_41.f1;
    }
    else
    { 
        return g_175[2];
    }
    l_193 = l_193;
    return l_164;
}



static union U3  func_14(struct S0  p_15, int8_t  p_16)
{ 
    int64_t l_24[4];
    int32_t l_34 = 0x2A5B4D63L;
    int32_t l_35 = 1L;
    struct S0 l_104 = {0xF0F39A98L,0UL,0x5A07D0373D2EF88ELL,0x52C4L,0x3C6A4C7F9B13E438LL,0xB9C827B2L};
    uint32_t l_128[3];
    int i;
    for (i = 0; i < 4; i++)
        l_24[i] = 0L;
    for (i = 0; i < 3; i++)
        l_128[i] = 8UL;
    if ((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(l_24[3], (+(((safe_sub_func_int64_t_s_s(g_28, 6L)) , (0xF213L != 0x423CL)) | l_24[1])))), 0xA340L)), (-9L))))
    { 
        uint64_t l_29 = 3UL;
        l_29 |= g_28;
    }
    else
    { 
        int32_t l_32[4][3][3] = {{{0x219FA4A6L,0x219FA4A6L,(-1L)},{0xA2AAFA0BL,0xE1580EB6L,(-1L)},{3L,0x219FA4A6L,3L}},{{0xCF162C80L,0xA2AAFA0BL,0xCE005AB1L},{0x3BBA684AL,3L,3L},{0xCE005AB1L,0xCF162C80L,(-1L)}},{{4L,0x3BBA684AL,(-1L)},{0xCE005AB1L,0xCE005AB1L,0x3D2CF3E4L},{0x3BBA684AL,4L,3L}},{{0xCF162C80L,0xCE005AB1L,0xCF162C80L},{3L,0x3BBA684AL,0x219FA4A6L},{0xA2AAFA0BL,0xCF162C80L,0xCF162C80L}}};
        int32_t l_33 = 0x12652969L;
        uint64_t l_46 = 0x3D476FC58AC37448LL;
        int32_t l_55[5][2][4] = {{{(-8L),0x0197F5CEL,0xB75CAB9BL,4L},{0xC4895D34L,1L,0xCEC93CBCL,0x6010944BL}},{{0xB75CAB9BL,0x6C84D1B3L,(-8L),(-8L)},{0xB75CAB9BL,0xB75CAB9BL,0xCEC93CBCL,0x1981F0B5L}},{{0xC4895D34L,(-8L),0xB75CAB9BL,1L},{0x6C84D1B3L,0L,1L,0xB75CAB9BL}},{{4L,0L,4L,1L},{0L,(-8L),0x5237AE93L,0x1981F0B5L}},{{0x1981F0B5L,0xB75CAB9BL,0x6C84D1B3L,(-8L)},{0x6010944BL,0x6C84D1B3L,0x6C84D1B3L,0x6010944BL}}};
        int i, j, k;
        if ((safe_sub_func_uint8_t_u_u(((g_36[1]--) || ((safe_mul_func_uint16_t_u_u((g_41 , (safe_mod_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u(p_15.f3, (l_33 |= (l_46 & ((safe_lshift_func_uint16_t_u_u(0x3E35L, p_15.f0)) & 0L))))) >= g_41.f2), p_16))), (-8L))) && l_35)), g_41.f1.f4)))
        { 
            uint32_t l_52 = 0x1D17401DL;
            int32_t l_53 = 0x29ABC0A0L;
            union U3 l_77 = {1UL};
lbl_75:
            for (g_41.f1.f1 = 0; (g_41.f1.f1 <= 3); g_41.f1.f1 += 1)
            { 
                uint64_t l_51[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_51[i] = 0x0AB9CA2468F5B79CLL;
                l_53 = ((((l_35 < ((l_33 ^= (-10L)) != (g_41.f0 |= (safe_sub_func_int8_t_s_s(l_51[1], (l_52 && l_24[3])))))) & 0xA3L) & 18446744073709551615UL) & p_15.f3);
            }
            g_56--;
            if ((safe_div_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s(g_41.f1.f0, (safe_lshift_func_uint8_t_u_u(p_16, 4)))) > (l_53 = (safe_lshift_func_int16_t_s_s(p_15.f5, 1)))), 0xE6BA1441L)))
            { 
                struct S1 l_71 = {0x8FDA5E0CF2F28949LL,{1UL,0UL,0UL,6L,-6L,0xBD78952EL},1UL};
                int32_t l_74 = 0x99AA20CFL;
                l_55[2][1][2] = (safe_mul_func_int8_t_s_s(((safe_add_func_int64_t_s_s((l_74 = (l_71 , (l_33 |= (safe_mod_func_int8_t_s_s((-2L), p_15.f2))))), (0xD3L | l_32[1][2][2]))) | g_56), 0L));
                if (p_16)
                    goto lbl_75;
                l_35 &= (!g_41.f1.f5);
            }
            else
            { 
                uint16_t l_83 = 0UL;
                int32_t l_84 = (-6L);
                l_53 ^= (((((((l_77 , ((safe_rshift_func_int8_t_s_s((((l_83 = (g_41.f1 , (g_41.f1.f5 == (safe_sub_func_int32_t_s_s((g_82 = l_24[3]), g_36[1]))))) & 5UL) <= l_84), l_55[4][0][2])) < 4294967291UL)) , p_15.f5) || g_28) & g_41.f2) != 0xDE9EF314L) && 0xE554L) >= g_36[1]);
                g_41.f1 = (p_15 = g_41.f1);
            }
        }
        else
        { 
            for (p_15.f2 = 0; (p_15.f2 != 9); p_15.f2 = safe_add_func_int32_t_s_s(p_15.f2, 9))
            { 
                int32_t l_97 = 0L;
                g_103 ^= (((safe_sub_func_int64_t_s_s((safe_mod_func_int32_t_s_s((((l_55[4][1][1] && ((safe_mul_func_uint8_t_u_u(((g_102 |= (((safe_lshift_func_uint16_t_u_u(g_41.f2, (safe_mul_func_uint16_t_u_u((l_55[4][0][1] &= (l_97 = g_36[1])), ((safe_mod_func_int16_t_s_s((p_15.f3 = (safe_rshift_func_uint16_t_u_u(((p_15.f3 || 0x22L) != l_34), 9))), g_36[3])) < 255UL))))) <= 0L) >= 0xBBF6EB6F9E293F4BLL)) && g_82), p_15.f4)) < l_46)) >= p_15.f2) | (-1L)), p_15.f1)), l_24[0])) && l_97) && g_28);
            }
        }
        l_104 = l_104;
    }
    for (l_35 = 0; (l_35 >= 5); l_35++)
    { 
        int8_t l_114 = 0xE5L;
        int32_t l_127 = 1L;
        uint16_t l_149 = 0x0213L;
        for (l_104.f1 = (-2); (l_104.f1 >= 29); ++l_104.f1)
        { 
            uint32_t l_129 = 0UL;
            for (p_15.f0 = (-10); (p_15.f0 >= 12); p_15.f0 = safe_add_func_int64_t_s_s(p_15.f0, 3))
            { 
                int32_t l_125 = 0x8E86F5F8L;
                int32_t l_126 = 0L;
                int32_t l_136 = (-10L);
                l_129 = (safe_mod_func_uint32_t_u_u((l_114 ^= (~0L)), (safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((((p_15.f4 ^= (g_41.f1.f1 & (l_127 |= (safe_rshift_func_uint16_t_u_s((l_126 = ((6UL < (safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(l_125, 1L)) , g_56), 0x40L))) != 0L)), p_15.f3))))) > p_16) < p_16), l_128[1])) , 0x8DL), 1L))));
                g_82 &= (l_34 |= ((0xDDL == (p_16 = (((p_15.f0 >= (((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((p_15.f2 |= l_136), (((safe_sub_func_uint64_t_u_u(l_129, 0x5EAA69B51010FFDBLL)) && p_15.f5) ^ l_127))), g_41.f1.f2)), 0xAEL)) > p_15.f4) == 0xE4CBL)) < 0x508D56E0L) , g_103))) || 0xBDA2L));
                g_82 = (((--g_56) | ((safe_sub_func_int16_t_s_s(0x35FFL, (safe_mul_func_uint8_t_u_u(((5L > (safe_mul_func_int8_t_s_s((g_103 = l_129), l_126))) | p_16), p_15.f2)))) , g_41.f1.f0)) ^ g_102);
            }
            g_41.f1 = g_41.f1;
        }
        for (g_41.f0 = 0; (g_41.f0 <= 31); g_41.f0++)
        { 
            g_82 = l_149;
            p_15 = p_15;
            for (l_104.f4 = 2; (l_104.f4 >= 0); l_104.f4 -= 1)
            { 
                l_127 = 0x68A2AEEFL;
            }
        }
    }
    return g_150;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_28, "g_28", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_36[i], "g_36[i]", print_hash_value);

    }
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_41.f1.f0, "g_41.f1.f0", print_hash_value);
    transparent_crc(g_41.f1.f1, "g_41.f1.f1", print_hash_value);
    transparent_crc(g_41.f1.f2, "g_41.f1.f2", print_hash_value);
    transparent_crc(g_41.f1.f3, "g_41.f1.f3", print_hash_value);
    transparent_crc(g_41.f1.f4, "g_41.f1.f4", print_hash_value);
    transparent_crc(g_41.f1.f5, "g_41.f1.f5", print_hash_value);
    transparent_crc(g_41.f2, "g_41.f2", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_150.f0, "g_150.f0", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_175[i], "g_175[i]", print_hash_value);

    }
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_205[i], "g_205[i]", print_hash_value);

    }
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
